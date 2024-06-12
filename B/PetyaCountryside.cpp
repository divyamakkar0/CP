#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int h[n];
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    int max = 0;
    int r = 0;
    int l = 0;
    int counter = 0;

    for (int i = 0; i < n; i++){
        //when i = 0
        if(i == 0){
            for (int j = i+1; j < n; j++){
                if (h[j] <= h[j-1]){
                    counter++;
                } else {
                    break;
                }
            }

            if(max < counter+1){
                max = counter+1;
            }

            counter = 0;
        }
        
        //when i = n-1
        else if (i == n-1)
        {
            for (int j = i-1; j >=0; j--){
                if (h[j] <= h[j+1]){
                    counter++;
                } else {
                    break;
                }
            }

             if(max < counter+1){
                max = counter+1;
            }
            counter = 0;
        } 

        //every other case
        else 
        {
            for (int j = i+1; j < n; j++){
                if (h[j] <= h[j-1]){
                    counter++;
                } else {
                    break;
                }
            }

             for (int j = i-1; j >=0; j--){
                if (h[j] <= h[j+1]){
                    counter++;
                } else {
                    break;
                }
            }

            if(max < counter+1){
                max = counter+1;
            }
            counter = 0;

        }

    
}
    cout<<max;

}
