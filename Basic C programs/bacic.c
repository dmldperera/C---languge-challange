#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,min=999999,max=0,temp,x;
    float avg,sum=0;

    for(i=0;i<10;i++){

        printf("Enter the number: ");
    scanf("%d",&arr[i]);

    if(arr[i]>max){
        max = arr[i];
    }
    if(arr[i]<min){
        min = arr[i];
}

    sum = sum + arr[i];

}

    avg = sum/10.0;

    printf("\nThe minimum value is %d min\n",min);
    printf("\nThe maximum value is %d min\n",max);
    printf("\nThe Average value is %.2f\n",avg);

    for(i=9;i>-1;i--){
    printf("The reverse element %d is %d\n",i,arr[i]);

 }
    return 0;
}
