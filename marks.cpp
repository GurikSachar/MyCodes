#include<bits/stdc++.h>
using namespace std;

class Marks
{
    private:
        int rollno;
        string name;
        double marks;
    public:
        void details()
        {
            cout << "Enter the name of the student: " << endl;
            cin >> name;
            cout << "Enter the roll number of the student: " << endl;
            cin >> rollno;
        }
        int markentry()
        {
            cin >> marks;
            return marks;
        }
        void Display()
        {
            cout << "Name of the student: " << name << endl;
            cout << "Roll Number of the student: " << rollno << endl;
        }
};

class Physics: private Marks
{
    public:
        double physics;
        void entryphy()
        {
            cout << "Enter the marks obtained in Physics: " << endl;
            physics = markentry();
        }
        void Displayphy()
        {
            cout << "Marks in Physics: " << physics << endl;
        }
};

class Chemistry: private Marks
{
    public:
        double chemistry;
        void entrychem()
        {
            cout << "Enter the marks obtained in Chemistry: " << endl;
            chemistry = markentry();
        }
        void Displaychem()
        {
            cout << "Marks in Chemistry: " << chemistry << endl;
        }
};

class Mathematics: private Marks
{
    public:
        double maths;
        void entrymath()
        {
            cout << "Enter the marks obtained in Mathematics: " << endl;
            maths = markentry();
        }
        void Displaymath()
        {
            cout << "Marks in Mathematics: " << maths << endl;
        }
};

int main()
{
    int numofstd;
    double studenttotal[numofstd];
    double averagephy, averagechem, averagemath, averageclass;
    cout << "Enter the number of students in the class: " << endl;
    cin >> numofstd;
    Marks students[numofstd];
    Physics phy[numofstd];
    Chemistry chem[numofstd];
    Mathematics math[numofstd];
    for(int i = 0; i<numofstd; i++)
    {
        students[i].details();
        phy[i].entryphy();
        chem[i].entrychem();
        math[i].entrymath();
    }
    for(int i = 0; i<numofstd; i++)
    {
        students[i].Display(); 
        phy[i].Displayphy();
        chem[i].Displaychem();
        math[i].Displaymath();
        studenttotal[i] = phy[i].physics + chem[i].chemistry + math[i].maths;
        averagephy += phy[i].physics;
        averagechem += chem[i].chemistry;
        averagemath += math[i].maths;
        averageclass += studenttotal[i];
        cout << "Total marks of the student: " << studenttotal[i] << endl;
    }
    averageclass /= numofstd;
    averagephy /= numofstd;
    averagechem /= numofstd;
    averagemath /= numofstd;
    cout << "Average marks of the class in Physics: " << averagephy << endl;
    cout << "Average marks of the class in Chemistry: " << averagechem << endl;
    cout << "Average marks of the class in Mathematics: " << averagemath << endl;
    cout << "Average marks of the class: " << averageclass << endl;
    return 0;
}