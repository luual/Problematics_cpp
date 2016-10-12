#include <stdio.h>

//////////////////////////////////
// In this example, i will try to 
// show that printf, the overused
// function in c to print something
// isn't perfect and have a bug

int main()
{
    //////////////////////////////////    
    // This is the best example of how
    // to use printf by having a string
    // and print it on screen
    char *message = "Hello World!";
    printf("%s\n", message);
    ////////////////////////////////// 
    // But what is the allocating fails 
    // when you want to compose a string
    char *message2 = NULL;
    printf("%s\n", message2);
    //////////////////////////////////
    // You will get a segmentation fault
    // Which is irrevelant for me to get a
    // a segmentation fault in this kind of
    // with this basic test
    return 0;
}
