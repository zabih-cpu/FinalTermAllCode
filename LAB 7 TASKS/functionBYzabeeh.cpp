#include<iostream>
using namespace std;



//                 ------------------------------------------------ Task1----------------------------
// Write a function named printLine() that prints:
// ====================
// Call this function 3 times from main().
// void printLine(){
//     cout <<"============="<<endl;
// }

// int main (){
    
// printLine();
// printLine();
// printLine();

//   return 0;
// }


//                    -----------------------------------------------TASK 2-----------------------------
// Write a function greet(string name) that prints:
// Hello <name>, welcome to Lab 7
// Call the function using user input name.
// void greet( string name){
//     cout << "hello "<<name<<" welcome to lab 7"<<endl;

// }

// int main (){

//     string userName;
//     cout << "Enter your name ; ";
//     cin >> userName;

//     greet(userName);
//     return 0;
   
// }


// /---------------------------------------/ Average AND sum number using simple function 
// int FindSum(int a, int b, int c){
//     return a + b + c;
// }
// int FindAvrage(int a, int b, int c){
//     int Sum = a + b + c ;
//     double avrage = Sum / 3;
//     return   avrage;

// }

// int main (){
//    int x,y,z;
//    cout << " Enter one value : ";
//    cin >> x;
//    cout << "Enter second value : ";
//    cin >> y;
//    cout <<"Enter third value : ";
//    cin >> z; 

//    cout <<"Avrage AND Sum "<<endl;

//    int sum = FindSum(x, y ,z);
//    cout <<"SUM =   "<<sum<<endl;;

//    int avrage = FindAvrage(x, y, z);
//    cout <<"Average = "<<avrage<<endl;
//    return 0;
// }

// ---------------------------------------task4-------------------
// using call by value 
// void square(int x)
// {
//    x =x * x;
//   cout << " In function x = "<<x<<endl;

    
// }
// int main ()
// {
//   int num = 10; 
//   cout << "In main =  "<<num<<endl;
  
//    square(num);
//   cout <<"After function call ,num = "<<num<<endl;
// }

// --------------------------------task5---------------------
// using call by reference
// void swapnumber(int &a, int &b)

// {
//     int temp = a;
//         a = b;
//         b = temp;
//     cout <<"In function a = "<<a<<" b = "<<b<<endl; 

// }
// int main ()
// {
//     int x = 12;
//     int y = 14;
//     cout << "before swap x = "<<x<<" y = "<<y<<endl;

//     swapnumber(x, y);
    
//     cout << "After swap x = "<<x<<" y = "<<y<<endl;

// }

// ----------------------------------------task6---------------------------------
// void  maxNumber(int &a, int &b, int &c){
//     if(a >= b && a >= c){
//        cout << a <<" is largest number "<<endl;
//     }else if(b >= a && b >= c){
//         cout << b <<"is largest number "<<endl;
//     }else{
//         cout << c <<"is largest number "<<endl;
//     }

// }

// int main (){
//      int x,y,z;
//      cout <<"Enter num 1 = ";
//      cin >> x;
//      cout <<"Enter num 2 = ";
//      cin >> y;
//      cout <<"Enter num 3 = ";
//      cin >> z;

//      maxNumber(x, y , z);

//      cout << "after function call "<<" x = "<<x<<" y = "<<y<<" z = "<<z<<endl;

//     return 0;
// }


// -------------------------------------task7-------------------------------
// check even or odd in function
// check SUM AND AVERAGE 
// usig 5 function 
// AND also pyrimd pattern
// void Evenchecker(int x){
//     if(x % 2 == 0){
//         cout << x <<" Is Even number "<<endl;
//     }else{
//         cout << x <<" Is Odd number "<<endl;
//     }

// }
// int sum(int x, int y, int z){
//     return x + y + z;
    
// }
// int Average(int x, int y, int z){
//     int sumNumber  = sum(x , y , z);
//     double average = sumNumber / 3;
//     return average;
// }
// void largestNumber(int a, int b, int c){
//     if(a >= b && a >= c){
//         cout <<a<<" Is largest number "<<endl;
//     }else if(b >= a && b >= c ){
//         cout <<b<<" Is is largest number "<<endl;
//     }else{
//         cout <<c<<" Is is largest number "<<endl; 
//     }
// }
// void swapNumber(int &a, int &b, int &c){
//       int temp = a;
//           a = b;
//           b = c;
//           c = temp;
//      cout <<"In function  = "<<a<<" "<<b<<" "<<" "<<c<<endl; 
// }
// void pyramidF(int n){
//      cout <<"pyrimd code "<<endl;
//     for(int i=1; i<=n; i++){
//         for(int s=1; s<=n-i; s++){
//             cout << "  ";
//         }
//         for(int j=1; j<=(2*i-1); j++){
//             cout <<"* ";
//         }
//         cout <<endl;
//     }

// }
// int main (){
//     int num;
//     cout << "Enter a number to find if even or odd = ";
//     cin  >> num;
//    Evenchecker(num);
//    cout << endl;
//    cout <<"SUM of number "<<endl;
//    int a = 10, b = 45, c = 50;
   
//    cout << "SUM = "<<sum(a, b, c)<<endl;
//    cout << endl;
   
//    cout <<"Average of number "<<endl;
//    cout <<"Average = "<<Average(a, b , c)<<endl;
//    cout << endl;

//    largestNumber(a, b , c);
//    cout << endl;

//    cout << "In main "<<" a = "<<a<<" b = "<<b<<" c = "<<c<<endl; 
//    swapNumber(a, b, c);
//    cout << "In main After call function"<<" a = "<<a<<" b = "<<b<<" c = "<<c<<endl; 
//    cout <<endl;

//    pyramidF(7);
   

//    return 0; 
// }

// -------------------------------------------task8------------------------------

// int  increasByFive(int &a)
// {
//     a += 5;
//     return a;

// }

// int main ()
// {
//     int num;
//     cout << "Enter number = ";
//     cin  >> num;
//     cout <<"ANS = "<<increasByFive(num)<<endl;
//     cout <<"In main after function call num = "<<num<<endl;

// }



