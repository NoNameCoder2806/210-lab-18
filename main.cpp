// COMSC-210 | Lab 18 | Dat Hoang Vien
// IDE used: Visual Studio Code

// Libraries and headers
#include <iostream>
#include "MovieReview.h"
using namespace std;

// Constants
const float MIN_RATING = 0.0;
const float MAX_RATING = 5.0;

// Function prototypes
void displayMenu();                        // Display the menu of operations

void outputList(MovieReview* head);        // Display all the MovieReview nodes

// Main function
int main()
{
    cout << "Hello World" << endl;

    return 0;
}

// Function implementations
/*
    displayMenu()
    Display the menu of operations the user can implement on the Linked list
    Arguments: none
    Return: none
*/
void displayMenu()
{
    // Display the whole menu
    cout << " --- Linked list operations menu --- " << endl;
    cout << "1. Add a Node to the front" << endl;
    cout << "2. Add a Node to the tail" << endl;
    cout << "3. Insert a Node at a position" << endl;
    cout << "4. Delete a Node at a position" << endl;
    cout << "5. Delete the entire Linked list" << endl;
    cout << "6. Display the Linked list" << endl;
    cout << "7. Exit the program" << endl;
    cout << " ----------------------------------- " << endl;
}