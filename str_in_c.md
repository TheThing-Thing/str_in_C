# String in C 
### Summary of the use of string-related commands in C language in the libraries. 
#### (stdio.h), (stdlib.h), and (string.h) .


### include <stdio.h> : เกี่ยวกับการรับและแสดงผลข้อมูล
:
---
#### **Specifier & Output that are often used**
*`c`:  Character*

*`s`:  String of characters*

*`f`:  Decimal floating point*

*`d or i`:  Signed decimal integer*

## **Functions**
**For Input**
|   Function   |  Description | Example Usage | 
|--------------|--------------|----------------|
| `scanf` | It is used to read a character, string, numeric data from the keyboard | ```int age; char name[20]; scanf("%d %s", &age, &name)```|
| `getc()` | reads character from a file  or input stream | ```char ch; ch = getc(fp);``` |
| `gets()` | reads line from the keyboard |```char str[50]; gets(str);``` |
| `getchar()` | reads character from the keyboard |```char c; c = getchar();```|

**For Output**
| Function |  Description | Example Usage |
|----------|--------------|----------------|
|`printf` | It is used to print the character, string, float, integer, octal and hexadecimal values onto the output screen|```printf("Hello world");```|
| `puts()` | writes a line to o/p screen|```char* str1 = "Hello world";puts(str1); puts("Welcome Geeks");```|
| `putchar()` | writes a character to the screen|```char ch = 'G';putchar(ch);```|


### include <stdlib.h > : เกี่ยวกับการแปลงค่าข้อความ
#### : The stdlib.h header defines four variable types, several macros, and various functions for performing general functions.
:
---

## **Functions**
| Function |  *Convert char * to....* |
|----------|--------------------------|
| `atoi()` | to int |
| `atof()` | to Floating-Point |
| `atol()` | to Long Integer |
| `strtod()` | to double or float |
| `strtol()` | to Long Integer |
| `strtoll()` | to Long Long |
| `strtoul()` | to Unsigned Long Integer |

##### **Dynamically Allocated Array functions**
+ `calloc()`: Allocation memory for an array with clear value.
+ `malloc()`: Dynamic Memory allocation.
+ `realloc()`: Change the size of dynamic allocated memory.



### include <string.h> : เกี่ยวกับการจัดการเกี่ยวกับข้อความ
#### : The string.h header defines one variable type, one macro, and various functions for manipulating arrays of characters.
:
---
## **Functions**

+ **How to : length of the String ?**
> `strlen` : The returned value is of type size_t (an unsigned integer type).
>>```strlen(name);```
>>> Ex. ```printf("Length of \"C Language\" is %d\n", strlen("C Language"));```
>>>> or ```for (int i = 0; i < strlen(sitename); i++){}```

+ **How to : copy String ?**
>  `strcpy` : Copying one string into another.
>> ```strcpy(dest, src)```
>>> Ex. ```strcpy(str2, str1);```
>>>> strcpy copying (str1) into (str2)

+ **How to : connect Strings ?**
> `strcat` : Appending one string onto another.
>>```strcat(dest, src)```
>>> Ex. ``` strcat(str1, str2);```
>>>> Concatenating (str1) and (str2)

+ **How to :  compare two strings?**
> `strcmp` : It returns zero if both strings are equal. Otherwise it returns non-zero.
* -1 ถ้าหากว่า str1 มีค่าน้อยกว่า str2
* 0 ถ้าหากว่า str1 มีค่าเท่ากับ str2
* 1 ถ้าหากว่า str1 มีค่ามากกว่า str2
>>```strcmp(str1, str2);```
>>> Ex.```int strcmp (str1,str2);```
>>>> If str1 == str2 then return 0 else return any other number.

+ **How to : find substring in a given string ?**
> `strstr` and `strchr`: This function finds the first occurrence of the second argument string within the first.
>>```strchar(str,'(st.you want find in str)');```
>>> Ex. ```if (strchr(sentence, 'c')) { printf("The letter C was found.\n"); }```
>>>> Returns NULL if not found, and will return its position if found it.

