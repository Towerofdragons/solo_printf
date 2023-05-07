# ALX printf project REDONE

The semester was a bit hectic so I feel I haven't achieved much mostly relying on my partner. Let' have another crack at this 👍

This is printf adapted for windows
----
Apparently, the linux write() syscall cannot be used on windows 
ChatGPT says:

**"No, the write() system call is specific to Unix and Unix-like operating systems, such as Linux and macOS. Windows has a different API for performing similar operations, which is called the Windows API.
In Windows, you can use functions like WriteFile() or WriteConsole() to write data to a file or console, respectively. These functions are part of the Windows API and can be accessed by including the appropriate header files and linking against the necessary libraries."**

TODO:
*custom strlen function : int _strlen(char *str)

Caveat:
Looks like in the previous barely functional version, any call to the writer function would request a new file handle. That breaks the function.
New approach -- for every call to _printf() request the STOUT console handle and keep it constant.

So I'll have to referenc variables across files, hence the ```extern``` keyoword can be used in the main.h file.

Thoughts
---
``char`` is promoted to int since char has a smaller conversion rank:

    > If an int can represent all values of the original type (as restricted by the width, for a bit-field), the value is converted to an int; otherwise, it is converted to an unsigned int. These are called the integer promotions. All other types are unchanged by the integer promotions.