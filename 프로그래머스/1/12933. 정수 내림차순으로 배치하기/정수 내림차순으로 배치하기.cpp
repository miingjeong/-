#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector <int> vec;
    int rest=0;
    
    
    while(n>0){
        vec.push_back(n%10);
        n=n/10;        
    }
    sort(vec.begin(), vec.end(), greater<int>());
    
    for(int i=0; i< vec.size(); i++)
        answer=answer*10+vec[i];
    return answer;
}