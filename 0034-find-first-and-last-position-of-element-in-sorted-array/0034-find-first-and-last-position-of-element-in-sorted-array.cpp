class Solution {
public:

    int frontsearch(vector<int> &arr, int x, int n){

        int s=0, e = n-1;

        int mid = s + (e - s) / 2;
        int ans = -1;
        
        while(s<=e){
            if(arr[mid] == x){
                ans = mid;
                e = mid-1;
            }

            else if(arr[mid] < x){
                s = mid+1;
            }

            else if(arr[mid] > x){
                e = mid - 1;
            }

            mid = s + (e - s) / 2;
        }

        return ans; 
    }

    int backsearch(vector<int> &arr, int x, int n){

        int s=0, e = n-1;
        int mid = s + (e - s) / 2;
        int ans = -1;

        while(s<=e){
            if(arr[mid] == x){
                ans = mid;
                s = mid+1;
            }

            else if(arr[mid] < x){
                s = mid+1;
            }

            else if(arr[mid] > x){
                e = mid - 1;
            }

            mid = s + (e - s) / 2;
        }
        
        return ans; 
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret;

        int f = frontsearch(nums, target, nums.size());
        int l = backsearch(nums, target, nums.size());

        ret.push_back(f);
        ret.push_back(l);

        return ret;
    }
};



