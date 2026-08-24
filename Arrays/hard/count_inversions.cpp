class Solution {
  public:
    int merge(vector<int> &arr, int low, int mid, int high)
    {
        vector<int> temp;
        int left=low;
        int right=mid+1;
        int count=0;
        
        while (left <= mid && right <= high)
        {
            if(arr[left] <= arr[right])
            {
                temp.push_back(arr[left++]);
            }
            else
            {
                count+=(mid - left + 1);
                temp.push_back(arr[right++]);
            }
        }
        
        while(left<=mid)
        {
            temp.push_back(arr[left++]);
        }
        
        while(right<=high)
        {
            temp.push_back(arr[right++]);
        }
        
        for(int i=low; i<=high ; i++)
        {
            arr[i] = temp[i - low];
        }
        
        return count;
    }
    
    int mergesort(vector<int> &arr, int low, int high)
    {
        int count = 0;
        int mid = low + (high - low) / 2;
        
        if (low >= high)
        {
            return count;
        }
        
        count+= mergesort(arr,low,mid);
        count+= mergesort(arr,mid+1, high);
        count+=merge(arr,low,mid,high);
        return count;
    }
    int inversionCount(vector<int> &arr) {
        // code here
        return mergesort(arr, 0, arr.size()-1);
    }
};