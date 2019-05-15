/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- >0){
        int N;
        cin >> N;
        vector<vector<int>> c(N, vector<int>(3,0));

        for (auto i=0; i<N; i++) {
            cin >> c[i][0];
            cin >> c[i][1];
            cin >> c[i][2];
        }

        vector<vector<int>> dp(N, vector<int>(3,0));
        dp[0][0] = c[0][0];
        dp[0][1] = c[0][1];
        dp[0][2] = c[0][2];
        
        int mincost;
        for (auto i=1; i<N; i++) {
            dp[i][0] = c[i][0]+min(dp[i-1][1],dp[i-1][2]);
            dp[i][1] = c[i][1]+min(dp[i-1][0],dp[i-1][2]);
            dp[i][2] = c[i][2]+min(dp[i-1][0],dp[i-1][1]);
        }
        mincost = min(dp[N-1][0],min(dp[N-1][1],dp[N-1][2]));
        cout << mincost << endl;
        
    }
}
