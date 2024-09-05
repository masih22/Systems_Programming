#include <stdio.h>
int main() //common type to have main return an integer
{
    char c = 'a' ;
    int i ;
    float f ;
    double d ;

    i = 100 ;
    f = 1.0 ;
    d = 12398723897.2332 ;
    
    printf( "Memory sizes of variables...\n\n \
            size of char: %lu \
            size of int: %lu \
            size of float: %lu \
            size of double: %lu\n", 
            sizeof(c), sizeof(int), sizeof(f), sizeof(d) ) ;
    
    return 0;
    
    
    
    
    //return 0; //what is the point of returning something from main?? 
              //-> could be used in different ways by whoever called your program 
              //-> code for everything went fine
}