#include<stdio.h>
 main()
{
    long int start, end, i, large1, large, longs1, last, longs, n,temp;
  while(scanf("%ld%ld",&start,&end)==2)
  {
    longs=0;
    large=0;

    if(start==0 && end==0)
        return 0;
    if(start>end)
    {
            temp=start;
            start=end;
            end=temp;
    }
    for(i=start;i<=end;i++)
    {
        n=i;
        last=0;
        large1=0;
        longs1=0;
        while(last!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                large1++;
            }
            else
            {
                n=(3*n)+1;
                large1++;
            }
            last=n;
        }
        if(large<large1)
        {
            large=large1;
            longs=i;
        }


    }
     printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n", start, end, longs, large);
  }

}
