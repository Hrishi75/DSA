#include<iostream>

using namespace std;

// method no - 1;
// void print(int n){
//     int sum = 0;
//     for(int i =1; i<=n;i++){
//         sum = i+ sum;
//     }
//     cout << sum;
// }

// int main(){
//    int n;
//    cin >> n;
//    print(n);

// }

// method 2 ;

// int print(int n){
//     int sum = n *(n+1)/2;
    
//     cout << sum;

// }

// int main(){
//     int n ;
//     cin >> n;
//     print(n);
// }

// method 3
//recusrsion way
//parameterized way

// void print(int i, int sum){
//     if(i<1){
//         cout << sum;
//         return;
//     }
//     print(i-1,sum +i);
// }

// int main(){
//     int n ;
//     cin >> n;
//     print (n, 0);
// }

//functional way recursion

int print(int n){
    if(n == 0)
    {
        return 0;
    }
    return n + print(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << print (n) << endl;
    return 0;
    
}