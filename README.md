# Subtle Pointer Arithmetic Bug in C

This repository demonstrates a simple yet easily overlooked bug related to pointer arithmetic and memory management in C.  The bug is subtle but can lead to unexpected behavior and program crashes in more complex scenarios.

## Bug Description

The `bug.c` file contains a program that initializes an integer variable and then modifies its value indirectly through a pointer.  While this is common practice, the code lacks error handling and can be susceptible to issues if the pointer is not properly managed.  The bug might not always manifest itself, making it harder to detect.

## Solution

The `bugSolution.c` provides a possible solution by explicitly checking for null pointers and demonstrating safer pointer handling practices. This enhanced version is less prone to unexpected errors.  This example focuses on the importance of robust pointer usage.