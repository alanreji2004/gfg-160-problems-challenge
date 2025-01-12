   int missingNumber(vector<int> &arr) {
        int next = 1;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = 0;i < n;i++){
            if(arr[i] <= 0) continue;
            else if(arr[i] != arr[i-1]){
                if(arr[i] != next) break;
                next++;
            }
        }
        return next;
    }
