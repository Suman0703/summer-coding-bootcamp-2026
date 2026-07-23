# Day 2 - Arrays, Pointers, Strings, and Storage Classes in C

## 📚 Overview
On Day 2, I learned about arrays, pointers, strings, and variable storage in C. I practiced accessing array elements using pointers, printing memory addresses, working with character arrays (strings), and understanding the difference between local and static variables.

---

## 📝 Topics Covered

### Arrays
- Declaring and initializing arrays
- Accessing array elements
- Understanding array indexing

### Pointers
- Array name as the address of the first element
- Printing memory addresses using `%p`
- Dereferencing pointers using `*`
- Pointer arithmetic
- Accessing array elements using pointers

### Strings
- Character arrays
- Initializing strings
- Printing strings using `%s`

### Functions
- Creating user-defined functions
- Function calls

### Storage Classes
- Local variables
- Static variables
- Difference between local and static variables

---

## 💻 Program 1: Arrays and Pointers

```c
#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, 4, 5};

    printf("%p\n", arr);

    printf("%d\n", *arr);

    printf("%d\n", *arr + 4);

    printf("%d\n", *(arr + 3));

    char str[6] = "hihih";
    printf("%s\n", str);

    return 0;
}
```

### 📌 Concepts Learned
- `arr` stores the address of the first element.
- `*arr` gives the first element of the array.
- `*arr + 4` adds 4 to the first element.
- `*(arr + 3)` accesses the element at index 3.
- `%p` prints memory addresses.
- `%s` prints strings.

---

## 💻 Program 2: Local and Static Variables

```c
#include <stdio.h>

void fun()
{
    int x = 10;
    x++;
    printf("%d\n", x);
}

int main()
{
    int x = 20;

    fun();
    fun();
    fun();

    printf("%d\n", x);

    return 0;
}
```

### 📌 Concepts Learned
- Local variables are created every time a function is called.
- Their values do not persist after the function returns.
- If `static int x = 10;` is used instead, the variable retains its value between function calls.
- Variables declared inside `main()` are different from variables declared inside other functions.

---

## 🎯 Key Learnings

- Understood how arrays and pointers are related.
- Learned how pointer arithmetic works.
- Printed memory addresses using `%p`.
- Accessed array elements using pointers.
- Worked with character arrays (strings).
- Learned the difference between local and static variables.
- Understood how function calls create separate local variables.

---

## 🚀 Conclusion

Day 2 strengthened my understanding of memory representation in C through arrays and pointers. I also learned how strings are stored as character arrays and explored the behavior of local and static variables, which is essential for understanding variable lifetime and scope.
```