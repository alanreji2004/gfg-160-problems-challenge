    int circularSubarraySum(vector<int> &arr) {
        int total = 0,currentMin = 0,currentMax = 0,minSum = arr[0],maxSum = arr[0];
        int n = arr.size();
        for(int i = 0;i < n;i++){
            if(currentMax + arr[i] > arr[i]) currentMax += arr[i];
            else currentMax = arr[i];
            if(currentMax > maxSum) maxSum = currentMax;
            
            if(currentMin + arr[i] < arr[i]) currentMin += arr[i];
            else currentMin = arr[i];
            if(currentMin < minSum) minSum = currentMin;
            
            total += arr[i];
        }
        
        int normalSum = maxSum;
        int circularSum = total- minSum;
        
        if(total == minSum) return normalSum;
        if(circularSum > normalSum) return circularSum;
        else return normalSum;
    }
