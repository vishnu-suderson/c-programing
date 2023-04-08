#include <stdio.h>

#define MAX_PLAYERS 11

struct Player {
    char name[50];
    int runs;
};

int main() {
    struct Player team[MAX_PLAYERS];
    int num_players, i, total_runs = 0;
    
    printf("Enter number of players in the team (max %d): ", MAX_PLAYERS);
    scanf("%d", &num_players);
    
    // Accept batting information of each player
    for (i = 0; i < num_players; i++) {
        printf("\nEnter name of player %d: ", i+1);
        scanf("%s", team[i].name);
        printf("Enter runs scored by player %d: ", i+1);
        scanf("%d", &team[i].runs);
        total_runs += team[i].runs;
    }
    
    // Display batting information of each player
    printf("\nBatting information of the team:\n");
    printf("---------------------------------\n");
    printf("Name\tRuns\n");
    printf("---------------------------------\n");
    for (i = 0; i < num_players; i++) {
        printf("%s\t%d\n", team[i].name, team[i].runs);
    }
    
    // Display total runs scored by the team
    printf("---------------------------------\n");
    printf("Total runs: %d\n", total_runs);
    
    return 0;
}
