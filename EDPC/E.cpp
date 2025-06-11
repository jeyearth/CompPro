/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

// 重さの最小値を求めるため、初期値として十分大きな値 (INF) を定義
const long long INF = 1LL << 60; // 約 1.15e18

int main()
{
    int N; // 品物の数は最大100なのでintで十分
    long long W;
    cin >> N >> W;

    vector<long long> weights(N);
    vector<int> values(N); // 価値は最大1000なのでintで十分

    int VALUE_SUM_MAX = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> weights[i] >> values[i];
        VALUE_SUM_MAX += values[i];
    }

    // DPテーブルの定義
    // dp[i][v]: i番目までの品物で価値の総和をvにするときの、重さの総和の最小値
    // 修正点1: サイズを (N+1) x (VALUE_SUM_MAX + 1) に修正
    // 修正点2: 初期値をINFに設定
    vector<vector<long long>> dp(N + 1, vector<long long>(VALUE_SUM_MAX + 1, INF));

    // 初期条件: 品物を1つも選んでいない状態
    // 価値0は重さ0で実現可能
    dp[0][0] = 0;

    // DPループ
    for (int i = 0; i < N; i++) // i番目の品物 (0-indexed)
    {
        for (int sum_v = 0; sum_v <= VALUE_SUM_MAX; sum_v++) // 達成したい価値の総和
        {
            // 修正点3: DPの遷移ロジックを修正
            
            // ケース1: i番目の品物を選ばない場合
            // 重さの最小値は、i-1番目までの品物で価値sum_vを達成したときと同じ
            dp[i + 1][sum_v] = dp[i][sum_v];

            // ケース2: i番目の品物を選ぶ場合
            if (sum_v - values[i] >= 0)
            {
                // 「i-1番目までで価値(sum_v - values[i])を達成する重さ + i番目の重さ」
                // と、選ばない場合の重さを比較し、小さい方を採用する
                chmin(dp[i + 1][sum_v], dp[i][sum_v - values[i]] + weights[i]);
            }
        }
    }

    // 結果の探索
    long long res = 0;
    // dp[N][sum_v] (全ての品物を考慮した結果) が W 以下となる最大の sum_v を探す
    for (int sum_v = 0; sum_v <= VALUE_SUM_MAX; ++sum_v)
    {
        if (dp[N][sum_v] <= W)
        {
            // 条件を満たす価値 sum_v で結果を更新していく
            res = sum_v;
        }
    }
    cout << res << endl;

    return 0;
}