#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {23, 55, 7, 98, 21, 54};

    int n = arr.size();

    for(int i=0; i<n; i++){

        int minidx = i;

        for(int j=i+1; j<n; j++){

            if(arr[j] < arr[minidx])
            minidx = j;
        }

        swap(arr[i], arr[minidx]);
    }

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    
    return 0;
}