class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int x=i;
            bool b=true;
            while(x>0){
                int d=x%10;
                x=x/10;
                if(d==0 || i%d!=0){
                    b=false;
                    break;
                }
            }
            if(b) ans.push_back(i);
        }
        return ans;
    }
};