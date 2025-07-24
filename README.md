
# _PRINTF

This function is used to print a variety of outputs in the standard output, such as characters, strings, digits and integers. 
It is a rewriting of the **printf** fucntion available in the **stdio library**.


## Usage/Examples

```
_printf("Hello, my name is %s and I am %d years old", John, 50)

Hello, my name is John and I am 50 years old
```

In this example, %s and %d will looks respectively for a string and a digit in the arguments, and will print them in their place. 

## Compiling command

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Requirements

- All your files might be compiled on **Ubuntu 20.04 LTS** using gcc
- All your files should end with a **new line**

## Coding style

This fucntion was coded using the **Betty** coding style. 

## Flowchart

<img width="719" height="575" alt="flowchart_printf_720" src="https://github.com/user-attachments/assets/685cb9b8-b2c1-4855-be64-40d948f74db0" />

## Tests

The following code was used to test the _printf function :

- len = _printf("Let's try to printf a simple sentence.\n");
- ui = (unsigned int)INT_MAX + 1024;
- addr = (void *)0x7ffe637541f0;
- _printf("Length:[%d, %i]\n", len, len);
- _printf("Negative:[%d]\n", -762534);
- _printf("Character:[%c]\n", 'H');
- _printf("String:[%s]\n", "I am a string !");
- len = _printf("Percent:[%%]\n");
- _printf("Len:[%d]\n", len);
- _printf("Unknown:[%r]\n");


## Authors

- [@niimatik](https://github.com/niimatik)
- [@GuillaumeLerayGirardeau](https://github.com/GuillaumeLerayGirardeau)

