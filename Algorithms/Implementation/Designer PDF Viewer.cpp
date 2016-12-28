#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n = 26;
    int max=0;//index of max heigth char
    vector<int> h(n);
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    for(int i =0;i<word.length()  ;i++)
    {
        int x=word[i]-97;//index of current letter in ascii starting from zero
        if (h[x]>h[max]) max=x;   
    }
    cout<<h[max]*word.length();
    return 0;
}
