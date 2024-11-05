```cpp
    Demo *ptr;
    ptr = new Demo(70, 80);
    ptr->display();
    delete ptr;
    ptr = nullptr;
```
### Dangling or Wild Pointers

A dangling pointer is a pointer that points to a memory location that has been deallocated or freed, making it invalid or unpredictable.

It is necessary to reassign a pointer to `nullptr` after deallocating memory as without the reassigment, the pointer turns into a dangling or wild pointer.

