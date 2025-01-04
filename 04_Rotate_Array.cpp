    void rotateArr(vector<int>& arr, int d) {
        int size = arr.size();
        d = d % size;
        vector<int>temp(size);
        int j = 0;
        
        for(int i = d;i < size;i++){
            temp[j++] = arr[i];
        }
        
        for(int i = 0;i < d;i++){
            temp[j++] = arr[i];
        }
        
        arr = temp;
    }
