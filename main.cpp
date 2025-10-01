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
void displayOptions();                                        // Display all the of operations

void addFront(MovieReview*& head, MovieReview* newNode);      // Add a MovieReview node to the front

void addTail(MovieReview*& head, MovieReview* newNode);       // Add a MovieReview node to the tail

void displayList(MovieReview* head);                          // Display all the MovieReview nodes

// Main function
int main()
{
    // Display the options for the user
    displayOptions();

    // Declare a char variable to store the user's choice
    int choice;

    // Prompt the user to enter thetheir choice
    cout << "   Choice: ";
    cin >> choice;
    cin.ignore(1000, 10);

    // Check whether the entered choice is valid
    while (choice != 1 && choice != 2)
    {
        // Display an error message
        cout << " --- Invalid choice! Please choose 1 or 2! --- ";

        // Prompt the user to enter a new choice
        cout << "   Enter your new choice: ";
        cin >> choice;
        cin.ignore(1000, 10);
    }

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
        - head: a reference to the pointer to the head MovieReview node of the linked list
        - newNode: a pointer to the MovieReview node to add
    Return: none
*/
void addFront(MovieReview*& head, MovieReview* newNode)
{
    // Let newNode points to the current head
    newNode->next = head;

    // Update the new head of the Linked list
    head = newNode;
}

/*
    addTail()
    Add a MovieReview node to the tail of the Linked list
    Arguments:
        - head: a reference to the pointer to the head MovieReview node of the linked list
        - newNode: a pointer to the MovieReview node to add
    Return: none
*/
void addTail(MovieReview*& head, MovieReview* newNode)
{
    // Check whether the list is empty
    if (head == nullptr)
    {
        // Let newNode be the head of the Linked list
        head = newNode;

        return;      // Exit the function
    }

    // Declare a MovieReview node to traverse
    MovieReview* current = head;

    // Iterate until we reach the last MovieReview node of the Linked list
    while (current->next != nullptr)
    {
        // Move on to the next MovieReview node
        current = current->next;
    }

    // Add newNode to the tail of the Linked list
    current->next = newNode;
}

/*
    displayList()
    Display all the MovieReview nodes of the Linked list and the average rating
    Arguments:
        - head: a pointer to the head MovieReview node of the linked list
    Return: none
*/
void displayList(MovieReview* head)
{
    // Check whether the list is empty
    if (head == nullptr)
    {
        // Display an error message
        cout << "There are no reviews in the Linked list!" << endl;

        return;      // Exit the function
    }

    // Declare a new MovieReview node to traverse
    MovieReview* current = head;

    // Declare some variables
    int count = 0;        // An integer counter for the number of nodes
    float sum = 0.0;      // A float variable for the sum of the ratings

    // Iterate through the Linked list until we reach the final node
    while (current)
    {
        // Display the rating and the comment
        cout << "   > Review #" << count + 1 << ": " << current->rating << ": " << current->comment << endl;

        // Update the variables
        count++;                     // Increment the count
        sum += current->rating;      // Update the sum

        // Move on to the next node
        current = current->next;
    }

    // Display the average rating
    cout << "   > Average: " << sum / (float) count << endl;
}