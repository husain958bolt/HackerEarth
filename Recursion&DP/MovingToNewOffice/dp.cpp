/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t-- >0) {
        int x;
        cin >> x;
        int y;
        cin >> y;
        
        int N;
        cin >> N;
        vector<int> p(N,0);
        for (auto i=0; i<N; i++)
            cin >> p[i];
        vector<vector<int>> dp(N,vector<int>(N,numeric_limits<int>::max()));
        for (auto i=0; i<N-1; i++) {
            dp[i][i+1] = 0;
        }
        int t, min_t;
        for (auto i=2; i<N; i++) {
            for (auto j=0; j<=N-1-i; j++) {
                min_t = numeric_limits<int>::max();
                for (auto k=1; k<i; k++) {
                    t = x*(p[j+k]-p[j]) + y*(p[j+i]-p[j+k]) + dp[j][j+k] + dp[j+k][j+i];
                    min_t = min(min_t,t);
                }
                dp[j][j+i] = min_t;
            }
        }
        cout << dp[0][N-1] <<endl;    
        
    }
}
