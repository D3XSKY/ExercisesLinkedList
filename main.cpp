//
//  main.cpp
//  ExercisesLinkedList
//
//  Created by Dejan Misic on 12/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include <iostream>
using namespace std;

//Class of student
class Student{
public:
    int id;
    string gender;
    int yearOfBirth;
};
class Passenger{
public:
    string name;
    int dob;
    int seat;
};
struct node{
    double data;
    node *link;
};

node* populateList(){
node *first, *newNode, *last;
double num;
cout << "Enter a list of doubles ending with 0."
<< endl;
cin >> num;
first = NULL;
while (num != 0.0)
{
    newNode = new node;
    newNode->data = num;
    newNode->link = NULL;
    if (first == NULL)
    {
        first = newNode;
        last = newNode;
    }
    else
    {
        last->link = newNode;
        last = newNode;
    }
    cin >> num;
    //end while
}
    return first;
}
void PrintList(struct node* list){
    
    if (list == NULL) return;
    cout << list->data << "\n";
    PrintList(list->link);
    
}
//Function for checking for an existing id
bool checkForId(int id, Student *studentArray, int studentNumber){
    int sizeOfArray = sizeof(studentArray);
    for(int i=0;i<sizeOfArray;i++){
        if(studentNumber != i && id == (studentArray+i)->id){
            return true;
        }
    }
    return false;
}

int main()
{
    /*
      --> UNCOMMENT BELOW FOR FIRST TASK TO EXECUTE <--
     */
    ////Declaration of students array by prompting user to enter number of students
    //int numOfSudents;
    //Student *studentArray = 0;
    //
    //cout << "Enter the number of students: ";
    //cin >> numOfSudents;
    //
    //studentArray = new Student[numOfSudents];
    //
    ////Entering information for each student
    //for(int i=0; i<numOfSudents; i++){
    //    // Prompt user to enter id until it is unique
    //    do{
    //        cout << "Enter the id for student number " << i+1 << " ";
    //        cin >> (studentArray+i)->id;
    //    }while(checkForId((studentArray+i)->id, studentArray, i));
    //    cout << "Enter the gender for student number " << i+1 << " ";
    //    cin >> (studentArray+i)->gender;
    //    cout << "Enter the year of birth for student number " << i+1 << " ";
    //    cin >> (studentArray+i)->yearOfBirth;
    //}
    //
    ////Outputing Students information
    //for(int i=0; i<numOfSudents; i++){
    //    cout << "Studnet number " << i+1 << " has id: " << (studentArray+i)->id << endl;
    //    cout << "Studnet number " << i+1 << " has gender: " << (studentArray+i)->gender << endl;
    //    cout << "Studnet number " << i+1 << " has year of birth: " << (studentArray+i)->yearOfBirth << endl;
    //}
    //
    ////Delete pointer to an array its a good practice
    //delete []studentArray;
    /*
     --> UNCOMMENT BELOW FOR SECOND TASK TO EXECUTE <--
     */
    //node* nudla;
    //nudla = populateList(); // view function above which populate the list by building it forward
    //PrintList(nudla); // simple recursive function to print each node
    /*
     --> UNCOMMENT BELOW FOR third TASK TO EXECUTE <--
     */
    return 0;
}

