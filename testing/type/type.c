#include <stdio.h>

enum types{
	TYPE_INT = 0,
	TYPE_CHAR = 1,
	TYPE_STRING = 2,
	TYPE_LONG = 3,
	TYPE_DOUBLE = 4,
	TYPE_FLOAT = 5,
	TYPE_INT_ARR = 6,
	TYPE_STRING_ARR = 7,
	TYPE_LONG_ARR = 8,
	TYPE_DOUBLE_ARR = 9,
	TYPE_FLOAT_ARR = 10,
	TYPE_UNKNOWN = -1
};

#define type(X) \
	_Generic(X, \
			int: TYPE_INT, \
			char: TYPE_CHAR, \
			char*: TYPE_STRING, \
			char**: TYPE_STRING_ARR, \
			long: TYPE_LONG, \
			double: TYPE_DOUBLE, \
			float: TYPE_FLOAT, \
			int*: TYPE_INT_ARR, \
			long*: TYPE_LONG_ARR, \
			double*: TYPE_DOUBLE_ARR, \
			float*: TYPE_FLOAT_ARR, \
			default: TYPE_UNKNOWN	)



int main(void){
	printf("%d", type(2));
}
