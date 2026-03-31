class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> value;
        value['I']=1;
        value['V']=5;
        value['X']=10;
        value['L']=50;
        value['C']=100;
        value['D']=500;
        value['M']=1000;
        int sum=0;
        int n=s.length()-1;
        for(int i=n;i>=0;i--){
            if(i>=1 && (s[i]=='V' || s[i]=='X') && s[i-1]=='I'){
                sum+=value[s[i]]-1;
                i--;
                continue;
            }
            if(i>=1 && (s[i]=='L' || s[i]=='C') && s[i-1]=='X'){
                sum+=value[s[i]]-10;
                i--;
                continue;
            }
            if(i>=1 && (s[i]=='D' || s[i]=='M') && s[i-1]=='C'){
                sum+=value[s[i]]-100;
                i--;
                continue;
            }
            sum+=value[s[i]];
        }
        return sum;
    }
};