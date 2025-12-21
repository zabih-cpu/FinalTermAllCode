#include<iostream>
#include<string>
#include<vector>
using namespace std;

// int main(){
//     int a=10;
//     int *x=&a;
//     cout << x<<endl;

// }

// basic of pointer 
// int main() {
//     int x = 10;         
//     int* ptr = &x;      

//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << &x << endl;
//     cout << "Value stored in ptr: " << ptr << endl;
//     cout << "Value pointed to by ptr: " << *ptr << endl;

//     *ptr = 20;          
//     cout << "New value of x: " << x << endl;

//     *ptr=100;

//     cout << "new value of x = "<<x<<endl;


//     string name ="zabih";
//     string *name2 = &name;

//     cout << "addrres of name = "<<&name<<endl;
//     *name2 = "hasnat";
//     cout << "print change value = "<<name<<endl;
//     return 0;
// }



// int main (){
//     int arry[4]={12,22,40,78};
//     int *ptr = arry;

//     cout << "first value of array = "<<*ptr++<<endl;  
//     cout << "second value of array = "<<*ptr++ <<endl; 
//     cout << "third  value of array = "<<*ptr++<<endl;  
//     cout << "fourth value of array = "<<*ptr++<<endl;

//     return 0;

// // }
// int main (){
//     string name = "zabih";
//     string city = "rustam";

//     cout << name<<endl;
//     cout << city<<endl;
//     cout << name+city << endl;
// }
// int main (){
//     string name = "hasnat";
//     string name2 = name;
//     cout << name<<endl;
//     cout << name.length()<<endl;
//     cout << name[0]<<endl;
// }
// int main (){
//     string name[3]={"zabih","hasnat","awais karni"};
    
//     cout << name[0]<<endl;
//     cout << name[0][0]<<endl;
//     cout << name[1]<<endl;
// }

// pointer to pointer 
// int main (){
//     float price = 100.23f;
//     float* ptr1 = &price;
//     float** ptr2 = &ptr1;

//     cout <<"address of ptr2 = " <<ptr2<<endl;
//     cout <<"value of ptr2 value is address of ptr1 = "<<*ptr2<<endl;
//     cout <<"value of ptr1 = "<<*(ptr1)<<endl;
//     cout << "value of ptr2 using ** = " <<**(ptr2)<<endl;
// return 0;
// }


// ---------------------pridict output
// int  main (){
//     int a = 5;
//     int* p = &a;
//     int** q = &p;

//     cout <<*(p)<<endl;
//     cout << **(q)<<endl;
//     cout <<p<<endl;
//     cout <<*q<<endl;
// }

// -----------------------------task1------------------------
// int main ()
// {
//     int x=10;
//     int* ptr= &x;
//     cout <<"value of x = "<<x<<endl;
//     cout <<"Address of x = "<<&x<<endl;
//     cout <<"value of x using pointer = "<<*(ptr)<<endl;
//     cout <<"Address of pointer ptr = "<<&ptr<<endl;

//     return 0;
// }

// ----------------------------------task2-------------------------------------------
// change value with help of pointer 
// int main (){
//     int num;
//     cout << "Enter a number = ";
//     cin  >> num;

//     int* ptr = &num;
//     cout <<"Number = "<<num<<endl;
//    *ptr = 100;
//     cout <<"change number num with pointer = "<<num<<endl;
//     cout <<"Number = "<<num<<endl;
// }
 
// -------------------------------------task3-----------------------
//  swap number using function and pointer 

// void swapnumber(int *a, int *b){
//     int temp = *a;
//         *a = *b;
//         *b = temp;
// }

// int main (){
//     int x, y;
//     cout <<"Enter nunber = ";
//     cin >> x;
//     cout <<"Enter number = ";
//     cin >> y; 
//     cout <<"x = "<<x<<endl;
//     cout <<"y = "<<y<<endl;

//     swapnumber(&x, &y);

//     cout <<"After function all : "<<endl;
//     cout <<" x = "<<x<<endl;
//     cout <<" y = "<<y<<endl;
// }

// ---------------------------------task4----------------------
// int main (){
//     int arry[6];
//     int sz = 6;
//     cout <<"Enter 6 integer = ";
//     for(int i=0; i<sz; i++){
//         cin >> arry[i];
//     }
//     int* ptr = arry;
//     int max  = *ptr;

//     for(int i=0; i<sz; i++){
//         if(*ptr > max){
//             max = *ptr;
//         }
//         ptr++;
//     }
//     cout <<"maximum element = "<<max<<endl;

// }
// -----------------------------=--==-==pointer increment case 
// int main (){
//     int a =11;
//     int* ptr = &a;
//     cout << ptr << endl;
//     ptr++;
//     cout << ptr << endl;
// }


//--------------------------------task5-------------------------- 
// int main (){
//     int arr[3][3];
//     int row = 3;
//     int col = 3;

//     cout <<"Enter 9 integer = ";
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin >> arr[i][j];
//         }
//     }

//     int *ptr = &arr[0][0];
//     int sum = 0;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//            sum += *ptr;
//            ptr++;  
//         }
//     }
//     cout <<"SUM = "<<sum<<endl;
// }
// -------------------------------------task6--------------------------
// int main (){
//     int arry[5];
//     int  sz = 5;
//     cout <<"Enter 5 integer ";
//     for(int i=0; i<sz; i++){
//         cin >> arry[i];
//     }

//     int* p = &arry[0];
//     int even = 0;
//     int odd  = 0;
//     for(int i=0; i<sz; i++){
//         if(*p % 2 == 0){
//             even++;
//         }else{
//             odd++;
//         }
//         *p++;
//     }
//     cout <<"Even = "<<even<<endl;
//     cout <<"odd = "<<odd<<endl;

//     return 0;
// }


// --------------------------------task7--------------------------
// search element in arrays using pointer 
// int main ()
// {
//     int arry[3][3];
//     cout << "Enter 9 number in 3x3 array = ";
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin >> arry[i][j];
//         }
//     }

//     int* ptr = &arry[0][0];
//     int target;
//     cout << "Enter value you want to find = ";
//     cin  >> target;
//     bool found = false;

//     for(int i=0; i<3; i++){
//       for(int j=0; j<3; j++){
//          if(*(&arry[0][0]+i*3+j) == target){
//           cout <<"found at row "<<i<<" found at colume "<<j<<endl;
//           found = true;
//       }
//     }
// }
// if(!found){
//     cout <<"invalid number "<<endl;
// }

// return 0;
// }
// 



// --------------------------------------task8-----------------
// mini calculater
// void calc(int *a, int *b, char op, int *result ){

//   switch(op){
//            case '+':
//            *result = *a + *b;
//             break;
//             case '-':
//            *result = *a - *b;
//            break;
//            case '*':
//            *result = (*a) * (*b);
//            break;
//            case '/':
//             if(*b != 0){
//               *result = *a / *b;
//                     break;
//             }else{
//            cout << "invaled number";
//            *result = 0; 
//             }
//              break;
//              default:
//              cout << "Invalid number operater!"<<endl;
//              break;
//   }
// }

// int main (){
//      int x,y,res;
//      cout <<"Enter two integer = ";
//      cin  >>x >>y;
//      char op;
//      cout <<"Enter your operater (+ - / *) = ";
//      cin  >> op;     
  
//      calc(&x, &y, op , &res);

//     cout << "result = "<<res<<endl;

//     return 0;
// }


// -------------------------------------task9-----------------=--
// find even sum

// int main (){
//     int arry[6];
//     cout <<"Enter 6 integer =";
//     for(int i=0; i<6; i++){
//         cin >> arry[i];
//     }

//     int* ptr = arry; 
//     int sum = 0;

//     for(int i=0; i<6; i++){
//         if(*ptr % 2 == 0){
//             sum += *(arry + i);
//         }
//         ptr++;
//     }
//     cout <<"Even sum = "<< sum << endl;

//     return 0;
// }



// -----------------------------------task10-------------------
// find row sum 
// find row positio which row has largest sum 

// int main (){
//     int arry[3][3];
//     cout <<"Enter 9 integer = ";
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin >> arry[i][j];
//         }
//     }
//    int* ptr = &arry[0][0];
//    int maxRow = 0;
//    int maxRowIndx = 0;

//    cout <<"Row sum "<<endl;
//    for(int i=0; i<3; i++){
//      int rowSum=0;
//      for(int j=0; j<3; j++){
//         rowSum += *ptr;
//         ptr++;
//      }
//      cout <<"ROW "<<i+1<<" SUM = "<<rowSum<<endl;

//      if(rowSum > maxRow){
//         maxRow = rowSum;
//         maxRowIndx = i;
//      }
//    }
// cout <<"THE largest row SUM = "<<maxRow<<"(ROW "<<maxRowIndx + 1<<" ) "<<endl;

// return 0;
// }

// -----------------------------------------------task11---------------------------
// int main() {
//     char str[100];
//     cout << "Enter a word: ";
//     cin >> str;

    
//     int length = 0;
//     while(str[length] != '\0') {
//         length++;
//     }

    
//     char *left = str;              
//     char *right = str + length - 1;

//     bool isPalindrome = true;

//     while(left < right) {
//         if(*left != *right) {
//             isPalindrome = false;
//             break;
//         }
//         left++;   
//         right--;  
//     }

   
//     if(isPalindrome)
//         cout << "Palindrome" << endl;
//     else
//         cout << "Not Palindrome" << endl;

//     return 0;
// }

// ---------------------------------------task12--------------------------
// int* findMax(int arr[], int size) {
//     int* maxPtr = arr;   // start with first element

//     for(int i = 1; i < size; i++) {
//         if(*(arr + i) > *maxPtr) {
//             maxPtr = arr + i;   // update pointer to new max
//         }
//     }
//     return maxPtr;  // return address of largest element
// }

// int main() {
//     int arr[6] = {12, 45, 23, 67, 34, 89};

//     int* maxAddress = findMax(arr, 6);

//     cout << "Largest element = " << *maxAddress << endl;
//     cout << "Address of largest element = " << maxAddress << endl;

//     return 0;
// }


// int main (){

//    int x,y;
//    cout <<"ENter two integer ";
//    cin >> x >> y;

//    cout <<"X = "<<x<<" y = "<<y<<endl;

//    x = y;
//    y = x;

//          cout << x<<endl;
//          cout << y<<endl;

// }


































