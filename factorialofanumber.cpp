#include<iostream>

using namespace std;

//iterative way
// void fact(int n){
//     int mul = 1;

//     for(int i = 1; i<=n;i++){
//         mul = mul * i;
         
//     }
//     cout << mul;
// }

// int main(){
//     int n;
//     cin >> n;
//     fact(n);
// }

//recursive way

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n* fact(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}