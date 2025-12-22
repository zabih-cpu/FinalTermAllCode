#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//------------------------------LAB 11 TASKS CODE------------------------------
// Task 1: cout simple string

// int main (){
//     string str = "Hello, World!";
//     cout <<" Welcome "<<str << endl;
//     return 0;
// }

// Task 2:concanate two string

int main (){
    string str1;
    cout <<"Enter first string : ";
    cin  >> str1;
    string str2;
    cout << "Enter second string : ";
    cin  >> str2;

    string str3 = str1 + " " + str2;
    cout << " after concanation : "<<str3 << endl;
    return 0;
}







