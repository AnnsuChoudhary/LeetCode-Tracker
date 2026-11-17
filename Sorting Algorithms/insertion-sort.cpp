#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {23, 55, 7, 98, 21, 54};
    int n = arr.size();

    for(int i=0; i<n; i++){
        int temp = arr[i];
        int j = i-1;

        for(j; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1] = temp;
    }

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}