#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    char role[50];
} Actor;

typedef struct
{
    char name[50];
    char genre[50];
    Actor *actors;
    int actors_count;
    int actors_capacity;
} Film;

// Film functs
Film *create_films(int n)
{
    Film *films = (Film *)malloc(n * sizeof(Film));
    for (int i = 0; i < n; i++)
    {
        films[i].actors_capacity = 5;
        films[i].actors_count = 0;
        films[i].actors = (Actor *)malloc(films[i].actors_capacity * sizeof(Actor));
    }
    return films;
}

void add_actor(Film *film, Actor actr)
{
    if (film->actors_count >= film->actors_capacity)
    {
        film->actors_capacity *= 2;
        film->actors = (Actor *)realloc(film->actors, film->actors_capacity * sizeof(Actor));
    }
    film->actors[film->actors_count] = actr;
    film->actors_count++;
}
void display(const Film *film)
{
    printf("Film: %s, genre: %s\n", film->name, film->genre);
    printf("Actors:\n");
    for (int i = 0; i < film->actors_count; i++)
    {
        printf("actor: %s, role: %s\n", film->actors[i].name, film->actors[i].role);
    }
    printf("\n");
}
void free_actors(Film *film)
{
    free(film->actors);
    film->actors = NULL;
    film->actors_capacity = 0;
    film->actors_count = 0;
}

void free_film(Film *films, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(films[i].actors);
    }
    free(films);
}
Film find_film(Film *films, int n)
{
    int id = 0;
    for (int i = 1; i < n; i++)
    {
        if (films[i].actors_count > films[id].actors_count)
        {
            id = i;
        }
    }
    return films[id];
}

int main(int argc, char **argv)
{
    int n = 0;
    printf("Films count?:");
    scanf("%d", &n);
    getchar();
    Film *films = create_films(n);

    for (int i = 0; i < n; i++)
    {
        printf("\nFilm %d:\n", i + 1);
        printf("name?:");
        fgets(films[i].name, sizeof(films[i].name), stdin);
        printf("genre?:");
        fgets(films[i].genre, sizeof(films[i].genre), stdin);
        printf("count of actors?:");
        int actrc = 0;
        scanf("%d", &actrc);
        getchar();
        for (int j = 0; j < actrc; j++)
        {
            Actor actr;
            printf("actor name:");
            fgets(actr.name, sizeof(actr.name), stdin);
            printf("actor role:");
            fgets(actr.role, sizeof(actr.role), stdin);
            add_actor(&films[i], actr);
        }
    }
    for (int i = 0; i < n; i++)
    {
        display(&films[i]);
    }
    printf("film with max actors:\n");
    Film film = find_film(films, n);
    display(&film);
    free_film(films, n);
    return 0;
}
