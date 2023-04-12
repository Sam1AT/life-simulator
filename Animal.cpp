#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
using namespace std;


float Animal::smith_waterman(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    const int MATCH_SCORE = 3;
    const int MISMATCH_SCORE = -3;
    const int GAP_SCORE = -2;
    int max_score = 0;
    int** matrix = new int*[n+1];
    for (int i = 0; i <= n; ++i) {
        matrix[i] = new int[m+1];
        fill(matrix[i], matrix[i]+m+1, 0);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i-1] == s2[j-1]) {
                matrix[i][j] = matrix[i-1][j-1] + MATCH_SCORE;
            } else {
                matrix[i][j] = max(0, max(matrix[i-1][j] + GAP_SCORE, matrix[i][j-1] + GAP_SCORE));
                matrix[i][j] = max(matrix[i][j], matrix[i-1][j-1] + MISMATCH_SCORE);
            }
            max_score = max(max_score, matrix[i][j]);
        }
    }
    for (int i = 0; i <= n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return max_score / 12 * 100 / max(s1.length() , s2.length()) * 4;
}

float Animal::simularity(Animal s)
{
    int m = this->c.CHR.size();
    int n = s.c.CHR.size();
    long long sum_per=0;
    for(int i=0; i < m;i++)
    {
        for(int j=0 ; j < n;j++)
        {
            sum_per += max(smith_waterman(this->c.CHR[i].DNA2 , s.c.CHR[j].DNA2) , max(smith_waterman(this->c.CHR[i].DNA1 , s.c.CHR[j].DNA2) , max(smith_waterman(this->c.CHR[i].DNA2 , s.c.CHR[j].DNA1) , smith_waterman(this->c.CHR[i].DNA1 , s.c.CHR[j].DNA1))));
        }
    }

return sum_per/(m * n);
}

bool Animal::operator ==(const Animal& obj)
{

return (this->simularity(obj) >= 70)? 1 : 0;

}

