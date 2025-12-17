class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        if(numRows==1){
            answer.push_back({1});
            return answer;
        }
        if(numRows==2){
            answer.push_back({1});
            answer.push_back({1,1});
            return answer;
        }
        answer.push_back({1});
        answer.push_back({1,1});
        for(int i=3;i<=numRows;i++){
            vector<int> arr(i,0);
            arr[0]=1;
            arr[i-1]=1;
            for(int j=1;j<i-1;j++){
                arr[j]=answer[i-2][j-1]+answer[i-2][j];
            }
            answer.push_back(arr);
        }
        return answer;
    }
};