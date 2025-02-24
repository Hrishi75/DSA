#include<iostream>
#include<algorithm>

using namespace std;

// //printingarrayfunctioon
// void  printArray(int ans[], int n){
//     cout << "The reversed array is : " << endl ;
//     for(int i =0; i<n ;i++){
//         cout << ans[i] << " ";
//     }
// }

// void reverseArray(int arr[], int n){
//     int ans[n];
//     for( int i = n-1;i>=0;i--){
//         ans[n-i-1] = arr[i];

//     }
//     printArray(ans,n);
// }

// int main(){
//     int n ;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i< n;i++){
//         cin >> arr[i];
//     }
    
//     reverseArray(arr,n);
//     return 0;

// }

//space optimization iterative method

// void printArray(int arr[], int n){
//     cout << "The reversed array is: " << endl;
//     for(int i =0; i<n;i++){
//         cout << arr[i] << " ";
//     }
// }

// void reverseArray(int arr[], int n){
//     int p1 = 0, p2 =n-1;
//     while(p1<p2){
//         swap(arr[p1], arr[p2]);
//         p1++;p2--;
//     }
//     printArray(arr,n);
// }

// int main(){
//     int n =5;
//     int arr[] = {5,4,3,2,1};
//     reverseArray(arr,n);
//     return 0;
// }


//  Recursive method
// void printArray(int arr[], int n) {
//     cout << "The reversed array is:- " << endl;
//     for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//     }
//  }
//  //Function to reverse array using recursion
//  void reverseArray(int arr[], int start, int end) {
//     if (start < end) {
//        swap(arr[start], arr[end]);
//        reverseArray(arr, start + 1, end - 1);
//     }
//  }
//  int main() {
//     int n = 5;
//     int arr[] = { 5, 4, 3, 2, 1 };
//     reverseArray(arr, 0, n - 1);
//     printArray(arr, n);
//     return 0;
//  }

//Using library function (New Approach)

void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
    }
 }
 //Reverse array using library function
 void reverseArray(int arr[], int n) {
    //Reversing elements from index 0 to n-1 
    reverse(arr, arr + n);
 }
 int main() {
    int n = 5;
    int arr[] = { 5, 4, 3, 2, 1 };
    reverseArray(arr, n);
    printArray(arr, n);
    return 0;
 }