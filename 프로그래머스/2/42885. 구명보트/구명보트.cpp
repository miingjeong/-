#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {

    sort(people.begin(), people.end());
    int i = 0;
    int j = people.size() - 1;

    int answer = 0;

    while(i <= j)
    {
        if(people[i] + people[j] <= limit)
        {
            ++i;
            --j;
        }
        else
        {
            --j;
        }

        ++answer;
    }

    return answer;
}