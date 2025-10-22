    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <map>
    #include <string>
    #include <cmath>
    using namespace std;
     
    int main()
    {
        float a, b, c, d;
        cin >> a >> b >> c >> d;
     
        float r1 = a / c;
        float r2 = b / d;
     
        float ratio = min(r1, r2);
     
        int num = -1;
        int denom = -1;
     
        // cout << r1 << " r2: " << r2 << endl;
     
        if (r1 < r2)
        {
            num = a * d;
            denom = b * c;
        }
        else
        {
            num = b * c;
            denom = a * d;
        }
     
        // cout << num << " " << denom << endl;
        int new_top = denom - num;
     
        // simplify
        int count = 1;
        while (count <= min(new_top, denom))
        {
            if (new_top % count == 0 && denom % count == 0)
            {
                new_top /= count;
                denom /= count;
                count = 1;
            }
            count += 1;
        }
        if (new_top == 0){
            denom = 1;
        }
        cout << new_top << "/" << denom << endl;
    }