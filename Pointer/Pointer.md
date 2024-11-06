# Pointers
## What are Pointers?

A **pointer** is a variable that holds the address of another variable.

## How to Use Pointers

### Defining a Pointer Variable
- Use a data type followed by an asterisk `*` to define a pointer variable.

### Assigning the Address of a Variable to a Pointer
- Use the unary operator `&` to get the address of a variable and assign it to a pointer.

### Accessing the Value Stored in the Address
- Use the unary operator `*` to access the value stored in the address the pointer is pointing to.


## Dangling or Wild Pointers
A pointer that points to a memory location that has been deallocated earlier in the program is called dangling pointer.

A dangling pointer is a very common occurrence that generally occurs when we use the `delete` operator to deallocate memory that was previously allocated and the pointer that was pointing to that memory still points to the same address.

There are also other cases which leads to the pointer being a dangling pointer, these cases are:
1. Deallocation of memory using `delete` keyword.
2. referencing the local variable of the function after it is executed.
3. Variable goes out of scope.

It is necessary to reassign a pointer to `nullptr` after deallocating memory as without the reassigment, the pointer turns into a dangling or wild pointer.

```cpp
    Demo *ptr;
    ptr = new Demo(70, 80);
    ptr->display();
    delete ptr;
    ptr = nullptr;
```
