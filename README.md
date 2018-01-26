# Pythonise For CPP

THIS IS A FREE TO USE LIBRARY THAT CONTAINS PYTHON LIKE SYNTAXES FOR C++.

THE FOLLOWING FUNCTIONALITIES ARE PROVIDED (MORE WILL BE REGULARLY):
```
type(<variable-name>)
len(<variable-name>)
input()
print()
split()
range()
INT()
```

Tested on GCC 7.2.0


# Example code:

```CPP
#include "PythoniseForCPP"

int main()
{
    int n = INT(input()) + INT(input());
    for(int i:range(n)) print(i);
    return 0;
}
```
