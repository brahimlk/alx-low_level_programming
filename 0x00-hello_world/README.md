#0x00. C - Hello, World
/*this project is part of alx program*/

--tasks within this project

0. Preprocessor: 
script that runs a C file through the preprocessor and save the result into another file.

1. Compiler:
script that compiles a C file but does not link.

2. Assembler:
generates the assembly code of a C code and save it in an output file.

3. Name:
compiles a C file and creates an executable named cisfun.

4. Hello, puts:
program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
-using function puts

5. Hello, printf:
program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
-using function printf

6. Size is not grandeur, and territory does not make a nation:
program that prints the size of various types on the computer it is compiled and run on.

7. Intel:
script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity:
program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
-not allowed to use printf and puts

---------------------------------------------------------------
0-preprocessor:
#!/bin/bash
gcc -E $CFILE -o c
----------------------------------------------------------------
1-compiler:
#!/bin/bash
gcc -c $CFILE -o $(echo "$CFILE" | cut -d "." -f 1).o
OR
#!/bin/bash
gcc -c $CFILE
----------------------------------------------------------------
2-assembler:
#!/bin/bash
gcc -S $CFILE 
----------------------------------------------------------------
3-name:
#!/bin/bash
gcc $CFILE -o cisfun
----------------------------------------------------------------
4-puts.c:
#include <stdio.h>
/**
 * main - print string using puts function
 * Description: this program prints the string
 * \"Programming is like building a multilingual puzzle
 * Return: value 0
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
----------------------------------------------------------------
5-printf.c
#include <stdio.h>
/**
 * main - print string using printf
 *
 * Description: this program prints with proper grammar, but the
 * outcome is a piece of art,
 * Return: 0
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
----------------------------------------------------------------
6-size.c:
#include <stdio.h>
/**
 * main - prints the size of various data types
 *
 * Description: prints the size of data types
 * (char, int, long int, long long int, float)
 * Return: 0
 */
int main(void)
{
	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", sizeof(ld));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lld));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
----------------------------------------------------------------
100-intel:
#!/bin/bash
gcc -masm=intel -S $CFILE
----------------------------------------------------------------
101-quote.c:
#include <stdio.h>
/**
 * main - print a string using putchar
 *
 * Description: print a sting using putchar within a loop condition
 *
 * Return: 1
 */
int main(void)
{
	char strg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (strg[i] != '\0')
	{
		putchar(strg[i]);
		i++;
	}
	putchar('\n');
	return (1);
}

