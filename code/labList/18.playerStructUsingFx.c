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
		printf("\n%s\t%s\t%.1f\n",player[i].playerName, player[i].teamName, player[i].battingAvg);
	}
}

int main()
{

	struct Player Rohit;
	struct Player Virat;
	struct Player Rahul;

	struct Player player[2];

	strcpy(player[0].playerName, "Rohit Sharma");
	strcpy(player[0].teamName, "India");
	player[0].battingAvg = 46.2;

	strcpy(player[1].playerName, "Virat Kohli");
	strcpy(player[1].teamName, "India");
	player[1].battingAvg = 50.0;

	strcpy(player[2].playerName, "Rahul Dravid");
	strcpy(player[2].teamName, "India");
	player[2].battingAvg = 52.4;

    descendingBattingAvg( &player );
   
   return 0;
}