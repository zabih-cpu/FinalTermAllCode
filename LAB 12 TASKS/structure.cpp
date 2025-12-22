#include <iostream>
#include <cstring>
using namespace std;

// --------------------------------example one in lab 12 ;(imporatant for paper )
// struct Student {
//     int rollNo;
//     char name[30];
//     float marks;
// };

// int main() {
//     Student s1;
//     cout << "Enter Roll No: ";
//     cin >> s1.rollNo;

//     cout << "Enter Name: ";
//     cin >> s1.name;

//     cout << "Enter Marks: ";
//     cin >> s1.marks;

   
//     cout << "\n--- Student Result ---\n";
//     cout << "Roll No: " << s1.rollNo << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Marks: " << s1.marks << endl;

//     if(s1.marks >= 40)
//         cout << "Result: PASS" << endl;
//     else
//         cout << "Result: FAIL" << endl;

//     return 0;
// }

// struct student {
//     int rollnumber;
//     float marks;
//     char grad;
    
// };
// int main (){
//     student s1;
//     s1.rollnumber = 101;
//     s1.marks = 90.3;
//     s1.grad = 'A';

//     cout << "Roll Number: " << s1.rollnumber << endl;
//     cout << "Marks: " << s1.marks << endl;
//     cout << "Grade: " << s1.grad << endl;


// }

// example 1 by zabeeh ullah In lab 12
// struct student {
//     char name[50];
//     string rollnumber;
//     int marks[3];
// };

// int main (){
   
//     student s1={"zabeeh", 101 ,};
//     return 0;
// }  

// struct Student {
//     int rollNo;
//     char name[30];
//     float marks[5];   
// };

// int main() {
//     Student s1 = {101, "Zabih", {85.5, 90.0, 78.5, 88.0, 92.5}};

//     cout << "Roll No: " << s1.rollNo << endl;
//     cout << "Name: " << s1.name << endl;

//     cout << "Marks: ";
//     for(int i = 0; i < 5; i++) {
//         cout << s1.marks[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// -----------------Task 1:  Define a structure Student with members Name, rollNo and marks.
// Create a structure variable, assign values, and display them and also display
// pass and fail.---------------------

// struct student {
//     char name[50];
//     int rollNumber;
//     int marks;
//     bool isPass;
// };
// int main (){
//     student s1 = {"zabeeh ullah", 101, 67};
//     cout << "name : "<< s1.name << endl;
//     cout << "roll number : "<<s1. rollNumber << endl;
//     cout <<"marks : "<<s1.marks << endl;
//     if(s1.marks >= 50){
//          s1.isPass = true;
//         cout << "status : PASS "<<endl;
//     }else{
//         s1.isPass = false;
//         cout << "status : FAIL "<<endl;
//     }
//     return 0;
// }


// -----------------Task 2------------------------
// struct employee {
//     string name;
//     int empID;
//     int salary;
// };
// int main (){
//     employee e1;
//     cout << "Enter name :";
//     getline(cin, e1.name);
//     cout <<"Enter employee ID : ";
//     cin >> e1.empID;
//     cout <<"Enter salary : ";
//     cin >> e1.salary;

//     if(e1.salary < 30000){
//         cout << "low paid employee "<< endl;
//     }else{
//         cout << "high paid employee "<<endl;
//     }
//     return 0;
// }

// -----------------Task 3------------------------
// book structure to store book title and price.
// struct book {
//     string title;
//     int Price;
// };
// int main (){
//     book b1;
//     cout <<"Enter book name : ";
//     cin >> b1.title;
//     cout <<"Enter book price : ";
//     cin >> b1.Price;
//     if(b1.Price < 1000){
//         cout << "Affordable book "<< endl;
//     }else {
//         cout << "Expensive book "<<endl;
//     }

//     return 0;
// }

// -----------------Task 4------------------------
// patient structure to store patient age and temperature.
// struct pateint {
//     int age;
//     int temperature;
// };
// int main (){
//     pateint p1;
//     cout <<"Enter pateint age : ";
//     cin >> p1.age;
//     cout <<"Enter pateint temperature : ";
//     cin  >> p1.temperature;
//     if(p1.temperature > 30 ){
//         cout <<"fever detected "<<endl;
//     }else{
//         cout <<"no fever detected "<<endl;
//     }
//     return 0;

// }

// -----------------Task 5------------------------
// student structure to store name, roll number, marks and pass/fail status of 5 students. using loop

// struct student {
//     string name;
//     int marks;
//     bool isPass;
// };
// int main (){
//     student s1,s2,s3,s4,s5;
//     for(int i=1; i<=5; i++){
//         cout <<"Enter name of students "<<i<<" : ";
//         if(i==1) getline(cin, s1.name);
//         else if (i==2) getline(cin, s2.name);
//         else if (i==3) getline(cin, s3.name);
//         else if (i==4) getline(cin ,s4.name);
//         else if (i==5) getline(cin, s5.name);
//         cout <<"Enter marks of students "<<i<<" : ";
//         if(i==1) cin >> s1.marks;
//         else if (i==2) cin >> s2.marks;
//         else if (i==3) cin >> s3.marks;
//         else if (i==4) cin >> s4.marks;
//         else if (i==5) cin >> s5.marks;
//         cin.ignore(); // to clear the newline character from the buffer
//         cout <<endl;
//     }
//     if(s1.marks >= 50){
//         s1.isPass = true;
//         cout << s1.name <<" : PASS "<<endl;
//     }else if (s2.marks >= 50){
//         s2.isPass = true;
//         cout << s2.name <<" : PASS "<<endl;
//     }else if (s3.marks >= 50){
//         s3.isPass = true;
//         cout << s3.name <<" : PASS "<<endl;
//     }else if (s4.marks >= 50){
//         s4.isPass = true;
//         cout << s4.name <<" : PASS "<<endl;
//     }else if (s5.marks >= 50){
//         s5.isPass = true;
//         cout << s5.name <<" : PASS "<<endl;
//     }else{
//         s1.isPass = false;
//         s2.isPass = false;
//         s3.isPass = false;
//         s4.isPass = false;
//         s5.isPass = false;
//         cout << s1.name <<" : FAIL "<<endl;
//         cout << s2.name <<" : FAIL "<<endl;
//         cout << s3.name <<" : FAIL "<<endl;
//         cout << s4.name <<" : FAIL "<<endl;
//         cout << s5.name <<" : FAIL "<<endl;
//     }

// }

// struct studentdata {
//     string name;
//     int marks;
// };
// int main (){
//     studentdata students[5];
//     for(int i=0; i<5; i++){
//         cout <<"Enter name of students "<<i+1 << " : ";
//         getline(cin, students[i].name);
//         cout <<"Enter marks of students "<<i+1 << " : ";
//         cin >> students[i].marks;
//         cin.ignore(); // to clear the newline character from the buffer
//     }
//     for(int i=0; i<5; i++){
//         if(students[i].marks >= 50){
//             cout << students[i].name <<" : PASS "<<endl;
//         }else{
//             cout << students[i].name <<" : FAIL "<<endl;
//         }
//     }
//     return 0;
// } 



// ----------------------Task 6----------------------------
// car structure to store car model and price.

// struct cares{
//     char model[50];
//     int price;
// };
// int main (){
//     cares c1;
//     cout <<"Enter car Model : ";
//     cin >> c1.model;
//     cout <<"Enter car price : ";
//     cin >> c1.price;

//     if(c1.price < 500000){
//         cout <<"Old model car "<<endl;
//     }else { 
//         cout <<"New model car "<<endl;
//     }
//     return 0;

// }


// ----------------------Task 7----------------------------
// struct BankAccount {
//     string name;
//     int balance;
// };
// int main (){
//     BankAccount b1;
//     cout <<"Enter account holder name : ";
//     getline (cin, b1.name);
//     cout <<"Enter balance amount : ";
//     cin >>b1.balance;

//     if(b1.balance >= 5000){
//         cout <<"Minimum balance mantained "<<endl;
//     }else {
//         cout << "Balance is low"<<endl;
//     }
//     return 0;
// }

// ----------------------Task 8----------------------------
// rectangle structure to store length and width and calculate area.
// struct rectangle{
//     int length;
//     int width;
// };
// int main (){
//     rectangle r1;
//     cout <<"Enter rectangle length : ";
//     cin >> r1.length;
//     cout <<"Enter rectangle width : ";
//     cin  >> r1.width;
    
//     int area = r1.length * r1.width;
//     cout <<"Area of rectange : "<<area << endl;
    
//     return 0;
// }

// ----------------------Task 9----------------------------
// exam structure to store total marks and obtained marks and calculate percentage and grade.
// struct Exam {
//     int TotalMarks;
//     int ObtainedMarks;

// };
// int main (){
//     Exam e1;
//     cout <<"Enter total marks : ";
//     cin >> e1.TotalMarks;
//     cout <<"Enter obtained marks : ";
//     cin >> e1.ObtainedMarks;
//     float percentage = (e1.ObtainedMarks / (float)e1.TotalMarks) * 100;
//     cout <<"Percentage : "<<percentage <<"%"<<endl;
//     if(percentage >= 90){
//         cout <<"Grade A"<<endl;
//     }else if(percentage >= 80){
//         cout <<"Grade B "<<endl;
//     }else if(percentage >= 70){
//         cout <<"Grade C "<<endl;    
//     }else if(percentage >= 60){
//         cout <<"Grade D "<<endl;
//     }else {
//         cout <<"Grade F "<<endl;
//     }

//     return 0;
// }

// ----------------------Task 10----------------------------
// mobile structure to store mobile brand and battery life.

// struct mobile{
//     char brand[50];
//     int batterylife;

// };
// int main (){
//     mobile m1;
//     cout <<"Enter mobile brand : ";
//     cin.getline(m1.brand, 50);
//     cout <<"Enter battery life : ";
//     cin >>m1.batterylife;

//     if(m1.batterylife <=20 ){
//         cout <<"low battery charge needed"<<endl;
//     }else {
//         cout <<"sufficient battery "<<endl;
//     }
//     return 0;

// }







