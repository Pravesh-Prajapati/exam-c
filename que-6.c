#include <stdio.h>

#define MAX_MOVIES 100
struct Movie {
    char title[100];
    char genre[50];
    char language[50];
};

int main() {
    int n,i;

    printf("Enter the number of movies:");
    scanf("%d", &n);

    struct Movie movies[MAX_MOVIES];

    printf("\nEnter details of %d movies:\n", n);
    for (i = 0; i < n; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: ");
        scanf(" %s", movies[i].title);
        printf("Genre: ");
        scanf(" %s", movies[i].genre);
        printf("Language: ");
        scanf(" %s", movies[i].language);
    }

    printf("\nDetails of %d movies:\n", n);
    for ( i = 0; i < n; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
    }

    return 0;
}

