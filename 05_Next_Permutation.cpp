        int pivot = -1,smallest;
        for(int i = arr.size()-1;i >= 0;i--){
            if(arr[i-1] < arr[i]){
                pivot = i - 1;
                break;
            }
        }
        if(pivot != -1){
            smallest = pivot + 1;
            for(int i = pivot;i < arr.size();i++){
                if(arr[i] > arr[pivot] && arr[i] < arr[smallest]){
                    smallest = i;
                }
            }
            swap(arr[smallest],arr[pivot]);
            reverse(arr.begin()+pivot + 1,arr.end());
        }
        else if(pivot == -1){
            reverse(arr.begin(),arr.end());
        }
    }
