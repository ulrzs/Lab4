# Laboratory_4
template repo for Labs

Tasks:

->Functions — the basics

->Stammering

->Twin primes

->Menu controlled program

# Functions in C – Quick Reminder



## 1. What is a Function?
A **function** is a reusable block of code that performs a specific task.  
It helps break programs into smaller, logical parts.

Example:

int add(int a, int b) {

    return a + b;
    
}

2. Function Syntax

return_type function_name(parameter_list) {

    // body
    
    return value;   // if return_type is not void
    
}

    return_type: type of value returned (int, double, char, void, …)

    function_name: name you call the function with (e.g. cube)

    parameter_list: input values (can be empty), but brackets needed!

    body: code that run when the function called

3. Function Declaration vs Definition

    Declaration (prototype) tells the compiler the function exists.

    Definition contains the actual code.

   Same as variables Declaration: int a;  definition int a=1;

// Declaration (usually at the top)

int add(int a, int b);<-- It is not mandatory to give name for the parameters here (a,b), as we do not use them, the comiler has to know the types (and the number of parameters) though!

int main() {

    int result = add(3, 4);  // function call
    
    printf("%d\n", result);
    
    return 0;
    
}

// Definition (actual implementation)
int add(int a, int b) {

    return a + b;
    
}

4. Why Use Functions?

    >Organize code into modules

    >Avoid repetition

    >Easier to read, test, and debug

    >Supports top-down design

5. Parameters and Arguments

    >Parameters are variables in the function definition.

    >Arguments are the actual values you pass when calling.

    >Lecturer often mix them together and say parameters for everything...

Example:

int square(int x) {   // x = parameter

    return x * x;
}

int main() {

    int y = square(5);   // 5 = argument
    
    printf("%d\n", y);   // prints 25
    
}

6. void Functions

A function that does not return a value uses void.

void greet(void) {

    printf("Hello!\n");
    
}

int main() {

    greet();  // just calls the function
    
    return 0;
    
}

7. Passing by Value (Default in C)

    In C, function arguments are **copied** into parameters.

    Changing the parameter inside the function does not affect the original variable.

   This will be crucial later! THE FUNCTION WORKS WITH A COPY of the value, not the variable we pass!!!

void change(int x) {

    x = 100;
    
}

int main() {

    int a = 5;
    
    change(a);
    
    printf("%d\n", a); // still 5
    
    return 0;
}

8. Passing by Reference (Using Pointers)
9. 
The other type we will cover later!

10. Scope of Variables

    Variables declared inside a function are local (exist only during the function call recall the call stack we discussed in lecture).

    Variables declared outside all the functions are global (accessible everywhere), and so should not be used!
