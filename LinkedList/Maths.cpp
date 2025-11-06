#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Line {
    int x1, y1, x2, y2;
};
int main() {
    int n;
    cin>>n;

    vector<Line> horizontal;
    vector<Line> vertical;

    for (int i = 0; i < n; ++i) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if (y1==y2) { 
            horizontal.push_back({min(x1, x2), y1, max(x1, x2), y2});
        } else if (x1==x2) {
            vertical.push_back({x1, min(y1, y2), x2, max(y1, y2)});
        }
    }

    long long rectCount=0;
    for (int i=0; i<horizontal.size(); ++i) {
        for (int j=i+1; j<horizontal.size(); ++j) {
            
            Line h1 = horizontal[i];
            Line h2 = horizontal[j];
            
            if (h1.y1 > h2.y1) {
                swap(h1, h2);
            }
            int yBottom = h1.y1;
            int yTop=h2.y1;
            int xMin=max(h1.x1, h2.x1);
            int xMax=min(h1.x2, h2.x2);
            if (xMin>=xMax) {
                continue;
            }
            int studentVerticals=0;
            for (const auto& v : vertical) {
                bool x_check=(v.x1 >= xMin && v.x1 <= xMax);
                bool y_check=(v.y1 <= yBottom && v.y2 >= yTop);
                if (x_check && y_check) {
                    studentVerticals++;
                }
            }
            if (studentVerticals>=2) {
                rectCount +=(long long)(studentVerticals * (studentVerticals - 1)) / 2;
            }
        }
    }

    cout << rectCount << endl;

    return 0;
}