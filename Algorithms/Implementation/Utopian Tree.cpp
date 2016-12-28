#include <iostream>
using namespace std;

int height(int n) {
    int lenght=1;
    if (n==0)return 1;
    for (int i=0;i<n;i++){
        if (((i/2)*2 )== i){
            lenght=lenght*2;    
        
        }else {
            
            lenght++;
        }
        
    }
    
    
    return lenght;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
