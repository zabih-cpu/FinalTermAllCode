#include<iostream>
#include<cmath>
#include<limits>
#include<functional>
#include<algorithm>
#include<vector>

using namespace std;

// ----------------------------------lab 7 functions-----------------------
// ----------------------------------lab task1-----------------------
// int add(int a, int b){
//     return a+b;
// }
// int main (){
//       int  result = add(4,5);
//         cout << "result= "<<result<<endl;
//     return 0;
// }

// ------------------------------lab task2
// void greet(string name){
//     cout <<"hello "<<name<<",welcome to lab7 "<<endl;
// }
// int main (){
//     string username;
//     cout <<"enter your name = ";
//     cin>>username;

//     greet(username);
//     return 0;
// }
// practice function 
// int compare(int a,int b){
//      int s = a + b;
//      return s;

// }

// int maxofTwo(int a,int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }

// }
// int main (){
//    cout << maxofTwo(2,3);

//    return 0;

// }

// ===sum number from 1 to n using function logic and for loop
// int sum(int n){
//    int sum=0;
//    for(int i=1; i<=n; i++){
//       sum +=i;
//    }
//    return sum;

// }
// int main (){
//     cout << sum(3)<<endl;
//     cout << sum(5)<<endl;

//     return 0;
// }

// =========factral from 1 to n using functon and for loop
// int fact(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact *=i;
//     }
//     return fact; 
// }
// int main (){
//     cout << fact(5)<<endl;
//     cout << fact(6)<<endl;
//     return 0;
// }

// ------------------------------------------task3
// int sum(int a, int b){     
//     return a+b;

// } 
// int main (){
//     int x;
//     int y;

//     cout <<"Enter first value = ";
//     cin >> x;
//     cout <<"Enter second value = ";
//     cin >> y;

//     int result = sum(x,y);
//     cout <<"sum = "<<result<<endl;

// }

// ---------------------------------------task4
// ---------------------------------------CALL BY VALUE
// void squar(int x){
//     x = x*x;
    // cout <<"inside function,x = "<<x<<endl;

// }
// int main (){
//     int num=5;
//     cout <<"before function call,num = "<<num<<endl;

//     squar(num);
//     cout <<"after  function call,num = "<<num<<endl;

//     return 0;
// }


// --------------------------------------TASK5
// -------------------------------------CALL BY REFERENCE
// void swapNumbers(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x = 10, y = 20;
//     cout << "Before swap: x = " << x << ", y = " << y << endl;

//     swapNumbers(x, y); 
//     cout << "After swap:  x = " << x << ", y = " << y << endl;

//     return 0;
// }


//-------------------------------------- task6
// int  maxofThree(int a, int b,int c){
//     if(a >= b && a >= c){
//         return a;
//     }else if(b >= a && b >= c){
//         return b;
//     }else{
//         return c;
//     }


// }
// int main(){
//     int x;
//     int y;
//     int z;
//     cout <<"Enter first number =  ";
//     cin >> x;
//     cout <<"Enter second number = ";
//     cin >> y;
//     cout <<"Enter third number = ";
//     cin >> z;

//     cout << " max of three = "<< maxofThree(x,y,z) <<endl;

//     return 0;

// }


// ======================================task7

// int counter = 0;

// void updateCounter(){
//     counter ++;
// }
// void local(){

//     int counteer = 100;
//     cout <<"inside local, counter = "<<counter <<endl;

// }
// int main (){
//   cout <<"befor update counter value = "<< counter <<endl;

//   updateCounter();
//   cout <<"after call, counter by global = "<<counter <<endl;

//   local();
//   cout << "after call, counter by local = "<<counter <<endl;

//   return 0;
// }

// int counter = 0;

// void updateCounter() {
//     counter++; 
// }

// void demoLocal() {
//     int counter = 100; 
//     cout << "Inside demoLocal, counter = " << counter << endl;
// }

// int main() {
//     cout << "Global counter before update = " << counter << endl;

//     updateCounter();
//     cout << "Global counter after update = " << counter << endl;

//     demoLocal();
//     cout << "Global counter after demoLocal = " << counter << endl;

//     return 0;
// }


// --------------------------------task8

// int isEven(int x){
//     if(x%2==0){
//         return true;
//     }else{
//         return false;
//     }

// }

// int main(){
//    int num = 4;

//    cout << isEven(num)<<endl;

//    return 0;
   

// }
// // hence 1 is true 


// --------------------------task9

// #include<cmath>
// double area(int r){
//    return M_PI * r ; // for formula  
// }
// int area(int lenght, int width){
//       return lenght * width;
// }
// int main (){

//      int choice;
//     cout <<"what you want to calculate \n"<<endl;
//     cout <<"1.area of circle \n"<<endl;
//     cout <<"2. area of rectangle \n"<<endl;
//     cout <<"Enter your choice(1 to 2 )";
//     cin >> choice;   

//     if(choice == 1){
//     double  r;
//     cout << "area of circle Enter value = ";
//     cin >> r;
//     cout <<"area of circle = " << area(r)<<endl;

//     }else if(choice ==2  ){
        
//     int l;
//     int w;
//     cout <<"enter lenght = ";
//     cin >> l;
//     cout <<"enter width";
//     cin >> w;
//     cout <<"area of rectangle = "<< area(l,w);

//     }else{
//         cout <<"invaled "<<endl;
//     }
//    return 0;
// }

// --------------------------------------------------------task12
// int inputNumber(){
//       int num;
//       cout <<"Enter a number ";
//       cin >> num;
//       return num;
// }
// int  doubleNumber(int  x){
//       return x*2;
// }
// void showResult(int y){
//     cout <<"Result= "<<y<<endl;
// }
// int main(){
//      showResult( doubleNumber( inputNumber() ) );
// }

// -------------------------------------------------------task13
// int sum(int a,int b){
//     return a+b;
// }
// int sub(int a,int b){
//     return a-b;
// }
// int multi(int a,int b){
//     return a*b;
// }
// int divid(int a, int b){
//     if(b == 0){
//         cout<<"error: division of zero!";

//     }
//     return a / b;
// }
// int main (){
//     int choice,x,y;
//     cout<<"calculater menu "<<endl;
//     cout<<"1.Add"<<endl;
//     cout<<"2.subtract"<<endl;
//     cout<<"3.multiply"<<endl;
//     cout<<"4.division"<<endl;
//     cout<<"Enter your choice (1-4)= ";
//     cin >> choice;

//     cout<<"Enter  first  number = ";
//     cin>>x;
//     cout<<"Enter second number = ";
//     cin>>y;

//     switch(choice){
//         case 1:
//          cout <<"result= "<<sum(x,y)<<endl;
//         break;
//         case 2:
//         cout <<"result= "<<sub(x,y)<<endl;
//         break;
//         case 3:
//         cout <<"result= "<<multi(x,y)<<endl;
//         break;
//         case 4:
//         cout <<"result= "<<divid(x,y)<<endl;
//         break;
//         default:
//         cout<<"invalid choice!"<<endl;
//     }
//     return 0;
// }

// --------------------------------------------task13
// int sum(int n){
//     if(n == 1){
//         return 1;

//     }else {
//         return n + sum(n-1);//recursion case

//     }
// }

// int main (){
//     int n;
//     cout <<"Enter a number = ";
//     cin >>n;

//     cout <<"sum from 1 to "<<n<<" = "<<sum(n)<<endl;
//     return 0;
// }



// ------------------------------------------------task14
// void calculate(int a, int b, int &sum, int &diff, int &prod) {
//     sum = a + b;       
//     diff = a - b;      
//     prod = a * b;      
// }

// int main() {
//     int x, y;
//     cout << "Enter first numbers: ";
//     cin >> x;
//     cout <<"Enter second number ";
//     cin >>y;

//     int sum, difference, product;
//     calculate(x, y, sum, difference, product);

//     cout << "Sum = " << sum << endl;
//     cout << "Difference = " << difference << endl;
//     cout << "Product = " << product << endl;

//     return 0;
// }


// int main (){
    // int marks[5];
    // int sum=0;

    // cout <<"enter marks = "<<endl;
    // for(int i=0; i<5; i++){
    //     cin >> marks[i];
    // }
    // for(int i=0; i<6; i++){
    //      sum += marks[i];

    // }
    // cout <<"sum = "<<sum<<endl;

// int main() {
//     char call[];
         
//     for(int i = 0; i < 5; i++) {
//         cin >> call[i];
//     }

    
//     for(int i = 0; i < 5; i++) {
//         cout << call[i] << " ";
//     }

//     return 0;
// }
