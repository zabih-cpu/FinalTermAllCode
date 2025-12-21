#include<iostream>
using namespace std;

// ---------all code about  2D Arrays

// ---------------------------------lab9 task1
// int main (){
//     int arry2d[2][3]={{1,2,3}, {3,4,5}};

//     cout <<"printed 2D arrays = "<<endl;

//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cout << arry2d[i][j]<<" ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ---------------------------lab9 task2
// int main (){
//     int arry[3][2];

//     cout << "Enter 3x2 arrays value "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             cin >> arry[i][j];
//         }
//     }
//     cout <<"printed 2D array "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             cout << arry[i][j]<<" ";
//         }
//         cout <<endl;
//     }

//     return 0;
// }

// --------------------------lab9 task3
// int main (){
//     int arry[3][3];
//     int sum=0;

//     cout <<"Enter 9 number for 9x9 2D array = "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin >> arry[i][j];
//             sum += arry[i][j];
//         }
//     }

//     cout <<"Total Sum of All element = "<<sum<<endl;

//     return 0;
// }


// -----------------------------------lab9 task 4
// int main (){
//     int arry[3][3];
    
//     cout << "Enter 9 number for 9x9 2D array = ";
//     for(int i=0; i<3; i++){
//        for(int j=0; j<3; j++){
//         cin >> arry[i][j];     
//       }
//   }

//   cout << "Row sum "<<endl;
//   for(int i=0; i<3; i++){
//     int rowSum=0;
//     for(int j=0; j<3; j++){
//         rowSum += arry[i][j];
//     }
//     cout << "ROW "<<i + 1<<" SUM = "<<rowSum<<endl;
//   }

//   cout << "Colume Sum "<<endl;
//   for(int j=0; j<3; j++){
//     int columeSum=0;
//     for(int i=0; i<3; i++){
//         columeSum += arry[i][j];
//     }
//     cout <<"colume "<<j + 1<<" SUM = "<<columeSum<<endl;
//   }

//   return 0;

// }

// // -------------------------------lab9 task 5;
// int main (){
//         int arry[3][3]={
//             {50,88,12},
//             {11,23,55},
//             {16,90,100}
//         };
//         int smallest = INT_MAX;
//         int largest = INT_MIN;

//         for(int i=0; i<3; i++){
//             for(int j=0; j<3; j++){
//                 smallest = min(arry[i][j],smallest);
//                 largest = max(arry[i][j],largest);
//             }
//         }
//         cout <<"smallest in 2D array = "<<smallest<<endl;
//         cout <<"largesst in 2D array = "<<largest<<endl;

//         return 0;
// }
// int primechecker(int n){
//     int count = 0;
//     for(int i=2; i<= n/2; i++){
//         if(n%i == 0){
//            count++;
//         }
//     }
//     if(count == 0){
//         cout << n <<"is prime number "<<endl;
//     }else{
//         cout <<n<<"is not prime number "<<endl;
//     }
//     return 1;
// }
// int main (){
//     int num;
//     cout << "Enter a number = ";
//     cin >> num;
 
//     primechecker(num);
    
//     return 0;
// }

// int main (){
//     int arry[3][3];
//     int evenCount = 0;
//     int oddCount = 0;

//     cout << "Enter 9 number for 3x3 2D array = ";
//     for(int i=0; i<3; i++){
//        for(int j=0; j<3; j++){
//         cin >> arry[i][j];
//         if(arry[i][j] % 2 == 0){
//             evenCount++;
//         }else{
//             oddCount++;
//         }

//        }

//     }
// cout << "Even Count = "<<evenCount<<endl;
// cout << "Odd Count = "<< oddCount<<endl;
// return 0;
// }

// -------------------------------------------lab9 task 6
// int main (){
//     int array[3][3];
//     int target;
//     bool found = false;
    
//     cout << "Enter 9 number of 3x3 2D array = ";
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin >> array[i][j];

//         }
//     }
//     cout << "Enter your target to find indx = ";
//     cin >> target;

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             if(array[i][j] == target ){
//                 cout << "fount at row "<< i+1 << " colume " <<j+1<<endl;
//                 found = true;
//                 break; 
//             }
//         }
//     }
//     if(!found){
//         cout << "Not found "<<endl;
//     }

//     return 0;
// }

// void  printArray(int arr[3][3], int r, int c){
//     cout << "3x3 arrays = "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout << arr[i][j]<<" ";
//         }
//         cout << endl;
//     }
// }
// int main (){
//     int arry[3][3];

//     cout<<"Enter 9 number of 3x3 2D array = "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin >> arry[i][j];
//         }
//     }
//     printArray(arry, 3,3);

//     return 0;
// }

// int sumRow(int arr[3][3], int row, int colume){
//     int sum=0;
//     for(int j=0; j<colume; j++ ){
//         sum += arr[row][j];        
//     }
//     return sum;
// }
// int main (){
//     int arry[3][3];

//     cout << "Enter 9 number = ";
//     for(int i=0; i<3; i++){
//        for(int j=0; j<3; j++){
//         cin >> arry[i][j];
//        }
//     }

//     int row=0;
//     cout <<"Enter ROW = ";
//     cin >> row;

//      if(row >= 0 && row <3){
//     cout << "sum of row "<<row<<" = "<<sumRow(arry, row, 3)<<endl;
//      }else{
//     cout <<"invalaid row "<<endl;
//      }

//      return 0;
// }

// int arrPrint(int arr[3][3], int row,int colume){
    
//     int sum=0;
//     for(int i=0; i<row; i++){
//         sum += arr[i][colume];
//     }
//     return sum;
// } 
// int main (){
//     int arr[3][3];
//     int row=3;
//     int colume=3;

//     cout << "Enter 9 number = ";
//     for(int i=0; i<row; i++){
//         for(int j=0; j<3; j++){
//             cin >> arr[i][j];
//         }
//     }
//    cout << "Enter colume number = ";
//    cin >> colume;

//    cout << arrPrint(arr, 3 , colume);
//    return 0; 
// }

// int main (){
//     int array[3][2];
//     int row = 3;
//     int colume = 2;
//     int positive = 0;
//     int negative = 0;
//     int zero = 0;

//     cout << "Enter 6 number = ";
//     for(int i=0; i<row; i++){
//         for(int j=0; j<colume; j++){
//             cin >> array[i][j];
//         }
//     }
//     for(int i=0; i<row; i++){
//         for(int j=0; j<colume; j++){
//             if(array[i][j] > 0){
//                 positive++;
//             }else if(array[i][j] < 0){
//                 negative++;
//             }else {
//                 zero++;
//             }
//         }
//     }

//     cout << "positive numbers = "<<positive<<endl;
//     cout << "negative numbers = "<<negative<<endl;
//     cout << "zero numbers = "<< zero<<endl;
//     return 0;
// }

// int main (){
//     int marks[4][3];
//     int highest = INT_MIN;
//     int row = 4; 
//     int colume = 3;
    
//     cout << "Enter student marks = ";
//     for(int i=0; i<row; i++){
//         cout << "student "<< i+1<<" : ";
//         for(int j=0; j<colume; j++){
//             cin >> marks[i][j];
//         }
//     }
//     int totalsum = 0;
//     for(int i=0; i<row;i++ ){
//         totalsum = 0;
//         for(int j=0; j<colume; j++){
//             totalsum += marks[i][j];
//             if(marks[i][j] > highest){
//                 highest = marks[i][j];

//             }
//         }
//         cout << "studnet "<< i+1 <<" total sum = "<<totalsum<<endl;
//         double average = totalsum/colume;
//         cout << "studnet "<<i+1<<" marks average = "<<average <<endl;
//     }
//     cout << "highest marks  "<<highest<<endl;
//     return 0;
// }


// int main() {
//     int a[2][2], b[2][2], result[2][2];

//     cout << "Enter elements of first 2x2 matrix:" << endl;
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             cin >> a[i][j];
//         }
//     }
//     cout << "Enter elements of second 2x2 matrix:" << endl;
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             cin >> b[i][j];
//         }
//     }
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             result[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     cout << "Resultant matrix after addition:" << endl;
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

























