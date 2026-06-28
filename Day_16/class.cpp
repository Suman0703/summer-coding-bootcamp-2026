#include <stdio.h>
#include<iostream>
#include <string>
using namespace std;

class Student
{
    int Student_id;
    string name;
    string branch; // non static = instance data member
    int marks[5];
    
    public:
    static string Clg_name; //static variable = class data member
    void setData(int i, string n, string b){
        Student_id = i;
        name = n;
        branch = b;

    }

    void setMarks(int inputMarks[]){
        for(int i = 0; i < 5; i++){
            marks[i] = inputMarks[i];
        }
    }

    void print_marks(){
        for(int i = 0; i < 5; i++){
            cout << marks[i] << " ";
        }
    }

//    static void show_clg(){
//         cout << Clg_name;
//     }

    void show_data(){
        cout << Student_id <<" "<< name << " "<< branch <<" "<< Clg_name <<endl; 
    }

    void cal_per(){
        int sum = 0;
        for(int i =0; i < 5; i++){
            sum += marks[i];
        }

        cout << "Percentage: "<< sum/5 ;
    }
};

string Student :: Clg_name = "RBPU ";
int main(){

    Student s1;
    Student s2;

    int arr[] = {89, 90, 90, 78, 80};

    s1.setData(102, "Suman", "CSE");
    s1.setMarks(arr);
    s1.print_marks();
    // s1.show_clg();
    // Student :: show_clg();  
    s1.show_data();
    s1.cal_per();
    
    return 0;
}