    int maxProduct(vector<int> &arr) {
        int maxP =arr[0],minProduct = arr[0],result = arr[0], n = arr.size();
        for(int i = 1;i < n;i++){
            int temp = max({arr[i],maxP * arr[i],minProduct * arr[i]});
            minProduct = min({arr[i],maxP * arr[i],minProduct * arr[i]});
            maxP = temp;
            result = max(result,maxP);
        }
        return result;
    }
