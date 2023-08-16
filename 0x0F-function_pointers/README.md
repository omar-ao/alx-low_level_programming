# Project: 0x0F Function pointers
## Tasks

### 0. What's my name
A function that prints a name.
* File: 0-print_name.c
	* Prototype: void print_name(char *name, void (*f)(char *));
### 1. If you spend too much time thinking about a thing, you'll never get it done
A function that executes a function given as a parameter on each element of an array
* File: 1-array_iterator.c
	* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
	* where size is the size of the array
	* and action is a pointer to the function you need to use
### 2. To hell with circumstances; I create opportunities
A function that searches for an integer.
* File: 2-int_index.c
	* Prototype: int int_index(int *array, int size, int (*cmp)(int));
	* where size is the number of elements in the array array
	* cmp is a pointer to the function to be used to compare values
	* int_index returns the index of the first element for which the cmp function does not return 0
	* If no element matches, return -1
	* If size <= 0, return -1
### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
A program that performs simple operations

	* Usage: calc num1 operator num2
	* Operator is one of the following:
		* +: addition
		* -: subtraction
		* *: multiplication
		* /: division
		* %: modulo
	* The program prints the result of the operation, followed by a new line
	* Prints Error if the number of arguments is wrong with exit status of 98
	* If the operator is none of the above prints Error, followed by a new line and exits with status of 99
	* If the user tries to divide (\ or %) by 0, prints Error, followed by a new line and exit with the status 100

The program consists of the following files

* 3-calc.h

This file contains all the function prototypes and data structures used by the program.

* 3-op_functions.c

This file contains the 5 following functions

* op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
* op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
* op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
* op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
* op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

* 3-get_op_func.c

	* Prototype: int (*get_op_func(char *s))(int, int);
	* where s is the operator passed as argument to the program
	* This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
	* If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL

* 3-main.c

This file contains main function

### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

A program that prints the opcodes of its own main function.

* File: 100-main_opcodes.c

	* Usage: ./main number_of_bytes
	* Output format:
		..* the opcodes are printed in hexadecimal, lowercase
		..* each opcode is two char long
		..* listing ends with a new line
	* If the number of argument is not the correct one, prints Error
	* If the number of bytes is negative, prints Error
