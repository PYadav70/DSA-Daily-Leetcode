class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> result;
        vector<int> result2;
         string temp1 = "";
          string temp2 = "";
        
        for(char &v1 : version1){
            if(v1 != '.'){
              temp1 += v1;
            }else{
                result.push_back(stoi(temp1));
                temp1 = "";
            }  
        }
         if (!temp1.empty()){
             result.push_back(stoi(temp1));
           }
         for(char &v2 : version2){
            if(v2 != '.'){
                temp2 += v2;
            }else{
                 result2.push_back(stoi(temp2));
                temp2 = "";
            }
         }
          if (!temp2.empty()){
                result2.push_back(stoi(temp2));
            }
         int n = max(result.size(), result2.size());
         for(int i=0; i<n ; i++){
            int num1 = i < result.size() ? result[i] : 0;
            int num2 = i < result2.size() ? result2[i] : 0;
            if (num1 > num2) return 1;
            if (num1 < num2) return -1;
         }

        return 0;
    }
};