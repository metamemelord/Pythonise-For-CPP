#ifndef iostream
#include<bits/stdc++.h>
#endif

#define FOR(i,n) for(i=0;i<n;i++)

inline const char* type(auto arg) { return typeid(arg).name(); }

inline int len(auto arg){ return arg.size();}

bool checkPrim(auto arg)
{
	const char* _type = typeid(arg).name();
	bool _return = typeid(arg).name() == typeid(int).name();
	_return |= _type == typeid(unsigned int).name();
	_return |= _type == typeid(signed int).name();
	
	_return |= _type == typeid(short).name();
	_return |= _type == typeid(unsigned short).name();
	_return |= _type == typeid(signed short).name();
	
	_return |= _type == typeid(long long).name();
	_return |= _type == typeid(unsigned long long).name();
	_return |= _type == typeid(signed long long).name();
	
	_return |= _type == typeid(long long int).name();
	_return |= _type == typeid(signed long long int).name();
	_return |= _type == typeid(unsigned long long int).name();
	
	_return |= _type == typeid(unsigned long).name();
	_return |= _type == typeid(signed long).name();
	_return |= _type == typeid(signed long).name();
	
	_return |= _type == typeid(float).name();
	_return |= _type == typeid(char).name();
	_return |= _type == typeid(std::string).name();
	_return |= _type == typeid(double).name();
	_return |= _type == typeid(long double).name();
	_return |= _type == typeid(bool).name();
	_return |= _type == type("test");
	
	return _return;
}

///////////////////// IO Functions /////////////////////

std::string input()
{
	std::string value;
	getline(std::cin,value);
	return value;
}

void print(auto arg,char _end='\n')
{
	if(checkPrim(arg)) std::cout<<arg<<_end;
}

void print(auto arg, int size, char _end = '\n')
{
	for(auto _i = 0; _i < size; _i++){ std::cout<<arg[_i]; if(_i == size-1) break; std::cout<<" ";}
	std::cout<<_end;
}

///////////////////// String Splitting /////////////////////

std::vector<std::string> split(std::string s, char _char = ' ')
{
	s += _char;
	std::vector<std::string> _return;
	std::string ele = "";
	for(auto i: s)
	{
		if( i == _char)
		{
			if(ele.size()) _return.push_back(ele);
			ele = "";
		}
		else ele += i;
	}
	return _return;
}

///////////////////// Ranging /////////////////////

std::vector<int> range(int end)
{
	std::vector<int> _return;
	for(auto i = 0; i<end ; i++) _return.push_back(i);
	return _return;
}

std::vector<int> range(int beg,int end, int stride=1)
{
	bool check = stride < 0;
	std::vector<int> _return;
	if(!check) for(auto i = beg; i<end ; i+= stride) _return.push_back(i);
	else for(auto i = beg; i>end ; i+= stride) _return.push_back(i);
	return _return;
}

///////////////////// Type Conversion /////////////////////

long long INT(std::string arg, int base = 10)
{
		try{
			return stoll(arg,nullptr,base);
		}
		catch(std::exception& e){
			std::cerr<<"Invalid std::string to int conversion!";
			exit(0);
		}
}

inline long long INT(auto arg){ return (long long) arg; }

std::string bin(auto arg)
{
	std::string _return = "0b";
	while(arg)
	{
		_return += arg%2 + 48;
		arg>>=1;
	}
	return _return;
}

inline std::string str(auto arg){ return std::to_string(arg);}
