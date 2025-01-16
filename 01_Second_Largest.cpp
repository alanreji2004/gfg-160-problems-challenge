    int getSecondLargest(vector<int> &arr) {
        
        int size = arr.size();
        int i,largest =-1,secondLargest = -1;
        
        for(int i=0;i<size;i++){
           
            if(arr[i] > largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > secondLargest){
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }

