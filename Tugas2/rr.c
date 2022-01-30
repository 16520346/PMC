#include <stdio.h>

// 13220053 Radithya Arisaputra
// referensi https://www.javatpoint.com/round-robin-program-in-c

int main ()
{
    int i, sum, y, NOP, count, quant, wt, tat;
    printf("Amount of processes: ");
    scanf("%d", &NOP);
    y = NOP;
    int at[y], rt[y], temp[y];

    for (i=0;i<NOP;i++)
    {
        printf("\n Arrival and required time to complete process[%d]\n", i+1);
        printf("\n Arrival time: \t");
        scanf("%d", &at[i]);
        printf("\n Required time to finish process: \t");
        scanf("%d", &rt[i]);
        temp[i] = rt[i];
    }

    printf("Quantum time: \t");
    scanf("%d", &quant);
    printf("\n Process no \t\t Required time \t\t TAT \t\t Waiting time");

    for (sum=0, i=0 ;y!=0;)
    {

        
        if (temp[i] <= quant && temp[i]>0) // kalau required time < quant
        {
            sum = sum + temp[i];
            temp[i]=0;
            count = 1;
        }

        else if (temp[i]>0) // kalau 1 quant tidak cukup untuk menyelesaikan task
        {
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }

        if (temp[i]==0 && count==1)
        {
            y--; // proses yang perlu dikerjakan berkurang 1 (proses sudah selesai)
            printf("\n Process no [%d] \t\t %d\t\t %d\t\t\t %d", i+1, rt[i], sum-at[i], sum-at[i]-rt[i]);
            wt = wt + sum-at[i]-rt[i];
            tat = tat + sum-at[i];
            count=0;
        }

        if (i==NOP-1)
        {
            i=0;
        }

        else if (at[i+1] <= sum)
        {
            i++;
        }

        else
        {
            i=0;
        }
    }

}
