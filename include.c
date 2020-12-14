#include<stdio.h>
#include<assert.h>

int main(){
    
    int a=3,b=3,c=0;
    c=a+b;
    assert(c);    //assert function checks if the value of c is true or not.
                  // it can also check directly assert(a+b);
                  // if the value is true or non-zero, then it allows execution of further lines of program
                  // else if found as not true or zero, the assert function terminates the program calling "abort"
                  
    printf("the value is %d \n",c);
    
    c=a-b;
    assert(c);      // here since value of c is 0, it terminates the program causing an runtime error
    printf("the value is %d \n",c);
    
return 0;
}
