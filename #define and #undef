/*  usage of  preprocessor directives -> #define and #undef
*/

#include <stdio.h>
#define hello (23+23) //defining a macro variable hello
#undef hello    // removing the macro specified- "hello"
int main(void) {

    #ifdef hello    // checking if a macro hello is defined
    printf("the sum is : %d \n" , hello);  //this statement is evaluated only if the macro is found by #ifdef
    #endif   //end of  if condition
    
    printf("This is the actual output");    //to check execution without using the macros 
    return 0;
}


// and this is another program

#include<stdio.h>
#define name1 100
int x=name1;                //this is initializing x to the value in name1
#undef name1

/*  if int x=name1; is defined 
    after #undef name1, then the variable x cant access the value of x defined.
    
    Like this:>
    #define name1 100
    #undef name1
    int x=name1;    //This would give an error 
                        error: ‘name1’ was not declared in this scope
                                int x=name1;
*/

#define name2 200
int y=name2;
#undef name2

int main(){
    printf("the value is %d \n",x);
    printf("the value is %d \n",y);

    #ifdef name2
    printf("the value is %d \n",x);
    #endif
return 0;
}
