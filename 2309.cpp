/*#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int a[9];
    int find[7];
    int sum;
    for(int i=0; i<9; i++){
        cin >> a[i];
        sum += a[i];
    }


    int first, second;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            int check = a[i] + a[j];
            if(sum-check == 100){
                first = i;
                second = j;
            }
        }
    }
    int j = -1;
    for(int i=0; i<9; i++){
        if(i != first || i != second){
            j++;
            find[j] = a[i];
        }
    }
    sort(find, find+7);
    for(int i=0; i<7; i++)
        cout<<find[i]<<endl;
    return 0;
}
*/

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
            }
        }
    }
    return 0;
}