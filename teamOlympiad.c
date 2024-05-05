#include <stdio.h>

int main (){
    //input of students
    int n;
    scanf("%d ", &n);

    //input of skills
    int skills[n];
    for (int i = 0; i < n; i++){
        scanf(" %d", &skills[i]);
    } 

    int count[3] = {0};

    for (int i = 0; i < n; i++){    
        if (skills[i] == 1){
            count[0]++;
        } else if (skills[i] == 2){
            count[1]++;
        } else if (skills[i] == 3){
            count[2]++;
        }
    }
    int teams = count[0];
    for (int i = 1; i < 3; i++){
        if (count[i] < teams){
        teams = count[i];
        }
    }


    int one[teams];
    int two[teams];
    int three[teams];
    int oneIndex = 0, twoIndex = 0, threeIndex = 0;
    for (int i = 0; i < n; i++){
        if (skills[i] == 1 && oneIndex < teams){
            one[oneIndex] = i+1; 
            oneIndex++;
        }
        else if (skills[i] == 2 && twoIndex < teams){
            two[twoIndex] = i+1; 
            twoIndex++;
        }
        else if (skills[i] == 3 && threeIndex < teams){
            three[threeIndex] = i+1; 
            threeIndex++;
        }
        
    }


    // numer of teams
    printf("%d\n", teams);
    for (int i = 0; i < teams; i++){
        printf("%d %d %d\n", one[i], two[i], three[i]);
    }
}
