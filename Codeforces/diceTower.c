#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int top;
    scanf("%d", &top);   


    int numbers[n][2];
    int distinctNum[6] = {0};

    for (int i = 0; i < n; i++){
        scanf(" %d %d", &numbers[i][0], &numbers[i][1]);
    }

    int nonDistinct = 0;

    for (int i = 0; i < n; i++){
        int left = numbers[i][0];
        int right = numbers[i][1];

        distinctNum[top - 1] = 1;
        distinctNum[(6 - top)] = 1;
        distinctNum[left - 1] = 1;
        distinctNum[(6 - left)] = 1;
        distinctNum[right - 1] = 1;
        distinctNum[(6 - right)] = 1;
        
        for (int j = 0; j <6; j++){
            if (distinctNum[j] != 1){
                nonDistinct++;
                break;
            }

            distinctNum[j] = 0;
        }
        
        top = (7 - top);
    }

    if (nonDistinct == 0){
        printf("YES");
    } else {
        printf("NO");
    }












}