#include <iostream>
#include <algorithm>

using namespace std;

int a[9];
int n = 9;
int main(){
    int sum = 0;
    for(int i=0; i<9; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+n);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(sum - a[i] - a[j] == 100){
                for(int k=0; k<n; k++){
                    if(k == i || k == j) continue;
                    cout << a[k] << '\n';
                }
                return 0;   //정답이 여러가지인 경우 하나만 
            }
        }
    }
    return 0;
}
