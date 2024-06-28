#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<int>> lines) {
    unordered_map<int, int> map;
    int answer = 0;

    for (auto v : lines)
    {
        for (int i = v[0]; i < v[1]; ++i)
        {
            map[i]++;
            if (map[i] == 2)
                answer++;
        }
    }
    return answer;
}