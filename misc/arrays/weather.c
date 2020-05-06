#include <stdio.h>

int main()
{
    double matrix[5][12] = {{10.2,10.4,11.2,14.2,15.1,9.1,9.2,5.1,6.4,7.2,7.6,7.5},{10.4,10.6,11.7,14.3,15.6,9.7,9.2,5.1,6.4,7.2,7.6,7.5},{10.2,20.4,11.2,12.2,15.1,9.1,9.2,5.1,6.4,7.2,7.6,3.5},{5.2,7.8,11.2,14.2,15.1,9.1,9.2,6.5,7.4,7.2,7.6,7.5},{10.5,16.4,11.2,14.2,25.1,9.1,9.2,5.1,6.4,7.,7.6,5.5}};
    double sum[5];
    int startYear = 2020;
    double yearlyAverage = 0;


    printf("YEAR      RAINFALL (inches)\n");
    
    for(int i=0;i<5;i++){
        double avg = 0;

        for(int j=0;j<12;j++){
            sum[i]+=matrix[i][j];
        }
        

        printf("%d      %.2f\n",startYear+i, sum[i]);
    }


    //yearly average
    for (int i=0;i<5;i++){
        yearlyAverage+= sum[i];
    }
    yearlyAverage = yearlyAverage/5;

    printf("\nThe yearly average is: %.2f\n\n",yearlyAverage);

    printf("MONTHLY AVERAGE:\n");
    printf("  Jan        Feb        Mar        Apr        May        Jun        Jul        Aug        Sep        Oct        Nov        Dec\n");

    for (int i = 0; i<12;i++){
        double sum = 0;
        double average = 0;
        for(int j = 0; j<5; j++){
            sum+=matrix[j][i];
        }
        average = sum/5;
        printf("%.2f       ",average);
    }
    printf("\n");

    return 0;
}
