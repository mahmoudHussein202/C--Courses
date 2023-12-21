# --------------- Template ------------- #
* template is a simple yet a powerful tool in c++, it allow us to use same function with variable
    datatypes
* like macros, the datatype will be passed to the template, and template is expanded at compiler time.
    the main difference is in case of template, compiler do a type-check before expansion, while macros
        will expand at precompile stage[.i_file].
====================================================================
# template <typename t>   OR    template <class t>
===============================================================
* now t can hold a datatype and expand at compile time according to the usage.
====================================================================
# With templates you need to pass ordered datatype with variables
==================================================================
* to make sure that no wrong in order of passing, use this <data_type1,data_type2>
    <Example>: summition<float,int>(x,y);
        - now the x will be passed as float, and the y will be passed as int,
        - you must know also which datatype will be used for return, i mean the datatype of the first argument or the datatype of the second argument, and use < , > to make sure of the return value.
===============================================================================
# Notes:
========
* templates definiton must be used before every scope {} , as in example 2.
* when you implement a function that return template, you must pass a [list_of_arguments] first.
==============================================================================
# template Specialization 
=========================
* create a class to deal with a certain  datatype
* i.e you can create a class which work only with a certain datatype and do nothing with others.
