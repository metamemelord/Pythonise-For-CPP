# Pythonise For CPP

THIS IS A FREE TO USE LIBRARY THAT CONTAINS PYTHON LIKE SYNTAXES FOR C++.

THE FOLLOWING FUNCTIONALITIES ARE PROVIDED (MORE WILL BE REGULARLY):
```
type(<variable>)
len(<STL container>)
input()
print()
split()
range()
INT()
FLOAT()
bin()
str()

Namespace "py" which contains definition of algorithms like, sort(<STL container>, Boolean Reverse) and reverse(<STL container>).
```

Tested on GCC 7.2.0


# Example code:

```CPP
#include "PythoniseForCPP"

int main()
{
    int n = INT(input()) + INT(input());
    for(int i in range(n)) print(i);
    return 0;
}
```
