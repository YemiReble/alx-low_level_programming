# 0x14. C - Bit manipulation
![Image is not Available](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/232/bitwise.PNG)

## Learning Objectives
* Understanding how to manipulate bits and use bitwise operators
* Binary
* Hexadecimal

### Checks For Endianness
#### What is meant by endianness?
Endianness is a term that describes the order in which a sequence of bytes is stored in computer memory. Endianness can be either big or small, with the adjectives referring to which value is stored first.

###### In an example found:
```C
/* 
   Write a C program to find out if the underlying 
   architecture is little endian or big endian. 
 */
 
#include <stdio.h>
int main ()
{
	unsigned int x = 0x76543210;
	char *c = (char*) &x;

	printf ("*c is: 0x%x\n", *c);
	if (*c == 0x10)
	{
		printf ("Underlying architecture is little endian. \n");
	}
	else
	{
		printf ("Underlying architecture is big endian. \n");
	}

	return 0;
}

```

Unsing this command **lscpu | head**
Displays the following

Architecture:                    x86_64
CPU op-mode(s):                  32-bit, 64-bit
Byte Order:                      Little Endian
Address sizes:                   48 bits physical, 48 bits virtual
CPU(s):                          2
On-line CPU(s) list:             0,1
Thread(s) per core:              1
Core(s) per socket:              2
Socket(s):                       1
NUMA node(s):                    1


_Have fun looking arround_
