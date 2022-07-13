# global variables

## A. Like credit card

- you can use this variable anywhere in the file

- Program starts, then allocate memory at "Data Area" 

- Program ends, then remove the memory

# local variables

## A. Like local gift card
- you can use this variable only in a specific area

- you can use same name for local variables, if thoses are in two different function 

    (will be described more later note)

- Allocate memory at "Stack Area"

- Function ends, then remove the memory


example 

    //global variable
    int a; 
    
    int main()
    {
        //local variable
        int b;
        return 0;    
    }

what if global and local variable has same named variable?

- local variable has priority in function



# Static variables

## shared variables
- combination of the global and local varible

- Alive even after fucntion ends!

example 

    void increment_print()
    {
        static int value=1;
        ++value;
        std::cout<<value<<'\n';
    }

    int main()
    {
        increment_print();      // output: 1
        increment_print();      // output: 2
        increment_print();      // output: 3
        increment_print();      // output: 4
        return 0;    
    }

