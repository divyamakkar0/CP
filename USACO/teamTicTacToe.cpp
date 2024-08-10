#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;

int main()
{   
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    //get inputs
   char t[3][3];
   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cin >> t[i][j];
    }
   }

   vector<int> row1(26,0);
   vector<int> row2(26,0);
   vector<int> row3(26,0);
   vector<int> col1(26,0);
   vector<int> col2(26,0);
   vector<int> col3(26,0);
   vector<int> diag1(26,0);
   vector<int> diag2(26,0);
   int singleVic = 0;
   int teamVic = 0;

    for(int i =0; i< 3; i++){
        row1[t[0][i] - 'A'] = 1;
    }
    if (accumulate(row1.begin(), row1.end(),0) == 1){
        singleVic++;
    } else if(accumulate(row1.begin(), row1.end(),0) == 2){
        teamVic++;
    }

    for(int i =0; i< 3; i++){
        row2[t[1][i] - 'A'] = 1;
    }
    if (accumulate(row2.begin(), row2.end(),0) == 1){
        singleVic++;
    } else if(accumulate(row2.begin(), row2.end(),0) == 2){
        teamVic++;
    }

    for(int i =0; i< 3; i++){
        row3[t[2][i] - 'A'] = 1;
    }
    if (accumulate(row3.begin(), row3.end(),0) == 1){
        singleVic++;
    } else if(accumulate(row3.begin(), row3.end(),0) == 2){
        teamVic++;
    }

    for(int i =0; i< 3; i++){
        col1[t[i][0] - 'A'] = 1;
    }
    if (accumulate(col1.begin(), col1.end(),0) == 1){
        singleVic++;
    } else if(accumulate(col1.begin(), col1.end(),0) == 2){
        teamVic++;
    }

    for(int i =0; i< 3; i++){
        col2[t[i][1] - 'A'] = 1;
    }
    if (accumulate(col2.begin(), col2.end(),0) == 1){
        singleVic++;
    } else if(accumulate(col2.begin(), col2.end(),0) == 2){
        teamVic++;
    }
    for(int i =0; i< 3; i++){
        col3[t[i][2] - 'A'] = 1;
    }
    if (accumulate(col3.begin(), col3.end(),0) == 1){
        singleVic++;
    } else if(accumulate(col3.begin(), col3.end(),0) == 2){
        teamVic++;
    }

    for(int i =0; i < 3; i++){
        for(int j = i; j < i+1; j++){
            diag1[t[i][j] - 'A'] = 1;
        }
    }
    if (accumulate(diag1.begin(), diag1.end(),0) == 1){
        singleVic++;
    } else if(accumulate(diag1.begin(), diag1.end(),0) == 2){
        teamVic++;
    }

    diag2[t[0][2] - 'A'] = 1;
    diag2[t[1][1] - 'A'] = 1;
    diag2[t[2][0] - 'A'] = 1;
    if (accumulate(diag2.begin(), diag2.end(),0) == 1){
        singleVic++;
    } else if(accumulate(diag2.begin(), diag2.end(),0) == 2){
        teamVic++;
    }

    cout << singleVic << endl;
    cout << teamVic;
}