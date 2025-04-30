/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    map<int, pair<long long, long long>> mq;

    // first key index
    int fki = 0;
    // last key index
    int lki = 0;
    // adjust index;
    long long adi = 0;
    // last head length;
    long long lhl = 0;
    for (int i = 0; i < Q; i++)
    {
        int query;
        cin >> query;

        if (query == 1) {
            long long l;
            cin >> l;
            mq[lki] = make_pair(l, lhl);
            lki++;
            lhl += l;
        } else if (query == 2) {
            auto p = mq.at(fki);
            mq.erase(fki);
            fki++;
            adi += p.first;
        } else if (query == 3) {
            int k;
            cin >> k;
            auto p = mq.at(fki + k - 1);
            long long ans = p.second - adi;
            cout << ans << endl;
        }
    }
    
    return 0;
}
