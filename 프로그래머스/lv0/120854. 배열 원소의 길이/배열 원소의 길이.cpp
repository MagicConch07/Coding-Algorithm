#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    int s = strlist.size();
    int n = 0;
    for(int i = 0; i < s; i++){
        n = strlist[i].length();
        answer.push_back(n);
    }
    return answer;
}