#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> temp;
    int check = 0;
    
     for(int i = 0; i <= num_list.size(); i++){
         if(check == n){
             answer.push_back(temp);
             temp.clear();
             check = 0;
         }
         temp.push_back(num_list[i]);
         check++;
     }
    
    return answer;
}