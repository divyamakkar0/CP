    #include <stdio.h>
    #include <stdlib.h>
     
    int main()
    {
        int n;
        int m;
        scanf("%d %d", &n, &m);
     
        int pairCounter = 0;
        int y = 0;
        for (int i = 1; i <= n; i++){
            if ( i <= 5){
                y = abs(5 - i);
                if (y != 0){
                    while (y <= m){
                        pairCounter++;
                        y += 5;
                    }
                }
     
                if (i == 5){
                    y = 5;
                    while (y <= m){
                        pairCounter++;
                        y += 5;
                    }
                }
            } else if (i > 5){
                y = 5 - (i % 5);
                if (y != 0){
                    while (y <= m){
                        pairCounter++;
                        y += 5;
                    }
                }
     
                if (i == 5){
                    y = 5;
                    while (y <= m){
                        pairCounter++;
                        y += 5;
                    }
                }
            }
     
            
        }
     
        printf("%d", pairCounter);
     
    }