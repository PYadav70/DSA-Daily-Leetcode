class Solution {
public:
    int M= 1e9+7;
    int numberOfWays(string corridor) {
        int n = corridor.size();
        vector<int>pos_seat;

        for(int i=0; i<n; i++){
            if(corridor[i] == 'S'){
                pos_seat.push_back(i);
            }
        }
        if(pos_seat.size()%2 != 0 || pos_seat.size() == 0){
            return 0;
        }
        long long result = 1;

        int end_idx_prev = pos_seat[1];

        for(int i=2; i<pos_seat.size(); i+=2){
            int length = pos_seat[i]-end_idx_prev;

            result = (result * length)%M;

            end_idx_prev = pos_seat[i+1];
        }
        return result;
    }
};