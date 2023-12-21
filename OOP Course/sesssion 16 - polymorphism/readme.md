# -----------Polymorphism-----------
* polymorphism is to make the object of one class have different behaviors
*  - it starts with definition of a class & sub classes of that class.
   - then make a pointer of that super class, and assign it the address of the sub class you like
    [ note that the sub classes are the way you want these object to behave]

# Virtual Keyword :

* virtual is a compiler keyword which you declare that the function in the super class have another 
    definition in one of the sub classes, so if polymorphism is applied, the compiler will use the
     function in the sub class.
* [Pure_Virtual_Function] is a virtual function without a body
        Example: virtual set_value(void) = 0 ;
    - the class which contain a pure virtual function is called -Abstract Class-
    - Abstract Class: we can define only pointers from that class, we can't define objects

# [this->] in polymorphism :

* [this->] in the main class will be replaced by the pointer defined from the main class.
    - Example: this->area();----will be---->ptr_1->area()       

* with <polymorphism> you can make an array of different datatypes [Array_Of_Pointers_to_the_Main_Class]

# Early Binding & Late Binding :

* Early binding: direct assign of the pointer of the polymorphism main class. <ex> class *ptr = &obj;
* Late binding: indirect assign of the pointer of the polymorphism main class.
