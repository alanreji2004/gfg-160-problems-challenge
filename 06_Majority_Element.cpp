    vector<int> findMajority(vector<int>& arr) {
        int size = arr.size();
        int element1 = -1,element2 = -1,count1 = 0,count2 = 0;
        vector<int>result;
        
        for(int element : arr){
            if(element == element1) count1++;
            else if(element == element2) count2++;
            else if(count1 == 0){
                element1 = element;
                count1++;
            }
            else if(count2 == 0){
                element2 = element;
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = count2 = 0;
        for(int element : arr){
            if(element == element1) count1++;
            if(element == element2) count2++;
        }
        if(count1 > size/3) result.push_back(element1);
        if(count2 > size/3 && element1 != element2) result.push_back(element2);
        if(result.size() == 2 && result[0] > result[1])swap(result[0],result[1]);
        return result;
    }
