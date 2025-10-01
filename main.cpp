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
void displayOptions();                                       // Display all the of operations

void addFront(MovieReview* head, MovieReview* newNode);      // Add a MovieReview node to the front

void addTail(MovieReview* head, MovieReview* newNode);       // Add a MovieReview node to the tail

void outputList(MovieReview* head);                          // Display all the MovieReview nodes

// Main function
int main()
{
    cout << "Hello World" << endl;

    return 0;
}

// Function implementations
/*
    displayOptions()
    Display the operations the user can implement on the Linked list
    Arguments: none
    Return: none
*/
void displayOptions()
{
    // Display the options
    cout << "Which Linked list method should we use?" << endl;
    cout << "   [1] New nodes are added at the head of the linked list" << endl;
    cout << "   [2] New nodes are added at the tail of the linked list" << endl;
}

/*
    addFront()
    Add a MovieReview node to the front of the Linked list
    Arguments:
        - head: a MovieReview node (the head of the Linked list)
        - newNode: a MovieReview node to add to the front
    Return: none
*/
void addFront(MovieReview* head, MovieReview* newNode)
{
    
}