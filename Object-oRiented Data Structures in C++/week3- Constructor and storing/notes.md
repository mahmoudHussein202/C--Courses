# **Class Constructors:**
- When there's no constructor in the class, a default constructor is triggered to work and it will initialize the variable members to some default values.
  - For example : primitive variable will be initialized with any value from the memory
- We can make a custom default constructor that will override the compiler default constructor
  - So any constructor [parameterized or  not] will override the compiler default constructor]
# **Copy Constructor:**
- Constructor it's argument is a const reference to the same type of the class itself.
  - const referenced object of the same class passed by reference.
  - Class\_name( const Class\_name &obj);
    - So the object you want to assign it into another object will be passed by reference 
    - We use const because we need to pass this exact values and protect it from changing until we copy all the contents.
- Copy Constructors are invoked automatically when:
  - Passing an object as a parameter (by value)
  - Returning an object as a parameter (by value)
  - Initializing a new object with another pre-initialized object.
# **Custom Assignment Operator:**
- If assignment operator is not provided, the C++ Compiler provides an automatic assignment operator which simply will copy the content of all member variables. 
- It's very important to know that the copy constructor is the same as the assignment operator, but copy constructor is invoked when we construct the class, and the assignment operator is used after construction
- Do define a custom assignment operator:
  - Must be a public member
  - Has a return value of reference to the class
  - Must have the name operator=
  - ` `Has one argument " const reference of the same class type "
    - Ex: class\_name& class\_name(const class\_name & obj);
      - Cube & Cube(const cube& obj);
    - The return will be the class we want to assign to it.
    - The argument is a const reference to the object that will be assigned to the required object.
# **Variable Storage**
- Any variable or object will be stored in either stack or heap.
- Storing in stack :
  - When directly declaration.
  - When we pass by value, a copy of the passed variable will be created inside the function stack, so some stack memory will be allocated for this copy, and reclaimed at the end of the functions' scope
- Storing in heap :
  - When using the keyword **new**, we allocate a memory with the size of the data type.
- Reclaiming the memory allocated:
  - For allocated memory in stack, we have not to worry about it because we'll reclaim it at the end of the scope
  - For allocated memory in heap, we must use **delete** keyword because it'll never be deleted unless we use this keyword.  
# **Class Destructor**
- Automatic destructor is called in stack at the end of the scope
- Automatic destructor is called in heap when you delete the allocated memory using **delete** word.
# **Vector Array (automatic size)**
- In standard library, a std::vector is an array with automatic size
- Syntax : std::vector<type> array\_name;
  - For Example : std::vector<int> list\_of\_int;
# **Modern Range-Based "FOR LOOP"**
In recent versions of C++, there is a version of the for loop that automatically iterates over all of the things in a container. This is very useful when used with a standard library container, because you don't have to worry about trying to access memory outside of a safe range, for example: the loop will automatically begin and end in the right place.

- **Iterate with Temporary variable:**
  - **for ( *temporary variable declaration* : *container* ) { *loop body* }**
    - for example: for(int x : list\_of\_int){ /\*body\*/}
  - each element will be copied to the variable x by value, so any change in x will not affect the container.
- **Make the temporary variable be a reference variable:**
  - By making the temp variable a reference variable, each element will be copied to it by reference.
  - We know that you can assign one reference only for the reference variable, so don't be confused, the std lib. Will handle this by declaring the variable x in each iteration, thus you can initialize by a new reference each iteration.
    - For example:  for(int& x : list\_of\_int){ /\*body\*/}

- A tip for Efficiency:
  - you might want to iterate on an array of objects, and each object can be very large, so it's better to iterate on them by a temporary reference to avoid copying and slow code.
  - If you want to just iterate without copying and also don't want to make any change in the array,

    **Iterate with a const reference instead of iterating with a temp. variable**, this will gives you better performance.

    - For example:  for(const int& x : list\_of\_int){ /\*body\*/}
    - Using const here make the reference to be read only reference
