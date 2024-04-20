// TASK 2 Techstraver         "Student Record Management System"
#include<bits/stdc++.h>
using namespace std;
//I have defined our Student class to represent individual student records
class Student{
private:
    string name;
    int id;
    float gpa;
public:
    Student(string n,int i,float g){
        name=n;
        id=i;
        gpa=g;
    }
    void display() const{
        cout<<"Name:"<<name<<", ID:"<<id<<",GPA:"<<gpa<<endl;
    }
};
// Class to manage student records
class StudentDatabase{
private:
    static const int MAXSTUDENTS=100; 
    Student* students[MAXSTUDENTS];// Array to store pointers to students
    int count;//students count
public:
    StudentDatabase(){
        count=0;
    }
    void addStudent(const Student& s){
        if(count<MAXSTUDENTS){
            students[count]=new Student(s);
            count++;
        }else{
            cout<<"Database full! Cannot add more students."<<endl;
        }
    }
    // Function to display all students
    void displayAllStudents() const{
        for(int i=0;i<count;++i){
            students[i]->display();
        }
    }
};
int main(){
    StudentDatabase database; //creating a object to access the StudentDatabase class
    //Inbuilt input to test the system
    database.addStudent(Student("Shriram", 67, 7.07f));
    database.addStudent(Student("Yash",87, 8.34f));
    database.addStudent(Student("Atul", 78, 8.5f));
    cout<<"All Students:"<<endl;
    database.displayAllStudents();
    return 0;
}
