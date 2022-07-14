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
if use static variables in private member of "Class"
- should use public function to access private static variables

- "this->" can cause error in public member function, since static member variable may haven't create object



### Remember!
- declare and define static variable in global area
- In "Class", only declarion is available
- In header file, definintion and initialization are impossible

## Const
- declare constant variable >> can not change initial value

example

    // constant parameter
    void function(const int)

    //constant return
    const double func(int)

    //constant function and do not change parameter
    void func(void) const

## Define
- similar to const

- difference
    - define
        - simply replace at pre-processing stage 
    - const
        - allocate memory like ordinary variables
        - prevent changing memory

### !! Aware !!

    #define Double(x*x)
    int num=5;
    printf("%d", Double(++num));

    //result = 49, since x of Double(x*x) will take two steps. 
    //1st x= ++num 
    //2nd x=++(++num)
    //so, x become 7 before processing x*x  

    #define Plus 2+5
    printf("%d", Plus * 5);

    //result = 27, since Plus * 5 is 2+5*5

    #define Plus (2+5)
    printf("%d", Plus * 5);

    //result = 35, since Plus * 5 is (2+5)*5


## Extern

- In C++, Static are Const are internal linkage but Extern is external linkage


