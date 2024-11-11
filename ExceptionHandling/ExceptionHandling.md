# Exception Handling

  In C++ exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. The process of handling these exceptions is called Exception handling.
 Using the exception handling mechanism, the control from one part of the program where the exception occured can be transfered to another part of the code.
 So using exception handling in C++, we can handle the exceptions so that our program keeps running.

 ## `try`, `catch` and `throw` keywords
  C++ provides an inbuilt feature for exception handling. It can be done using the following specialized keywords, `try`, `catch` and `throw` with each having a different purpose.
  ### `try` keyword
   The `try` keyword represents the block of code that may throw a exception placed inside the `try` block. it is followed by one or more `catch` blocks. If an exception occurs, `try` block throws that exception.

  ### `catch` keyword
   The `catch` statement represents the block of code that is executed when a particular exception is thrown from try block. The code to handle the exception inside the `catch` block. 

  ### `throw` keyword
   An exception in C++ can be thrown using the `throw` keyword. When a program encounters a `throw` statement then it immediately terminates the current function and starts finding a matching a catch block to handle the thrown exception.
 
 Multiple `catch` statements can be used to catch different types of exception thrown by a `try` block. The `try` and `catch` keywords come in pairs. We use the `try` block to test some code and if the code throwns an exception, we may handle it in our `catch` block.