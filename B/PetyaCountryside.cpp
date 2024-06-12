#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int h[n];
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    int highest = 0;
    int r = 0;
    int l = 0;
    int counter = 0;

    for (int i = 0; i < n; i++){
        //if not at the ends
        if (i != 0 || i != n-1){
            r = i;
            while (r != n-1){
                if (h[r+1] <= h[r]){
                    r = (r+1);
                    counter++;
                } else {
                    break;
                }
            }
            while (l != 0){
                if(h[l-1] <= h[l]){
                    l = l-r;
                    counter++;
                } else {
                    break;
                }
            }

            if (highest < counter){
                highest = counter;
            }
        } else {
           if(i == 0){
            
           }
        }


    }


}
