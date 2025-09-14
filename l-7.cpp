// COMSC-210 | Lab 7 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
using namespace std;

void reverseArray();
void displayArray();


int main() 
{
    
}

// Receives a dynamic string array, reverses the elements, 
// and returns a pointer to the modified array.
void reverseArray()
{
    string arr[5];
    cout << "Enter 5 names: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = 9; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Receives a dynamic string array, and outputs its elements.
void displayArray()