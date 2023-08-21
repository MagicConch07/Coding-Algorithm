#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    int s = numbers.size();
    for(int i = 0; i < s; i++){
        sum += numbers[i];
    }
    return sum / s;
}