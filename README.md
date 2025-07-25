
# _PRINTF

This function is used to print a variety of outputs in the standard output.
It is a rewriting of the **printf** fucntion available in the **stdio library**.

<ins>**Accepted specifiers :**</ins>

| Specifiers | Description |
| :---: | :---: |
| c | print a char |
| s | print a string |
| d | print a digit |
| i | print an integer |
| % | print % |
| r | print a string in reverse |
| R | print a string in ROT13 |

## Man Page

You may execute this command to access the man page of _printf :

````
man ./man_3_printf
````

## Usage/Example

- **Print a sentence with specifiers**
```
_printf("Hello, my name is %s and %c am %d years old", "John", 'I', 50);

Hello, my name is John and I am 50 years old
```
*In this example, %s, %c and %d will look respectively for a string, a character and a digit in the arguments and will print them.*

- **Print a sentence with %**

````
_printf("This is how to print a %%");

This is how to print a %
````
*In this example, the specifier %% will print a single %.*

## Compiling Command

You may compile all files into an executable using GNU Compiler Collection (gcc).

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf
```
## Requirements

- All your files might be compiled on **Ubuntu 20.04 LTS** using gcc
- All your files should end with a **new line**

## Coding Style

This fucntion was coded using the **Betty** coding style.

## Flowchart

<img width="1280" height="1023" alt="flowchart printf" src="https://github.com/user-attachments/assets/ebf1547c-4ceb-407b-8e90-4e8d719814f5" />

## Tests

The following code was used to test the _printf function (you can run it by compiling it with the function into a main.c file) :

````
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0
  */

int main(void)
{
    int len;

len = _printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", len, len);
_printf("Negative:[%d]\n", -762534);
_printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
len = _printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
_printf("Unknown:[%r]\n");
    return (0);
}
````


## Authors

- [@niimatik](https://github.com/niimatik)
- [@GuillaumeLerayGirardeau](https://github.com/GuillaumeLerayGirardeau)

