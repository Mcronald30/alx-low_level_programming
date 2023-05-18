0x17. C - Doubly linked lists
A doubly linked list is a type of data structure that consists of a sequence of elements
where each element contains a reference to both the previous and the next element in the sequence.
This bidirectional linking allows traversal in both forward and backward directions.
In a doubly linked list, each element, commonly referred to as a node, contains three components:
the data or value stored in the node, a reference to the previous node (often called "prev" or "previous")
 and a reference to the next node (often called "next").

More Info
Please use this data structure for this project:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;


0x17. C - Doubly linked lists
C
Algorithm
Data structure
 By: Julien Barbier
 Weight: 1
 Project will start May 18, 2023 6:00 AM, must end by May 19, 2023 6:00 AM
 Checker was released at May 18, 2023 12:00 PM
 An auto review will be launched at the deadline
Resources
Read or watch:

What is a Doubly Linked List
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is a doubly linked list
How to use doubly linked lists
Start to look for the right source of information without too much help
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free, printf and exit
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded
More Info
Please use this data structure for this project:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. Print list
mandatory
Write a function that prints all the elements of a dlistint_t list.
1. List length
mandatory
Write a function that returns the number of elements in a linked dlistint_t list.
2. Add node
mandatory
Write a function that adds a new node at the beginning of a dlistint_t list.
3. Add node at the end
mandatory
Write a function that adds a new node at the end of a dlistint_t list.
4. Free list
mandatory
Write a function that frees a dlistint_t list.
5. Get node at index
mandatory
Write a function that returns the nth node of a dlistint_t linked list.
6. Sum list
mandatory
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
7. Insert at index
mandatory
Write a function that inserts a new node at a given position.
8. Delete at index
mandatory
Write a function that deletes the node at index index of a dlistint_t linked list.

And advanced Questions
Author: Stephen Ronald Nottinson from ALX
