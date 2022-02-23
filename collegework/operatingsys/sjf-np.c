#include<stdio.h>

int main()
{
    int burst_time[20], p[20], waiting_time[20], turn_around_time[20], i, j, n, total = 0, pos, temp;
    float average_waiting_time, average_turn_around_time;
    
    printf("Enter the number of process: ");
    scanf("%d",&n);
  
    printf("\nEnter Burst Time:\n");
    for(i = 0; i < n ; i++)
    {
        printf("P[%d]: ", i + 1);
        scanf("%d", &burst_time[i]);
        p[i] = i + 1;         
    }
  
    for(i = 0; i < n; i++)
    {
        pos = i;
        for(j = i + 1; j < n; j++)
        {
            if(burst_time[j] < burst_time[pos])
                pos = j;
        }
  
        temp = burst_time[i];
        burst_time[i] = burst_time[pos];
        burst_time[pos] = temp;
  
        temp = p[i];
        p[i] = p[pos];
        p[pos] = temp;
    }
   
    waiting_time[0] = 0;            

    for(i = 1; i < n; i++)
    {
        waiting_time[i] = 0;
        for(j = 0;j < i; j++)
            waiting_time[i] += burst_time[j];
  
        total += waiting_time[i];
    }
  
    average_waiting_time = (float)total/n;      
    total = 0;
  
    printf("\nProcess\tBurst Time\tWaiting Time\tTurn around Time");
    for(i = 0; i < n; i++)
    {
        turn_around_time[i] = burst_time[i] + waiting_time[i];   
        total += turn_around_time[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t\t%d", p[i], burst_time[i], waiting_time[i], turn_around_time[i]);
    }
  
    average_turn_around_time = (float)total/n;    
    printf("\n\nAverage Waiting Time:\t\t%.2f", average_waiting_time);
    printf("\nAverage Turnaround Time:\t%.2f\n", average_turn_around_time);

}