# 0x11. C - printf

## Description

This printf project is a collaboration between Samuel Adebayo and Gerald Juwah. Who are Software Engineers studing at students of ALX school. This project involves a function named "\_printf" which would imitate the actual "printf" command located in the stdio.h library. This function contains some of the basic features and functions found in the man 3 of "printf".

What you would learn from this project:

- How to use git in a team setting
- Applying variadic functions to big projects
- The complexities of printf
- Managing a lot of flies and finding a good workflow

## Prototype

    int _printf(const char *format, ...);

## Usage

- Prints a string to the standard output, according to a given format
- All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command `gcc -Wall -Werror -Wextra pedantic *.c`
- Returns the number of characters in the output string on success, -1 otherwise
- Call it this way: `_printf("format string", arguments...)` where `format string` can contain conversion specifiers and flags, along with regular characters.

The **format** contains the string that is printed. As \_printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

    %[flags][length]specifier

If the program runs successfully, the return value is the amount of chars printed.

| Specifier | Output              |
| --------- | ------------------- |
| c         | Character           |
| d or i    | Decimal integer     |
| s         | String              |
| b         | Binary              |
| %         | Percentage charater |
| o         | Signed Octal        |
| u         | Unsigned Integer    |
| x         | Unsigned Hexadecimal|
| X         | Unsigned Hexadecimal (uppercase) |
| p         | Pointer address     |
| r         | Reversr string of characters |
| R         | ROT13 translaton of string |
| S         | String with special chars replaced by their ASCII value |

## Examples

1. Printing the string of chars "Hello ALX School":

   - Input: `\_printf("Hello %s.", "ALX School");`
   - Output: `Hello ALX School`

2. Printing an integer number:

   - Input: `\_printf("2 + 2 is equal to %d.", 4);`
   - Output: `2 + 2 is equal to 4`

3. Printing a binary:

   - Input: `\_printf("98 in binary is [%b]", 98);`
   - Output: `98 in binary is [1100010]`

## File Functions

### \_printf.c

the function that imitates printf(), by printing data.

---

### main.h

Header file where all Protypes are saved.

---

### man_3_printf

manpage file

---

### parse_char.c

Function that writes the Buffer Character.

    /* Indetifier : %c */

---

### parse_int.c

Function that Prints an Integer.

    /* Indetifier : %i or %d */

---

### parse_string.c

Function that Prints out a String.

    /* Indetifier : %s */

---

### parse_binary.c

Function that Prints a Binary.

    /* Indetifier : %b */

---

### parse_perc.c

Function that Prints a Percentage symbol.

    /* Indetifier : %% */

---
### parse_oct.c

Function that Prints Decimal in Octal.

	/* Indetifier : %o */

---

### parse_hex.c

Function that Prints Decimal in Hexadecimal.

	/* Indetifier : %x */

---

### parse_x_X.c

Function that prints Decimal in Uppercase Hexadecimal.

	/* Indetifier : %X */

---

### parse_unit.c

Function that Prints an Unsigned Integer.

	/* Indetifier : %u */

---

### parse_buff.c

Function that Prints the Buffer

---

### CONTRIBUTION.md

Documentation stating the styleguide on how the work flow was carried out.

---

### .gitignore

Files to be ignored when pushing to github.

---

### project_junkyard

Function files used to run various tests on the \_printf Function.

---

## Authors

- `Samuel Adebayo` adebayo.samuel.olusegun@gmail.com
- `Gerald Juwah` geraldjuwah@gmail.com
