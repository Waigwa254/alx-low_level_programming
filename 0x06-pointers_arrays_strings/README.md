# `C - More pointers, arrays and strings`
**This repository contains code examples and explanations for learning more about pointers, arrays, and strings in the C programming language**

## `0. strcat`
*The _strcat function appends the src string to the dest string, overwriting the terminating null byte '\0' at the end of dest, and then adds a new terminating null byte. It returns a pointer to the resulting string dest.*

## `1. strncat`

*This repository contains a C function that concatenates two strings, dest and src, while limiting the number of bytes to be copied from src. The function follows the prototype:*

1.It will use at most n bytes from src.
2.src does not need to be null-terminated if it contains n or more bytes.
*When using the custom _strncat function, make sure that the dest array has enough space to accommodate the concatenated string up to the specified n bytes to prevent buffer overflows.*


## `2. strncp.`
*This repository contains a C function that copies a string src into another string dest, similar to the standard library function strncpy. The function follows the prototype:
The _strncpy function copies up to n characters from the src string into the dest string and ensures that the destination string is null-terminated. It returns a pointer to the resulting string dest.
The _strncpy function copies characters from the src string to the dest string, up to a maximum of n characters. It ensures that the destination string is null-terminated, even if fewer than n characters are copied.*

## `3. strcmp`
*The _strcmp function compares the two input strings s1 and s2 and returns an integer value to indicate their relationship:

1.If s1 is equal to s2, it returns 0.
2.If s1 is less than s2, it returns a negative value.
3.If s1 is greater than s2, it returns a positive value.*
*The _strcmp function compares the characters of the two input strings s1 and s2 character by character until it finds a difference or reaches the end of either string. It returns the difference between the ASCII values of the first differing characters or 0 if both strings are identical.*


## `4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy`
*The reverse_array function reverses the elements of the input integer array a in place. It does so by swapping the first element with the last element, the second element with the second-to-last element, and so on, until it reaches the middle of the array.

Ensure that the array a passed to the reverse_array function is properly allocated and has at least n elements to avoid memory access issues.
By using this custom reverse_array function, you can efficiently reverse the contents of an integer array in C.*

## `5. Always look up`
*The string_toupper function iterates through each character in the input string and checks if it is a lowercase letter (i.e., within the ASCII range of 'a' to 'z'). If a lowercase letter is found, it converts it to its uppercase equivalent by subtracting the ASCII value of 'a' and adding the ASCII value of 'A'. This modification is done in place.*
*Ensure that the input string passed to the string_toupper function is properly allocated and null-terminated.
This function only converts lowercase letters to uppercase; other characters remain unchanged.
By using this custom string_toupper function, you can easily convert lowercase letters in a string to their uppercase counterparts in C.*

## `6. Expect the best. Prepare for the worst. Capitalize on what comes`
*The cap_string function iterates through each character in the input string and checks if it is the first character of a word. A word is considered to start if it follows a separator character, such as space, tabulation, new line, comma, semicolon, period, exclamation mark, question mark, double quote, opening parenthesis, closing parenthesis, opening curly brace, or closing curly brace. If a character is the first character of a word, it is converted to uppercase.*
*Ensure that the input string passed to the cap_string function is properly allocated and null-terminated.
This function capitalizes the first letter of each word, even if the input contains words with mixed case.
By using this custom cap_string function, you can conveniently capitalize the words in a string in C, considering various word separators.*

## `7. Mozart composed his music not for the elite, but for everybody`
*This code defines the leet function that encodes the input string according to the given rules. It uses a character mapping array (leet_map) to look up the replacements for each character and iterates through the input string, modifying the characters as needed.

Please note the use of (unsigned char) when indexing into leet_map to ensure proper mapping for all characters within the extended ASCII character set.*

