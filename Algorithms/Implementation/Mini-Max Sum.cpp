#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
  
    vector<long int> x={0,0,0,0,0};
    
    cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];
    
    sort(x.begin(),x.end());
    long int sum =0;
    sum =x[0] + x[1] + x[2] + x[3] + x[4];
    cout<<sum-x[4]<<" " << sum-x[0];
    
    return 0;
}
