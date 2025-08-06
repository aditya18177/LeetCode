class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> frq;
        for(int i=0;i<magazine.length();i++){
            frq[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(frq.find(ransomNote[i])==frq.end()){
                return false;
            }
            if(frq[ransomNote[i]]==0){
                return false;
            }
            frq[ransomNote[i]]--;
        }
        return true;
    }
};