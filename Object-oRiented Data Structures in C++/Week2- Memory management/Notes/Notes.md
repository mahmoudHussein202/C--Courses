# **Stack Memory**
- In C++, programmers like us have control over the memory and the lifecycle of every single variable we create.
- Stack memory is associated with the current function, so when the function returns or ends , the stack memory of  that function is released.
- Stack memories are always starts from a high address and keep moving downwards to zero address:

  ![](Aspose.Words.5ac65091-2037-48ea-b6ac-5a99d7f794d4.001.png)

![](Aspose.Words.5ac65091-2037-48ea-b6ac-5a99d7f794d4.002.png)















- The first allocated variable have the highest address [not always]
# **Heap Memory**
- Unlike stack memory, heap memory allow us to create memory independent of the lifecycle of a function
- "**new**" Keyword will returns a **pointer** to the memory storing the data
- The "**new**" operator will :
1. Allocate memory on the heap for the data structure
1. Initialize the data structure
1. Return a pointer to start of the data structure
- If you want to reclaim the memory allocated, just use "**delete**" Keyword.

Note: heap memory has lower addresses than stack memory, look at this example:

- **Int \*ptr = new int;**

`		`&ptr > ptr "which means that the pointer stored in the stack, but it contain an address in the heap,

`		`**So the address stored in ptr is smaller than the address of the pointer**"



## ![](Aspose.Words.5ac65091-2037-48ea-b6ac-5a99d7f794d4.003.png)![](Aspose.Words.5ac65091-2037-48ea-b6ac-5a99d7f794d4.004.png)**Stack memory VS Heap memory:**








- The memory on the left is the heap memory because it's addresses are small if compared with the second memory, so the memory on the right is the stack memory.
- Stack memory starts from the higher address and grow downwards
- Heap memory starts from the lower address and grow upward.
## **Delete:**
- After deallocating the memory allocated, we'll still have a pointer pointing to a deallocated place in the heap, so it's better to make a this pointer become a null pointer for safety.
- ***null\_ptr***  is a keyword having a value of 0x00, this address can't be accessed or changed, so it's a safe way for preventing a non-predicting consequences.
- **Example:**
  - **delete ptr;**
  - **ptr = null\_ptr;**
# **#paragma once**
- Instructions beginning with # are special commands for the compiler called preprocessor directives.
- #paragma once must be written at the beginning of any .h file, it's a protection like header protection in 

  c language

- This instruction prevent the header file from being automatically included multiple times in complex projects
