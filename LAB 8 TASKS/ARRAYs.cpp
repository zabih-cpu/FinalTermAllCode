#include<iostream>
#include<array>
using namespace std;


// ------------------------------------LAB 8 TASK CODE ON ARRAYS ------------------------
// -----------------------------------------------------------------------------------------

//  -----------------------------------arrays_lecture
// --------------------------------practice on arrays  question1 
// find largest and smallest 
// int main (){
//     int num[5];
//     int size = 5;
//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     cout << "Enter 5 value = ";
//     for(int i=0; i<size; i++){
//         cin >> num[i];
//     }
   
//     for(int i=0; i<size; i++){
//         smallest = min(num[i],smallest);
//         largest = max(num[i],largest);
    
//     }
//     cout <<"Smallest number = "<<smallest <<endl;
//     cout  <<"largest number = "<<largest <<endl;

//     return 0;
// }

// void changeArr(int arr[], int size){
//     cout <<"in Function \n";

//     for(int i=0; i<size; i++){
//         arr[i] = 2* arr[i];
//     }

// }
// int main (){
//     int arr[]={2,4,6};

//     changeArr(arr, 3);

//     cout << "in Main \n";
//     for(int i=0; i<3; i++){
//         cout << arr[i]<<" ";
//     }

//     cout <<endl;
// }

// ----------------------------------prime number
// int fact(int n){
//     int count= 1;
//     for(int i=2; i<=n/2; i++){
//         if(n%i == 0){
//             count = 0;
//             break;
//         }
//     }
//     if(count == 1){
//         cout <<"is  prime number "<<n<<endl;
//     }else{
//         cout << "not prime number "<<n<<endl;
//     }
//     return 1;
// }
// int main (){
//      int prime = fact(12);
//       cout << prime<<endl;
//     return 0;
// }
// -------------------------------sum of n numbers using arrays
// int main (){
//  int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int a[n];

//     int sum = 0;
//     cout << "Enter " << n << " numbers: ";
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//         sum += a[i];
//     }

//     cout << "Sum = " << sum << endl;
//     return 0;
// }

// ----------------------------------weekly temperature
// int temp[7];

// for(int i=0; i<7; i++){
//     cin >> temp[i];
// }

// cout << "weakly tenperature : \n "<<endl;
// for(int i=0; i<7; i++){
//     cout << temp[i] << endl;
// }

// ---------------------------------lab task 1;

// int main (){
//     int num[5];

//      cout <<"enter 5 integer ";
//     for(int i=0; i<5; i++){
//         cin >> num[i];
//     }
    
//     cout << "printed number = ";
//     for(int i=0; i<5; i++){
//         cout << num[i]<<" ";
//     }
//     cout << endl;

//     return 0;
// }


// ----------------------------task2
// int main() {
//     string names[3] = {"Ali", "Sara", "Zabih"};  // array of 3 names

//     cout << "Printing all names:" << endl;
//     for(int i = 0; i < 3; i++) {
//         cout << names[i] << endl;
//     }

//     return 0;
// }
// ---------------------------- task 4

// int main() {
//     int a[10];
//     int evenCount = 0, oddCount = 0;
//     cout << "Enter 5 numbers: ";
//     for(int i = 0; i < 10; i++) {
//         cin >> a[i];
//         if(a[i] % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }
//     cout << "Even count = " << evenCount << endl;
//     cout << "Odd count = " << oddCount << endl;
//     return 0;
// }

// -----------------------------2D ARRAYS BY FARHAN sir

// int main (){
//     int a[3][5];{{1,2,3,4,5};{23,32,42,54,12};{12,65,78,98,23}};

//     for(int i=0; i<3; i++){
//         for(int j=0; j<5, j++){
//             cout << a[i][j]<<endl;
//         }
//     }
// }

// int main() {
//     int arr[2][3] = { {1,2,3}, {4,5,6},  };

//     for(int i = 0; i < 2; i++) {         
//         for(int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
//  }


// 2d ARRAYS 
// int main() {
//     int arr[3][3];
//     cout << "Enter 9 integers:" << endl;
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     cout<< "Matrix output:" << endl;
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";  
//         }
//         cout << endl; 
//     }

//     return 0;
// }













