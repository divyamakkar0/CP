#include <stdio.h>

int main() {
    //number of wires
    int n;  
    scanf("%d", &n);

    //birds on each wire
    int birds_on_wire[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &birds_on_wire[i]);
    }

    //birds shot
    int m;  
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int x, y; 
        scanf("%d %d", &x, &y);
        x--;  
        y--;  

        // Shooting the bird
        birds_on_wire[x] -= 1;

        // Birds jumping up to the previous wire
        if (x > 0) {
            birds_on_wire[x] -= y;
            birds_on_wire[x - 1] += y;
        }

        if (x == 0){
            birds_on_wire[x] -= y;
        }

        // Birds jumping down to the next wire
        if (x <= n - 1) {
            int remaining_birds = birds_on_wire[x];
            if (remaining_birds > 0) {
                birds_on_wire[x + 1] += remaining_birds;
            }
        } 
        
        // Reset the number of birds on the current wire
        birds_on_wire[x] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", birds_on_wire[i]);
    }

    return 0;
}
