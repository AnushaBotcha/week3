#include<iostream>
using namespace std;

class Student {
public:
    string fullName;
    int rollNum;
    double semPercentage;
    string collegeName;
    int collegeCode;
    
    Student() {
        cout << "Student class initialized!!\n";
    }
    ~Student() {}
};

int main() {
    Student Anusha;
    cout << "Enter your name : ";
    getline(cin, Anusha.fullName);
    cout << "Enter your roll number : ";
    cin >> Anusha.rollNum;
    cout << "Enter your sem percentage : ";
    cin >> Anusha.semPercentage;
    cout << "Enter your college name : ";
    cin >> Anusha.collegeName;
    cout << "Enter your college code : ";
    cin >> Anusha.collegeCode;
    cout << "Name : " << Anusha.fullName << endl;
    cout << "RollNum : " << Anusha.rollNum << endl;
    cout << "SemPercentage : " << Anusha.semPercentage << endl;
    cout << "CollegeName : " << Anusha.collegeName << endl;
    cout << "CollegeCode : " << Anusha.collegeCode << endl;
    return 0;
}
