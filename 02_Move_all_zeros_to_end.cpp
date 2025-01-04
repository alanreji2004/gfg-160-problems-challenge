    void pushZerosToEnd(vector<int>& arr) {
        int size = arr.size();
        vector<int>temp(size,0);
        int nonZero = 0;
        int j = 0;
        
        for(int i = 0;i < size;i++){
            if(arr[i] != 0){
                temp[j++] = arr[i];
            }
        }
        
        arr = temp;
    }
