#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char shapes[n][100];
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", shapes[i]);
    }

    int faces = 0;
    for (int i = 0; i < n; i++){
        if (strcmp(shapes[i],"Tetrahedron") == 0){
            faces += 4;
        } else if (strcmp(shapes[i],"Cube") == 0){
            faces += 6;
       } else if (strcmp(shapes[i],"Octahedron") == 0){
            faces += 8;
        } else if (strcmp(shapes[i],"Dodecahedron") == 0){
            faces += 12;
        } else if (strcmp(shapes[i],"Icosahedron") == 0){
            faces += 20;
        }
    }

    printf("%d", faces);
    
}

