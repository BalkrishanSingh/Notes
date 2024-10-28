# Function Overriding, Binding, and Virtual Functions in C++

## Function Overriding
- In function overriding, the derived class function will override the base class function.

---

## Binding
- Binding refers to the process of converting identifiers into addresses.
- Binding is done for each variable and function.
- For functions, it means that matching the call with the right function definition by the compiler.
- It takes place either at compile time or runtime.

---

### Types of Binding

### 1. Early Binding
- In early binding, the compiler directly associates an address to the function call at compile time.
- Early binding is also called static binding or compile-time binding.

### 2. Late Binding
- In this binding, the compiler matches the function call at runtime with the right function definition.
- This can be achieved by declaring the virtual function.
- Late binding is also called runtime binding or dynamic binding.

---

## Virtual Function
- Virtual function is a member function which is declared within a base class and is redefined by a derived class.
- When we refer to a derived class object using a pointer or a reference using a base class, one can call a virtual function for that object and execute the derived class version of the function.

---

## Pure Virtual Function
- A pure virtual function or an abstract function in C++ is a virtual function which doesn't have an implementation, we only declare it.
- A pure virtual function is declared by assigning zero in the declaration.

---

## Difference between Virtual Function and Pure Virtual Function

| Aspect                                      | Virtual Function                                                                 | Pure Virtual Function                                                         |
|---------------------------------------------|----------------------------------------------------------------------------------|-------------------------------------------------------------------------------|
| **1. Definition**                           | A virtual function is a member function of the base class which can be redefined by a base class. | A pure virtual function is a member function of the base class whose declaration is provided in the base class only and must be redefined in the derived class otherwise derived class also becomes abstract. |
| **2. Abstract Class**                       | Classes having virtual function are not abstract.                                | Base class containing pure virtual function becomes abstract.                 |
| **3. Definition in Base Class**             | Definition is given in the base class.                                           | No definition is given in the base class.                                     |
| **4. Instantiation**                        | Base class having virtual function can be instantiated.                         | Base class having pure virtual function becomes abstract i.e. it can't be instantiated. |
| **5. Redefinition in Derived Class**        | If derived class doesn't redefine virtual function of the base class, then it does not affect compilation. | If derived class doesn't redefine pure virtual function of the base class, then no compilation error is not encountered but like the base class, derived class also becomes abstract. |

