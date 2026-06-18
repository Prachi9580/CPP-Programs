#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int roll;
    float per;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter Percentage: ";
    cin >> per;

    ofstream file("student.txt");
    file << name << " " << roll << "  " << per;
    file.close();

    cout << "Data Saved!";
    return 0;
}
