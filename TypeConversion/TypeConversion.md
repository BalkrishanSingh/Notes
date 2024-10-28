# User Defined Data Types in C++

- User-defined data types are designed by the user to suit their requirements.
- The compiler doesn't support automatic type conversions for such data types, 
  so the user must design the conversion routines themselves.

---

## Types of Conversions
There can be three types of conversion situations:
1. **Basic type to class type**  
2. **Class type to basic type**  
3. **Class type to another class type**  

# Class Type Conversions in C++

- In this conversion, the **From** type is a class object, and the **To** type is the basic data type.  
- The normal form of an overloaded casting operator function, also known as a **conversion function**, is used for this purpose.

---

## Type Conversion Using Constructor
- To perform this conversion, the idea is to use the constructor to perform type conversion during the object creation.

---

## Class Type to Another Class Type Conversion
- In this type, one class type is converted into another class type.
- It can be done in two ways:
  1. Using constructors  
  2. Using overloaded casting operator  

### Constructor Method
- In this method, a constructor is created in the destination class to convert one class type to another class type.

### Overloading Operator Method
- In this method, the overloading operator is used in the source class.
