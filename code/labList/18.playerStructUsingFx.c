#include<stdio.h>
#include<string.h>

struct Player { 
	char playerName[100];
	char teamName[100];
	float battingAvg;
} a; 

void descendingBattingAvg(struct Player *player)
{
    int i, j;

    for (i = 1; i < 3; i++)
        for (j = 0; j < 3 - i; j++) {
        if ((player[j].battingAvg, player[j + 1].battingAvg) > 0) 
        {
            a = player[j];
            player[j] = player[j + 1];
            player[j + 1] = a;
        }
    }

	for(int i = 0; i < 3; i++)
	{
		printf("\n%s\t%s\t\t%.1f\n",player[i].playerName, player[i].teamName, player[i].battingAvg);
	}
}

int main()
{
	int i, p, f;

	struct Player *player[i];

	printf("Enter the number of Players: ");
	scanf("%d", &f);

	for (i = 0; i < f; i++)
	{
		printf("\nEnter Name of the Player %d:\n", i);
		scanf("%s", player[i]->playerName);

		printf("Enter Team Name of Player %d:\n", i);
		scanf("%s", player[i]->teamName);

		printf("Enter Batting Average of Player %d:\n", i);
		scanf("%f", player[i]->battingAvg);
	}


    descendingBattingAvg( &player );
   
   return 0;
}