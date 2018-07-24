class Solution {
public:
    bool isPalindrome(int x) {
    int tem, rev = 0;

    tem = x;
        
    if (x < 0)
        return false;

    while (x > 0){
        rev = rev * 10 + (x % 10);
        x = x / 10;
    }

    if (tem == rev)
        return true;
    else   
        return false;
    }
};
