#include<iostream>
#include <unordered_map>
#include <map>

using namespace std;

void out(int arr[], int n){
    map<int, int > mpp;
    for(int i = 0; i< n;i++){
        mpp[arr[i]]++;

    }
    for (auto it: mpp){
        cout << it.first << " " << it.second << endl;
    }
}

int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    out(arr,n);
    return 0;
}

