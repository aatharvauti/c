#include <stdio.h>

int main()
{

    int rs[10], faults = 0, m, n, s, pages, frames;
    
    printf("\nEnter the number of Pages: ");
    scanf("%d", &pages);
    
    printf("\nEnter reference string values:\n");
    for(m = 0; m < pages; m++) {
        printf("Value No. [%d]: ", m + 1);
        scanf("%d", &rs[m]);
    }

    printf("\nTotal number of frames: ");
    scanf("%d", &frames);

    int temp[frames];
    
    for(m = 0; m < frames; m++)
        temp[m] = -1;

    for(m = 0; m < pages; m++) {
    
        s = 0;
    
        for(n = 0; n < frames; n++) {
            if(rs[m] == temp[n]) {
                    s++;
                    faults--;
                }
        }     
        
        faults++;
        
        if((faults <= frames) && (s == 0))
            temp[m] = rs[m];
        else if(s == 0)
            temp[(faults - 1) % frames] = rs[m];
        
        printf("\n");
        
        for(n = 0; n < frames; n++)     
            printf("%d\t", temp[n]);
    }

    printf("\nTotal Page Faults: %d\n", faults);
    return 0;
}