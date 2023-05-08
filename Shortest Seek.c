//Doða Kayra Yýlmazarslan 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,n = 8,TotalHeadMoment=0,initial,count=0;
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&RQ[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
    int seekSeq[8];
    
    // logic for sstf disk scheduling
    
        /* loop will execute until all process is completed*/
    while(count!=n)
    {
        int min=1000,d,index;
        for(i=0;i<n;i++)
        {
           d=abs(RQ[i]-initial);
           if(min>d)
           {
               min=d;
               index=i;
               seekSeq[count] = RQ[index];
           }
           
        }
        TotalHeadMoment=TotalHeadMoment+min;
        initial=RQ[index];
        // 1000 is for max
        // you can use any number
        RQ[index]=1000;
        count++;
    }
    printf("Seek sequence:\n");
    for(i = 0; i < n; i++){
    	printf("%d\n",seekSeq[i]);
	}
    printf("Total head movement is %d",TotalHeadMoment);
    return 0;
}
