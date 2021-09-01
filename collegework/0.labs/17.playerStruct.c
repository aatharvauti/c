#include<stdio.h>
#include<string.h>

struct Player {
	char playerName[100];
	char teamName[100];
	float battingAvg[100];
} player[1000], a; 

int main()
{
	int i, j, f, p;

	printf("Enter the number of Players: ");
	scanf("%d", &f);

	for (i = 0, p = 1; i < f, p <= f; i++, p++)
	{
		printf("\nPlayer %d", p);
	
		printf("\nEnter Name: ");
		scanf("%s ", player[i].playerName);

		printf("Enter Team Name: ");
		scanf("%s", player[i].teamName);

		printf("Enter Batting Average: ");
		scanf("%f", &player[i].battingAvg);
	}

	for (i = 0; i < f; i++)
	{
 	 	for (j = 0; j < f - 1; j++) 
		{
			if (player[j].battingAvg < player[j + 1].battingAvg) 
			{
				a = player[j];
				player[j] = player[j + 1];
				player[j + 1] = a;
			}
  		}
	}

	for(int i = 0; i < f; i++)
	{
		printf("\n%s\t%s\t%.1f\n",player[i].playerName, player[i].teamName, player[i].battingAvg);
	}
   
   return 0;
}