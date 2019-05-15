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

int calc_cost(vector<vector<int>>& c,int s, int e,int x) {
    
    if (s<=e) {
        int v1, v2, v3;
        if (x==1) {
            v1 = 0;
            v2 = c[s][1] + calc_cost(c,s+1,e,2);
            v3 = c[s][2] + calc_cost(c,s+1,e,3);
            return min(v2,v3);
        }
        if (x==2) {
            v1 = c[s][0] + calc_cost(c,s+1,e,1);
            v2 = 0;
            v3 = c[s][2] + calc_cost(c,s+1,e,3);
            return min(v1,v3);
        }
        if (x==3) {
            v1 = c[s][0] + calc_cost(c,s+1,e,1);
            v2 = c[s][1] + calc_cost(c,s+1,e,2);
            v3 = 0;
            return min(v1,v2);
        }
    }
    return 0;
}

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
        
        int v1 = c[0][0] + calc_cost(c,1,N-1,1);
        int v2 = c[0][1] + calc_cost(c,1,N-1,2);
        int v3 = c[0][2] + calc_cost(c,1,N-1,3);
        int mincost = min(v1,min(v2,v3));
        cout << mincost << endl;
        
    }
}
