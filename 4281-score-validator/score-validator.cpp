class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n = events.size();
        int score = 0;
        int counter = 0;

        for(int i=0; i<n; i++){
            if(counter == 10){
                break;
            }
            if(events[i] == "W"){
                counter += 1;
            }else if(events[i] == "WD" || events[i] == "NB"){
                score += 1;
            }else{
                score += stoi(events[i]);
            }
            
        }
        return {score, counter};
    }
};