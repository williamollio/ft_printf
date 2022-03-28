# ft_printf

Summary: This project is pretty straight forward. You will recode printf. Hopefully you will be able to reuse it in future projects without the fear of being flagged as a cheater. You will mainly learn how to use variadic arguments.

Introduction : The versatility of the printf function in C represents a great exercise in programming for us. This project is of moderate difficulty. It will enable you to discover variadic functions in C.
The key to a successful ft_printf is a well-structured and good extensible code.

[Subject PDF](https://github.com/williamollio/ft_printf/blob/master/subject/printf.pdf)

# Clone
Open a terminal and run following command:
```
git clone <repository url>
```
# Run
Go to the created repository and run following command:
```
make
```
Make sure that libftprintf.a and ft_printf.h are in the same directory that you want to call ft_printf from.
Include ft_printf.h in your files
```c
#include "ft_printf.h"
```
Compile your files with libftprintf.a
```bash
gcc yourfile_01.c libftprintf.a
```
Use clean to delete all object files, fclean to remove all object files and libftprintf.a and re to recompile the library
```bash
make clean / make fclean / make re
```
# Explanations

The following format specifiers of the original printf function are reproduced :

| Format specifier        | Description                                                              |
| :---                   | :---                                                                    |
| %d                      | print a decimal (base 10) number                                                  |
| %i                      | print an integer in base 10                                                  |
| %u                      | print an unsigned decimal (base 10) number                                               |
| %x                      | print a number in hexadecimal (base 16) (lowercase)                        |
| %X                      | print a number in hexadecimal (base 16) (uppercase)                        |
| %c                      | print a single character                                               |
| %s                      | print a string of characters                                          |
| %p                      | The void * pointer argument is printed in hexadecimal                                               |
| %%                      | print a percent sign  |
