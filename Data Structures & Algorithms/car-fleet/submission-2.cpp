class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // variable declaration
        int pos_len = position.size();
        int speed_len = speed.size();
        vector<pair<double,double>> pairs(pos_len);

        for(int i = 0; i < pos_len; i++)
        {
            pairs[i] = {position[i],speed[i]};
        }

        vector<double> time(pos_len);
        int collect = 0;
        
        sort(pairs.begin(), pairs.end(), [](const pair<double,double>& a, const pair<double,double>& b){
            return b.first < a.first;
        });

        for(int i = 0 ; i < pos_len; i++)
        {
            time[i] = (target - pairs[i].first)/pairs[i].second;
            if(i >= 1 && time[i] <= time[i-1])
            {
                time[i] = time[i-1];
            }
            else
            {
                collect++;
            }
        }

        return collect;
        
    }
};
