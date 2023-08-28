#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int cup = 0;
    int mon = 0;
    
    cup = money / 5500;
    mon = money % 5500;
    
    answer.push_back(cup);
    answer.push_back(mon);
    
    return answer;
}