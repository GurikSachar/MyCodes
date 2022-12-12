#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int age;
    int grade;
};

int main()
{
    int num;
    cout << "Enter the number of students: " << endl;
    cin >> num;
    Student students[num];
    for(int i = 0; i<num; i++)
    {
        cout << "Enter the name of the student: " << endl;
        cin >> students[i].name;
        cout << "Enter the age of the student: " << endl;
        cin >> students[i].age;
        cout << "Enter the grade of the student: " << endl;
        cin >> students[i].grade;
    }
    for(int j = 0; j<num; j++)
    {
        cout << "Name of student: " << students[j].name << endl;
        cout << "Age of the student: " << students[j].age << endl;
        cout << "Grade of the student: " << students[j].grade << endl;
    }
    return 0;
}