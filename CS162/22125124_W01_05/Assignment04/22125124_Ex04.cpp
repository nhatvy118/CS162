//huynh phan nhat vy
//22125124
#include<iostream>

using namespace std;

int main(){
    int n,a[2005],d;
    cin >> n >> d;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 2; i <= n; i++){
        if (a[i] > a[i - 1]) continue;
        int k = (a[i - 1] - a[i])/d + 1;
        ans += k;
        a[i] = a[i] + k * d;       
    }
    cout << ans;
    return 0;
}