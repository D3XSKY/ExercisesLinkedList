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
    //Declaration of students array by prompting user to enter number of students
    int numOfSudents;
    Student *studentArray = 0;
    
    cout << "Enter the number of students: ";
    cin >> numOfSudents;
    
    studentArray = new Student[numOfSudents];
    
    //Entering information for each student
    for(int i=0; i<numOfSudents; i++){
        // Prompt user to enter id until it is unique
        do{
            cout << "Enter the id for student number " << i+1 << " ";
            cin >> (studentArray+i)->id;
        }while(checkForId((studentArray+i)->id, studentArray, i));
        cout << "Enter the gender for student number " << i+1 << " ";
        cin >> (studentArray+i)->gender;
        cout << "Enter the year of birth for student number " << i+1 << " ";
        cin >> (studentArray+i)->yearOfBirth;
    }
    
    //Outputing Students information
    for(int i=0; i<numOfSudents; i++){
        cout << "Studnet number " << i+1 << " has id: " << (studentArray+i)->id << endl;
        cout << "Studnet number " << i+1 << " has gender: " << (studentArray+i)->gender << endl;
        cout << "Studnet number " << i+1 << " has year of birth: " << (studentArray+i)->yearOfBirth << endl;
    }
    
    //Delete pointer to an array its a good practice
    delete []studentArray;
    
    return 0;
}
