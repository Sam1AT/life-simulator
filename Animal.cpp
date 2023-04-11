#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
using namespace std;


int smith_waterman(string s1, string s2, int match_score, int mismatch_score, int gap_penalty) {
    int n = s1.length();
    int m = s2.length();

    vector<vector<int>> scores(n + 1, vector<int>(m + 1, 0));

    int max_score = 0;
    pair<int, int> max_pos;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int match = scores[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? match_score : mismatch_score);
            int delete_gap = scores[i - 1][j] + gap_penalty;
            int insert_gap = scores[i][j - 1] + gap_penalty;
            scores[i][j] = max(0, max(match, max(delete_gap, insert_gap)));
            if (scores[i][j] > max_score) {
                max_score = scores[i][j];
                max_pos = make_pair(i, j);
            }
        }
    }

    return max_score;
}