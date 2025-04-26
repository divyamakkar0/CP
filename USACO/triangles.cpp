#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    long long max_area = 0;
    
    for (int i = 0; i < n; i++) {
        int x1 = points[i].first;
        int y1 = points[i].second;
        
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            
            int x2 = points[j].first;
            int y2 = points[j].second;
            
            if (x1 != x2 && y1 != y2) continue;
            
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                
                int x3 = points[k].first;
                int y3 = points[k].second;
                
                if ((x1 == x2 && y2 == y3) || (x1 == x2 && y1 == y3) || 
                    (y1 == y2 && x2 == x3) || (y1 == y2 && x1 == x3) ||
                    (x2 == x3 && y1 == y3) || (x2 == x3 && y1 == y2) ||
                    (y2 == y3 && x1 == x3) || (y2 == y3 && x1 == x2)) {
                    
                    long long area = abs((long long)(x1)*(y2-y3) + (long long)(x2)*(y3-y1) + (long long)(x3)*(y1-y2));
                    max_area = max(max_area, area);
                }
            }
        }
    }
    
    cout << max_area << endl; 
    return 0;
}