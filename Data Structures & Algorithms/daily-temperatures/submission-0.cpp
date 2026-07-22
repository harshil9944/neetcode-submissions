class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // Variable Declaration
        int len = temperatures.size();
        vector<int> result(len);
        // Code
        for(int i = 0; i < len; i++)
        {
            for(int j = i+1 ; j < len; j++)
            {
                if(temperatures[i] < temperatures[j])
                {
                    result[i] = j - i;
                    break;
                }
            }
        }
        return result;
    }
};
