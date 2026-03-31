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
        for(int i=0;i<=n;i++){
            if(i<n && value[s[i]]<value[s[i+1]]){
                sum-=value[s[i]];
            }else{
                sum+=value[s[i]];
            }
        }
        return sum;
    }
};