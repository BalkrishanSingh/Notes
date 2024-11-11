# Dynamic Memory Management

C++ allows us to allocate memory dynamically at runtime. This is known as **dynamic memory allocation**.

We can allocate and then deallocate memory dynamically using the `new` and `delete` operators, respectively.

In C++, we need to deallocate the dynamically allocated memory manually once we no longer need the variable.



```cpp
#include <iostream>
using namespace std;

int main()
{
    int *ptr1, *ptr2, *sum;
    ptr1 = new int(40);
    ptr2 = new int(60);
    *sum = *ptr1 + *ptr2;
    cout << *sum;
    delete ptr1;
    delete ptr2;  
    return 0;
}
```

## Advantages to Dynamic Memory Management
 Dynamic Memory allocation allows us to allocate memory as needed during runtime. This flexibility is useful when the size of data structures is not known at compile time or when the size changes during the program execution.

1. ***Data Structures :*** Data structures such as linked list, trees, graphs and resizeable arrays often need to allocate memory dynamically to accomodate varying amounts of data.

2. ***Resource management :***  We can allocate memory when needed and deallocate it when it is no longer required. This leads to better resource utilization. 

3. ***Dynamic arrays :*** In languages like C++, Static arrays have fixed sizes determined at compile time. Dynamic memory allocation allows us to create arrays whose size can be determined during runtime.

