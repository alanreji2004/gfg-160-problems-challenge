    string trimLeadingZeros(const string &s){
        size_t firstOne = s.find('1');
        return (firstOne == string::npos) ? "0" : s.substr(firstOne);
    }
    
    string addBinary(string& s1, string& s2) {
        s1 = trimLeadingZeros(s1);
        s2 = trimLeadingZeros(s2);
        
        int len1 = s1.size();
        int len2 = s2.size();
        if(len2 > len1)swap(s1,s2);
        
        len1 = s1.size();
        len2 = s2.size();
        
        len1--;
        len2--;
        
        string result;
        int carry = 0,sum = 0;
        
        while(len1 >= 0 || len2 >= 0 || carry > 0){
            sum = carry;
            if(len1 >= 0) sum += s1[len1--] - '0';
            if(len2 >= 0) sum += s2[len2--] - '0';
            carry = sum / 2;
            result.push_back((sum %2 ) + '0');
        }
        reverse(result.begin(),result.end());
        return result;
    }
