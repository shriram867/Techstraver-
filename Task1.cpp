#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_of_Courses;
    cout<<"How many courses did you take? ";
    cin>>num_of_Courses;              //The input of number of courses as per problem statement

    double total_Credits = 0.0;
    double total_GradePoints = 0.0;
    double grade;
    double credits;

    for(int i=0;i<num_of_Courses;i++) {
        cout<<"Enter the grade for course "<<i+1<<": ";
        cin>>grade;                                            //The input of Grades as per problem statement
        cout<<"Enter the credits for course "<<i+1<<": ";
        cin>>credits;                                         //The input of Credits per course as per problem statement

        total_Credits+=credits;
        total_GradePoints+=(grade)*(credits);
    }

    double cgpa=total_GradePoints/total_Credits;
    cout<<"Your CGPA is: "<<cgpa<<endl;                      //The end result, that is to display the CGPA of (particular student) User
    return 0;
}
