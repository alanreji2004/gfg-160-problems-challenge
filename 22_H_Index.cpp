    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int h = 0;
        for(int i = 0;i < n;i++){
            if(citations[i] > h) h++;
        }
        return h;
    }
