# Constructors and destructors in C++
## Aim
To learn about constructors and destructors in C++.

## Theory
In C++, **constructors** and **destructors** are special member functions that handle object initialization and cleanup. A **constructor** is called automatically when an object of a class is created, primarily to initialize the object's data members and allocate any necessary resources. Constructors can be of different types: a **default constructor** takes no arguments and initializes members with default values, while a **parameterized constructor** accepts parameters to initialize the object with specific values, allowing for more flexible object creation. Additionally, a **copy constructor** is used to create a new object as a copy of an existing object, ensuring that all data members are duplicated appropriately, especially important for objects managing dynamic memory.

On the other hand, a **destructor** is invoked automatically when an object goes out of scope or is deleted. Its purpose is to free resources that were allocated to the object during its lifetime, preventing memory leaks. Destructors have the same name as the class but are prefixed with a tilde (`~`). They do not accept parameters or return values and cannot be overloaded.

Together, constructors and destructors manage the lifecycle of objects effectively, ensuring that resources are allocated and deallocated properly, which is crucial in C++ for efficient memory management and preventing resource leaks.

## Output
![image](https://github.com/user-attachments/assets/9fd049c1-5952-4646-97bf-ef27058e8294)

![image](https://github.com/user-attachments/assets/28cd46e8-6060-48f7-a0a4-31a482fa5c49)

![image](https://github.com/user-attachments/assets/792b063c-a787-41a6-9185-05f419956e0f)

![image](https://github.com/user-attachments/assets/20366146-0ae9-42df-9fdc-fb6b86473894)

![image](https://github.com/user-attachments/assets/1e8b47df-1dfd-4020-9cc3-89aad8c7100c)

![image](https://github.com/user-attachments/assets/86d104e2-0ba8-44de-a64a-0cac62a35df1)

## Conclusion
We learnt about how to implement constructors and destructors in C++

