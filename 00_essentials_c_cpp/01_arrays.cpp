//// In arrays, if an element is 2 byte, the total size of the array is (2 * number of elements) in bytes
//// Define an array of 5 integers
//int numbers[5];

//// Initialize an array of 5 integers
//int numbers[5] = {1, 2, 3, 4, 5};

//// Access an element of the array
//int first_element = numbers[0];

//// Modify an element of the array
//numbers[0] = 10;

//// Declare an array of 5 integers
//int main() {
//    // These lines are run in main section of main memory
//    int numbers[5];  // Decleration
//    int numbers2[5] = {1, 2, 3, 4, 5};  // Initialization. This is a declaration and initialization together.
//}

#include<iostream>
using namespace std;

int main() 
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    int B[5] = {2, 4, 6, 8, 10};

    int C[] = {2, 4, 6, 8, 10, 12, 14, 16};

    int D[12] = {2, 4, 6, 8, 10, 12, 14, 16};

    int E[10] = {0}; // It initializes all the elements with 0

    cout << sizeof(A) << endl; // Its size is 20 bytes because each element is 4 bytes
    cout << A[1] << endl;
    printf("%d\n", A[1]); // It is for C language. cout is for C++ language.

    printf("For array B:");
    cout << sizeof(B) << endl;
    cout << B[1] << endl;
    printf("%d\n", B[1]);

    printf("For array C:");
    cout << sizeof(C) << endl; // It is 32 bytes because each element is 4 bytes and there are 8 elements

    printf("For array D:");
    cout << sizeof(D) << endl;
    cout << D[10] << endl;  // It returns 0 because the array is initialized with 12 elements but we are accessing the 11th element
    printf("%d\n", D[1]);

    for (int i = 0; i < 10; i++)
    {
        cout << E[i] << endl;
    }

    for (int x:A)      // This is for C++ language to scan elements of the array
    {
        cout << x << endl;
    }

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int F[n];  // In this method, it is allowed to just declare the array with the size of the variable.
    F[0] = 3;
    F[1] = 1;
    F[2] = 9;

    for (int x:F)
    {
        cout << x << endl;
    }





    return 0;
}