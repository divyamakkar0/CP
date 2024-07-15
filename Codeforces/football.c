#include <stdio.h>
#include <string.h>

int main (){
    //take in num of teams
    int n;
    scanf("%d", &n);

    //for every team input its name
    char teams[n][11];
    for (int i = 0; i < n; i++){
        scanf("%10s", teams[i]);
    }


//compare all other teams against the first one only
    int counter = 1;
    char majorityTeam[11];

    //copy the majority team to the first team name
    strcpy(majorityTeam, teams[0]);

    //compare the first team against the other teams, if the are equal, add to the counter
    for (int i = 1; i < n; i++){
        if (strcmp(teams[0], teams[i]) == 0){
            counter++;
        } else {
            //copy the stringfigfjig that is diffferent to majority team
            strcpy(majorityTeam, teams[i]);
        }
    }

    
    if (n % 2 == 0){
        if (counter > (n/2)){
            printf("%s",teams[0]);
        } else {
            printf("%s", majorityTeam);
        }
    } else {
        if (counter >= ((n+1) / 2)){
            printf("%s", teams[0]);
        } else {
            printf("%s", majorityTeam);
        }
    }
}