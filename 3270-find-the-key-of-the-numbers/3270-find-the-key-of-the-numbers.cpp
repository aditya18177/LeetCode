class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string a = string(4 - to_string(num1).length(), '0') + to_string(num1);
        string b = string(4 - to_string(num2).length(), '0') + to_string(num2);
        string c = string(4 - to_string(num3).length(), '0') + to_string(num3);
        string key = "";
        for (int i = 0; i < 4; i++) {
            char minDigit = min({a[i], b[i], c[i]});
            key += minDigit;
        }
        return stoi(key);
    }
};