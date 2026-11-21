class Solution {
public:

    int binsearch(vector<int> &arr, int target, int n){

        int s = 0, e = n-1;
        int mid = s + (e-s)/2;

        while(s<=e){

            if(arr[mid] == target)
            return mid;

            //ls
            if(arr[s] <= arr[mid]){
                if((arr[s] <= target) && (target <= arr[mid]))
                e = mid-1;

                else
                s = mid+1;
            }

            //rs
            else{
                if((arr[mid] <= target) && (target <= arr[e]))
                s = mid + 1;

                else 
                e = mid - 1;
            }

            mid = s + (e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        return binsearch(nums, target, n);
    }
};