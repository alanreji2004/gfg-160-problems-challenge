 int maxSubarraySum(vector<int> &arr) {
        // code here...
        int sum = arr[0],previous = arr[0],n = arr.size();
        for(int i = 1;i < n;i++){
            if(previous + arr[i] > arr[i]) previous += arr[i];
            else previous = arr[i];
            
            if(sum > previous) continue;
            else sum = previous;
        }
        return sum;
    }
