class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1,mid;
        while(low<=high)
        {
            mid = low + (high - low)/2;
            if(mid>0 && mid<arr.size()-1)
            {
                if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
                else if(arr[mid+1]>arr[mid])
                    low = mid + 1;
                else if(arr[mid-1]>arr[mid])
                    high = mid - 1;
                
            }
            else if(mid == 0)
            {
                if(arr[mid]>arr[mid+1])
                    return mid;
                else
                    return mid+1;
                    
            }
            else if(mid == arr.size()-1)
            {
                if(arr[mid]>arr[mid-2])
                    return mid;
                else
                    mid-1;
            }
        }
        return -1;
    }
};