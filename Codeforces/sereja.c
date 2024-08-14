#include <stdio.h>

int main (){

    //input 1
    int n;
    scanf("%d", &n);

    //input 2
    int cards[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &cards[i]);
    }

    int s = 0;
    int d = 0;
    int left = 0;
    int right = n -1; 
    int turn = 0;

    while (left <= right){
        if (cards[left] >= cards[right])
        {
            if (turn % 2 == 0){
                s += cards[left];
            }
            else {
                d += cards[left];
            }
            left++;
        }
        else if (cards[left] < cards[right])
        {
            if (turn % 2 == 0){
                s += cards[right];
            }
            else {
                d += cards[right];
            }
            right--;
        }
        turn++;

    }

    printf("%d %d", s, d);

}