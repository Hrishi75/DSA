#include<iostream>

using namespace std;

//naive approach
// int main() {
//   int n = 5;
//   if (n == 0) {
//     cout << 0;
//   } else if (n == 1) {
//     cout << 0 << " " << 1 << "\n";
//   } else {
//     int fib[n + 1];
//     fib[0] = 0;
//     fib[1] = 1;
//     for (int i = 2; i <= n; i++) {
//       fib[i] = fib[i - 1] + fib[i - 2];
//     }
//     cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
//     for (int i = 0; i <= n; i++) {
//       cout << fib[i] << " ";
//     }
//   }
// }

//spae optimized approach
// int main() {
// 	int n = 5;
// 	if (n == 0) {
// 	    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
// 		cout << 0;
// 	}
// 	else {
// 		int secondLast = 0;//for (i-2)th term
// 		int last = 1;//for (i-1)th term
// 		cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
// 		cout << secondLast << " " << last << " ";
// 		int cur; //for ith term
// 		for (int i = 2; i <= n; i++) {
// 			cur = last + secondLast;
// 			secondLast = last;
// 			last = cur;
// 			cout << cur << " ";
// 		}
// 	}
// }

// int fibonacci(int N){
   
//     // Base Condition.
//     if(N <= 1)
//     {
//         return N;
//     }
 
//     // Problem broken down into 2 functional calls
//     // and their results combined and returned.
//     int last = fibonacci(N-1);
//     int slast = fibonacci(N-2);
    
//     return last + slast;
 
//  }
 
//  int main(){
   
//    // Here, let’s take the value of N to be 4.
//    int N = 4;
//    cout<<fibonacci(N)<<endl;
//    return 0;
 
//  }