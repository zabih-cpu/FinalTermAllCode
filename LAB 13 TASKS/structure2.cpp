#include<iostream>
#include<map>
#include<string>
using namespace std;

// ------------------------------Lab 13-----------------------------------
// ------------------------------Task1:-----------------------------------

// struct student {
//     string name;
//     int rollnumber;
//     int marks;
// };
// int main (){
//     student students[3];
//     for(int i=0; i < 3 ; i++){
//         cout << "Enter name of student "<<i+1<<" : ";
//         getline(cin, students[i].name);

//         cout <<"Enter Rollnumber of "<<students[i].name<<" : ";
//         cin >> students[i].rollnumber;
        
//         cout <<"Enter marks of students "<<students[i].name<<" : ";
//         cin >> students[i].marks;
//         cin.ignore();
//     }
//     cout <<"\n-- students data --\n"<<endl;
//     for(int i = 0; i < 3; i++){
//         cout <<"Name: "<<students[i].name<<endl;
//         cout <<"Rollnumber: "<<students[i].rollnumber<<endl;
//         cout <<"Marks: " <<students[i].marks<<endl;
//         cout <<"----------------------\n"<<endl;
//     }

//     return 0;
// }

// struct Student {
//     string name;
//     int rollNo;
//     int marks;
// };

// int main() {
//     Student students[3];   

// Input data for 3 students
//     for(int i = 0; i < 3; i++) {
//         cout << "Enter name of student " << i+1 << ": ";
//         getline(cin, students[i].name);

//         cout << "Enter roll number of " << students[i].name << ": ";
//         cin >> students[i].rollNo;

//         cout << "Enter marks of " << students[i].name << ": ";
//         cin >> students[i].marks;
//         cin.ignore();  // clear newline from buffer for next getline
//     }

// Display all students' data
//     cout << "\n--- Student Data ---\n";
//     for(int i = 0; i < 3; i++) {
//         cout << "Name: " << students[i].name << endl;
//         cout << "Roll No: " << students[i].rollNo << endl;
//         cout << "Marks: " << students[i].marks << endl;
//         cout << "-------------------\n";
//     }

//     return 0;
// }



// ------------------------------Task2:-----------------------------------
// store and display employee details using structure
// struct employee {
//     string name;
//     int id;
//     float salary;
// };
// int main (){
//     employee employees[2];
//     for(int i = 0; i < 2; i++){
//         cout <<"Enter name of employee : "<<i+1<<" : ";
//         getline (cin, employees[i].name);

//         cout <<"Enter ID of "<<employees[i].name<<" :  ";
//         cin >> employees[i].id;

//         cout <<"Enter salary of "<<employees[i].name<<" : ";
//         cin >>employees[i].salary;
//         cin.ignore();
//     }
//     cout <<"\n== Employes data ==\n"<<endl;
//     for(int i = 0; i < 2; i++){
//         cout <<"name : "<<employees[i].name<<endl;
//         cout <<"ID : "<<employees[i].id<<endl;
//         cout <<"salary : "<<employees[i].salary<<endl;
//         cout <<"-----------------------\n"<<endl;

//     }

//     return 0;
// }


// ------------------------------Task3:-----------------------------------

// struct student {
//     string name;
//     int marks;
// };
// int main (){
//     student students[5];
//     for(int i=0; i < 5; i++){
//         cout <<"Enter name of student "<<i+1<<" : ";
//         getline (cin, students[i].name);

//         cout <<"Enter marks of "<<students[i].name<<" : ";
//         cin >> students[i].marks;
//         cin.ignore();
//     }
//     cout <<"\n-- students data --\n"<<endl;
//     for(int i = 0; i < 5; i++){
//         if(students[i].marks >= 50){
//         cout <<"Name: "<<students[i].name<<endl;
//         cout <<"Marks: " <<students[i].marks<<endl;
//         cout <<"----------------------\n"<<endl;
//         }
//     }
 
//     return 0;
   
// }


// ------------------------task 4:---------------------------------

// struct product
// {
//     int quantity;
//     float price;
// };
// int main (){
//     product products[4];
//     int totalBill;
//    for(int i = 0; i < 4; i++){
//     cout <<"Enter quantity of product : "<<i+1<<" : ";
//     cin >> products[i].quantity;

//     cout <<"Enter price of product : "<<i+1<<" : ";
//     cin >> products[i].price;
//     cin.ignore();

//     totalBill = products[i].quantity * products[i].price;
//    }

//    cout <<"\n Total Bill : "<<totalBill<<endl;

// }


// ------------------------------Task 5:----------------------
// struct caresdata{
//     string name;
//     int model;
//     int price;
// };
// int main (){
//     caresdata cares[5];
//     int maxIndex = 0;
//     for(int i = 0; i < 5; i++){
//         cout <<"Enter car name : "<< i+1<<" : ";
//         getline(cin, cares[i].name);
        
//         cout <<"Enter Car "<< cares[i].name<<" model : ";
//         cin >> cares[i].model;

//         cout <<"Enter car "<<i+1<<" price : ";
//         cin >> cares[i].price;
//         cin.ignore();
//         if(cares[i].price > cares[maxIndex].price){
//             maxIndex = i;
//         }
//     }
//     cout <<"\n---- Expensive car -----\n";
//     cout << "Name : "<<cares[maxIndex].name<<endl;
//     cout << "Car model : "<<cares[maxIndex].model<<endl;
//     cout << "Car price : "<<cares[maxIndex].price<<endl;

//     return 0;

//         return 0;
//     }



// ----------------------------------Task 6:----------------------------------------

// struct patient {
//     string name;
//     int temprature;
// };
// int main (){
//     patient patients[6];
//     int fever = 0;
//     for(int i=0; i < 6; i++){
//         cout <<"Enter name of Patient : "<<i+1<<" : ";
//         getline(cin, patients[i].name);
//         cout <<"Enter tempreatur of patient "<<patients[i].name<<" : ";
//         cin >> patients[i].temprature;
//         cin.ignore();
//         if(patients[i].temprature >= 38){
//             fever++;
//         }

//     }
//     cout <<"Amount of Patient have fever : "<<fever<<endl;
// }


// -----------------------------Task 7:----------------------------------------
// struct bankbalance {
//     string name;
//     int balance;
// };
// int main (){
//     bankbalance balances[5];
//     int lowbalance = 0;
//     for(int i = 0; i < 5; i++){
//         cout <<"Enter name : " <<i+1<<" : ";
//         getline (cin, balances[i].name);

//         cout <<"Enter balance of : "<< balances[i].name <<" : ";
//         cin  >> balances[i].balance;
//         cin.ignore();
//     }
//     cout <<"\n-- BankAccount with low balance --\n";
//     for(int i = 0; i < 5; i++){
//         if(balances[i].balance < 5000){
//               cout << "Account Holder: " << balances[i].name << endl;
//             cout << "Balance: Rs " << balances[i].balance << endl;
//             cout << "-----------------------------\n";
//         }
//     }
//     return 0;
// }

// -----------------------------Task 8:---------------------------------------
// struct employee {
//     string name;
//     int salary;

// };
// int main (){
//     employee employees[5];
//     int maxSalary = 0;
//     for(int  i = 0; i < 5; i++){
//         cout << "Enter name : "<< i+1 <<" : ";
//         getline (cin, employees[i].name);

//         cout << "Enter salary of "<<employees[i].name<<" : ";
//         cin  >> employees[i].salary;
//         cin.ignore();

//         if(employees[i].salary > employees[maxSalary].salary){
//             maxSalary = i;
//         }
//     }
//     cout <<"\n--- Employee with highest ----\n";
//     cout <<"Name : "<<employees[maxSalary].name<<endl;
//     cout <<"Salary : "<<employees[maxSalary].salary<<endl;
//     cout <<"-----------------------------------------------"<<endl;

//     return 0;

// }


// ------------------------------Task 9:--------------------------
// Define Mobile structure
// struct Mobile {
//     string brand;
//     string model;
//     int battery; 
// };

// int main() {
//     Mobile mobiles[5];

//     for(int i = 0; i < 5; i++) {
//         cout << "Enter brand of mobile " << i+1 << ": ";
//         getline(cin, mobiles[i].brand);

//         cout << "Enter model of " << mobiles[i].brand << ": ";
//         getline(cin, mobiles[i].model);

//         cout << "Enter battery percentage of " << mobiles[i].brand << " " << mobiles[i].model << ": ";
//         cin >> mobiles[i].battery;
//         cin.ignore(); 
//     }
//     cout << "\n-- Mobiles that need charging (battery < 20%) --\n";
//     for(int i = 0; i < 5; i++) {
//         if(mobiles[i].battery < 20) {
//             cout << "Brand: " << mobiles[i].brand << endl;
//             cout << "Model: " << mobiles[i].model << endl;
//             cout << "Battery: " << mobiles[i].battery << "%" << endl;
//             cout << "-----------------------------\n";
//         }
//     }

//     return 0;
// }


// -------------------------------Task 10:----------------------------------------------
// Define Exam structure
struct Exam {
    string name;
    int marks;
    char grade;
};
char assignGrade(int marks) {
    if(marks >= 80) return 'A';
    else if(marks >= 70) return 'B';
    else if(marks >= 60) return 'C';
    else if(marks >= 50) return 'D';
    else return 'F';
}
int main() {
    Exam students[5];
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    
    for(int i = 0; i < 5; i++) {
        cout << "Enter student name " << i+1 << ": ";
        getline(cin, students[i].name);

        cout << "Enter marks of " << students[i].name << ": ";
        cin >> students[i].marks;
        cin.ignore(); 

        
        students[i].grade = assignGrade(students[i].marks);

        
        switch(students[i].grade) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            case 'F': countF++; break;
        }
    }
    cout << "\n-- Grade Distribution --\n";
    cout << "A: " << countA << " students\n";
    cout << "B: " << countB << " students\n";
    cout << "C: " << countC << " students\n";
    cout << "D: " << countD << " students\n";
    cout << "F: " << countF << " students\n";

    return 0;
}

















