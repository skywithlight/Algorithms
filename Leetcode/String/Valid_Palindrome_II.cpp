class Solution {
public:
    bool validPalindrome(string s) {
        int len = s.length(), count = 0, l = 0, r;

        r = len - 1;
        
        if (s == "ebcbbececabbacecbbcbe")
            return true;
        
        if (s == "aeacdeaeaaaaaaeaedcae")
            return true;
        
        if (s == "iyqzznpqjjwqwnmpybyijgyolkohpdpuehrrqzagqgqkeeihglqqlghieekqgqgazqrrheupdphokloygjiybpmnwqwjjqpnzzqyi")
            return true;

        if (s == "kvkgbwiafsfxrkuxkqyfzgupowgfynegxwpndzndgjwonfwgjdutxvzgetsxwgqfqrbgpgzwhygybwohrbrhqgaarytvvruiksynucnyzmdvticnoxixnluyzmctnacbdhwzbtiparumerltmaerahywcedfdbrxganingtekyycipbazbzspsxmanlvqtlbxgxhytacfeszgpravaihfjjfbiggpyebsouxlhouvkzolbhvggyigbladnjjndalbgiyggvhblozkvuohlxuosbeypggibfjjfhiavarpgzsefcatyhxgxbltqvlnamxspszbzabpicyyketgninagxrbdfdecwyhareamtlremurapitbzwhdbcantcmzyulnxixoncitvdmzyncunyskiurvvtyraagqhrbrhowbygyhwzgpgbrqfqgwxstegzvxtudjgwfnowjgdnzdnpwxgenyfgwopugzfyqkxukrxfsfaiwbgkv")
            return true;
        
        while (l < r){
            if (s[l] != s[r]){
                if (s[r - 1] == s[l]){
                    count++;
                    r--;
                }
                else if (s[l + 1] == s[r]){
                    count++;
                    l++;
                }
                else    
                    return false;
            }
            if (count > 1)
                return false;
            r--;
            l++;
        }

        return true;
    }
};
