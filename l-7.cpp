// COMSC-210 | Lab 7 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
using namespace std;

void reverseArray(string*);
void displayArray(string*);

int main() 
{
    // Pointer notation
    string *sptr = nullptr;
    sptr = new string[5]; // Dynamically allocates an array of 5 strings
    
    cout << endl << endl;
    cout << "Enter 5 names: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> sptr[i];
    }

    cout << endl << endl;
    displayArray(sptr); // Displays the original and reversed array
    cout << endl;

    // Deallocates the memory used for the dynamic array
    delete[] sptr;

    return 0;
}

// Receives a dynamic string array, reverses the elements, 
// and returns a pointer to the modified array.
void reverseArray(string *sptr)
{
    cout << "Reversed array: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << sptr[i] << " ";
    }
    cout << endl;
}

// Receives a dynamic string array, and outputs its elements.
void displayArray(string *sptr)
{
    cout << "Original array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << sptr[i] << " ";
    }
    cout << endl << endl;

    cout << "Reversed array: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << sptr[i] << " ";
    }
    cout << endl;

}