#include <iostream>
#include <stdio.h>
using namespace std;

/* Definition of the structure */
struct Rectangle
{
    int length;
    int height;
}; /*} r1, r2;*/

struct charRectangle
{
    int length;
    int height;
    char x;  /*It looks getting 4 bytes but it use just 1 byte*/
};

/*Declare a variable also here
struct Rectangle r1, r2;*/

int main()
{
    struct Rectangle r1={10, 5}; /*Declare & initialize of the structure*/
    struct charRectangle r2={10, 5};
    printf("Size of rectangle: ");
    printf("%lu", sizeof(r1));
    printf("\nSize of rectangle with character in its definition: ");
    printf("%lu", sizeof(r2));
    cout << "\nDimensions of r1:";
    cout << r1.length << " x " << r1.height;
    
    r1.length = 15;
    r1.height = 7;
    
    cout << "\nCurrent dimensions of r1:";
    cout << r1.length << " x " << r1.height;
    

    return 0;
}