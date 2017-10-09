/* 
 * File:   main.cpp
 * Author: R145130Y
 *
 * Created on October 5, 2017, 9:32 AM
 */

#include <cstdlib>
#include<iostream>
#include<fstream>

using namespace std;

/*
 * 
 */
class students {
    string regNum;
    string firstName;
    string surname;
    int age;

public:

    void SetregNum(string rN) {
        regNum = rN;
    }

    string GetregNum() {
        return regNum;
    }

    void SetfirstName(string fN) {
        firstName = fN;
    }

    string GetfirstName() {
        return firstName;

    }

    void Setsurname(string s) {
        surname = s;
    }

    string Getsurname() {
        return surname;
    }

    void Setage(int a) {
        age = a;
    }

    int Getage() {
        return age;
    }

};

int main(int argc, char** argv) {

    students student;
    string m;
    cout << "Enter Registration Number..";
    cin>>m;
    student.SetregNum(m);
    string b;
    cout << "Enter First Name..";
    cin >> b;
    student.SetfirstName(b);
    string c;
    cout << "Enter Surname..";
    cin >> c;
    student.Setsurname(c);
    int a;
    cout << "Enter Age..";
    cin >> a;
    student.Setage(a);
    ofstream studentsFile("Files\\students", ios::binary);
    studentsFile.write((char*) &student, sizeof (students));
    if (studentsFile)
        cout << "Record saved successfully" << endl;
    studentsFile.close();

    return 0;

}

