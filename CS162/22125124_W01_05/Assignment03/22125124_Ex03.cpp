//22125124
//huynh phan nhat vy
#include<iostream>
#include<cmath>

using namespace std;

struct Time{
    int s,e;
};
int main(){
    int n,P1,P2,P3,T1,T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;
    long long ans = 0;
    Time a[105];
    for (int i = 1; i <= n; i++)
        cin >> a[i].s >> a[i].e;
    ans += (a[1].e - a[1].s) * P1;
    for (int i = 2; i <= n; i++){
        ans += (a[i].e - a[i].s) * P1;
        int diff = a[i].s - a[i-1].e;
        if (diff > 0) ans += P1 * min(diff,T1);
        diff -= min(diff,T1);
        if (diff > 0) ans += P2 * min(diff,T2);
        diff -= min(diff,T2);
        if (diff > 0) ans += P3 * diff;
    }
    cout << ans;

}