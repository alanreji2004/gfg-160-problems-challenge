    void reverseArray(vector<int> &arr) {
        int size = arr.size();
        vector<int>temp(size);
        int j = size-1;
        
        for(int i = 0;i < size;i++){
            temp[j--] = arr[i];
        }
        arr = temp;
    }
