#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {23, 55, 7, 98, 21, 54};
    int n = arr.size();

    //for complexity O(n^2)
    /*
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    */


    // For best case complexity O(n)

    for(int i=0; i<n; i++){

        bool swaped = 0;

        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaped = 1;
            }
        }

        if(swaped == 0){
            break;
        }
    }

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}