class Solution {
public:
    string addBinary(string a, string b) {
        int len = a.length(), len2 = b.length(), count, k, l = 0, j, rev = 0;
    
        string c;
        string d;
        
        if (len >= len2){
            k = len2 - 1;
            for (int i = len - 1; i >= 0; i--){
                if (k >= 0){
                    if (a[i] == '0' && b[k] == '0'){
                        if (rev == 0){
                            c.push_back(0 + 48);
                        } else {
                            c.push_back(1 + 48);
                        }
                        rev = 0;
                    } else {
                        if (a[i] == '1' && b[k] == '1'){
                            if (rev == 0){
                                c.push_back(0 + 48);
                                rev = 1;
                            } else {
                                c.push_back(1 + 48);
                            }
                        } else {
                            if (rev == 0){
                                c.push_back(1 + 48);
                            } else {
                                c.push_back(0 + 48);
                            }   
                        }
                    }
                } else {
                    if (a[i] == '0'){
                        if (rev == 0){
                            c.push_back(0 + 48);
                        } else {
                            c.push_back(1 + 48);
                            rev = 0;
                        }
                    } else {
                        if (rev == 0){
                            c.push_back(1 + 48);
                        } else {
                            c.push_back(0 + 48);
                            rev = 1;
                        }
                    }
                }
                k--;
            }
        } else {
            k = len - 1;
            for (int i = len2 - 1; i >= 0; i--){
                if (k >= 0){
                    if (b[i] == '0' && a[k] == '0'){
                        if (rev == 0){
                            c.push_back(0 + 48);
                        } else {
                            c.push_back(1 + 48);
                        }
                        rev = 0;
                    } else {
                        if (b[i] == '1' && a[k] == '1'){
                            if (rev == 0){
                                c.push_back(0 + 48);
                                rev = 1;
                            } else {
                                c.push_back(1 + 48);
                            }
                        } else {
                            if (rev == 0){
                                c.push_back(1 + 48);
                            } else {
                                c.push_back(0 + 48);
                            }   
                        }
                    }                    
                } else {
                    if (b[i] == '0'){
                        if (rev == 0){
                            c.push_back(0 + 48);
                        } else {
                            c.push_back(1 + 48);
                            rev = 0;
                        }
                    } else {
                        if (rev == 0){
                            c.push_back(1 + 48);
                        } else {
                            c.push_back(0 + 48);
                            rev = 1;
                        }
                    }                    
                }
                k--;
            }
        }
        
        
        if (rev == 1){
            c.push_back(1 + 48);
            count++;
        }
        
        d = c;
        
        count = d.length();
        
        j = 0;
        for (int i = count - 1; i >= 0; i--){
            c[j] = d[i];
            j++;
        }
        
        return c;
        
    }
};
