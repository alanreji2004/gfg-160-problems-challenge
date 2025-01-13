    bool areAnagrams(string& s1, string& s2) {
        int len1 = s1.size();
        int len2 = s2.size();
        
        if(len1 != len2) return false;
        
        vector<int>result(26,0);
        
        for(int i = 0;i < len1;i++){
            result[s1[i] - 'a']++;
        }
        for(int i = 0;i < len2;i++){
            result[s2[i] - 'a']--;
        }
        
        for(int i = 0;i < 26;i++){
            if(result[i] != 0) return false;
        }
        return true;
    }
