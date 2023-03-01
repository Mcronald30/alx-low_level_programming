0x06. C - Even more pointers, arrays and strings

Introducing multi-dimensional arrays and pointers that point to pointers

Task 0 strcat
*Prototype: char *_strcat(char *dest, char *src);
*This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
*Returns a pointer to the resulting string dest
*FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

Task 1 strncat
Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest

Task 2 strncpy
Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy

Task 3 strcmp
Write a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp
