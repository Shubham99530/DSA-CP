#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

const int BMAX = 10;
const int MAXL = 64;
const int MAXM = 1 << 10;          // 1024

ull dpCnt[BMAX + 1][MAXL + 1][MAXM];
ull totalMagic[BMAX + 1][MAXL + 1];
ull prefMagic[BMAX + 1][MAXL + 1];
int maxLen[BMAX + 1];

ull count_le(int b, ull X) {
    if (X == 0) return 0;
    vector<int> dig;
    ull t = X;
    while (t > 0) {
        dig.push_back(int(t % b));
        t /= b;
    }
    reverse(dig.begin(), dig.end());
    int L = (int)dig.size();
    ull ans = (L > 1 ? prefMagic[b][L - 1] : 0);
    int curMask = 0;
    int maskLimit = 1 << b;
    for (int i = 0; i < L; ++i) {
        int d = dig[i];
        int rem = L - 1 - i;
        int start = (i == 0 ? 1 : 0);
        for (int cand = start; cand < d; ++cand) {
            int nm = curMask ^ (1 << cand);
            if (nm < maskLimit && rem <= maxLen[b])
                ans += dpCnt[b][rem][nm];
        }
        curMask ^= (1 << d);
    }
    if (curMask == 0) ++ans;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    const ull LIM = 1000000000000000000ULL; // 1e18
    for (int b = 2; b <= 10; ++b) {
        // maxLen
        ull p = 1;
        int len = 1;
        while (p <= LIM / (ull)b) {
            p *= (ull)b;
            ++len;
        }
        maxLen[b] = len;
        int masks = 1 << b;
        dpCnt[b][0][0] = 1;
        for (int l = 1; l <= maxLen[b]; ++l) {
            for (int mask = 0; mask < masks; ++mask) {
                ull sum = 0;
                for (int d = 0; d < b; ++d) {
                    int prev = mask ^ (1 << d);
                    sum += dpCnt[b][l - 1][prev];
                }
                dpCnt[b][l][mask] = sum;
            }
        }
        totalMagic[b][0] = 0;
        prefMagic[b][0] = 0;
        for (int l = 1; l <= maxLen[b]; ++l) {
            ull s = 0;
            int rem = l - 1;
            for (int first = 1; first < b; ++first) {
                int need = 1 << first;
                s += dpCnt[b][rem][need];
            }
            totalMagic[b][l] = s;
            prefMagic[b][l] = prefMagic[b][l - 1] + s;
        }
    }
    
    int q;
    if (!(cin >> q)) return 0;
    while (q--) {
        int b;
        ull l, r;
        cin >> b >> l >> r;
        ull ans = count_le(b, r) - (l == 0 ? 0 : count_le(b, l - 1));
        cout << ans << '\n';
    }
    return 0;
}