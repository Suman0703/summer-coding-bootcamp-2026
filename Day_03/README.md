# Day 3 - Storage Classes, Operators, and Strings in C

## 📚 Overview

On Day 3, I explored different storage classes in C such as `static`, `extern`, and `register`. I learned how variables behave in different scopes, how to share global variables across multiple files using `extern`, and how `static` variables retain their values between function calls. I also practiced increment/decrement operators and worked with strings using functions from the `<string.h>` library.

---

## 📝 Topics Covered

### Storage Classes
- Local Variables
- Global Variables
- `static` Keyword
- `extern` Keyword
- `register` Keyword

### Operators
- Increment (`++`)
- Decrement (`--`)
- Pre-increment
- Post-increment

### Strings
- Character Arrays
- `strlen()` Function
- Traversing Strings
- String Terminator (`'\0'`)

### Functions
- Function Declaration
- Function Definition
- Function Calls
- Passing Arguments

---

# 💻 Program 1 - Using `extern`

### File: `extern.c`

- Accessing global variables from another file.
- Calling functions defined in another source file.
- Understanding modular programming.

### File: `extern2.c`

- Defining a global variable.
- Defining a function shared using `extern`.
- Using `static` local variables inside functions.

### Concepts Learned

- `extern` allows access to variables defined in another file.
- Global variables can be shared across multiple source files.
- `static` local variables preserve their values between function calls.
- Functions can be separated into different files for better code organization.

---

# 💻 Program 2 - Operators

### File: `operators.c`

Topics covered:

- Post Increment (`a++`)
- Pre Decrement (`--b`)
- Expression Evaluation

Example:

```c
int a = 10;
int b = 22;

printf("%d\n%d\n%d", a++ + --b, a, b);
```

Output

```
31
11
21
```

### Concepts Learned

- Difference between pre-increment and post-increment.
- Operator precedence.
- Expression evaluation.

---

# 💻 Program 3 - Register Storage Class

### File: `register.c`

Topics covered:

- `register` Keyword
- Fast access variables

Example

```c
register int x;
```

### Concepts Learned

- `register` suggests storing a variable in the CPU register for faster access.
- The compiler may ignore the request depending on optimization.
- Register variables cannot have their memory address accessed using the `&` operator.

---

# 💻 Program 4 - Static Storage Class

### File: `static.c`

Topics covered:

- Static Local Variables
- Variable Lifetime

Example

```c
static int x = 10;
```

### Concepts Learned

- Static variables are initialized only once.
- Their values are preserved between function calls.
- Useful for maintaining state inside functions.

---

# 💻 Program 5 - Strings

### File: `string.c`

Topics covered:

- Character Arrays
- `strlen()`
- String Traversal

Example

```c
char str[20] = "Hello World";

int len = strlen(str);
```

### Concepts Learned

- Strings are stored as character arrays.
- `strlen()` returns the length of a string excluding the null character.
- Strings can be traversed character by character until `'\0'`.

---

## 📂 Folder Structure

```
Day_03/
│── Assignment2/
│── extern.c
│── extern2.c
│── operators.c
│── register.c
│── static.c
└── string.c
```

---

## 🎯 Key Learnings

- Understood the purpose of `extern`, `static`, and `register` storage classes.
- Learned how global variables can be shared between multiple source files.
- Explored the lifetime and scope of variables.
- Practiced increment and decrement operators.
- Learned how strings are stored and manipulated in C.
- Used the `strlen()` function to determine string length.
- Traversed strings using loops.

---

## 🚀 Conclusion

Day 3 focused on understanding storage classes, operators, and string handling in C. I learned how variables behave in different scopes, how to organize programs across multiple source files using `extern`, how `static` variables preserve their values, and how to manipulate strings using the standard library. These concepts are essential for writing efficient, modular, and maintainable C programs.
```