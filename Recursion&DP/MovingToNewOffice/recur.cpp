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

int calc_cost(vector<int>& p, int s, int e, int x, int y) {
    if (s+1<e) {                                            //one element between start and end should be present
        int cost=0, mincost = numeric_limits<int>::max();
        for (auto i= s+1; i<e; i++) {
            cost = x*(p[i]-p[s]) + y*(p[e]-p[i]) + calc_cost(p,s,i,x,y) + calc_cost(p,i,e,x,y);
            mincost = min(mincost,cost);
        }
        return mincost;
    }
    return 0;
}
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
        
        cout << calc_cost(p,0,N-1,x,y)<<endl;    
        
    }
}
