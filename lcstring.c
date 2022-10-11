#include<stdio.h>
int max(int nums[],int lenth);
int main()
{
    //enter the input;
    printf("please enter the input:");
    char input[6];
    //以pwwkew为测试
    scanf("%6s",input);
    int count;
    int nums[6]={0};
    for (int i=0;i<6;i++)
    {
        count=0;
        for (int j=i+1;j<6;j++)
        {
            count=0;
            for(int s=i;s<j;s++)
            {
                if(input[j]==input[s])
                {
                    count=count+1;
                }
            }
            if(count!=0)
            {
               nums[i]=j-i;
                break;
            }
            else if(count==0)
            {
                continue;

            }
           
        }
       
    }
     printf("%d",max(nums,6));

   
}
 int max(int nums[],int lenth)
        {
            int m=0;
            for (int i=0;i<lenth;i++)
            {
                if(nums[i]>m)
                {
                    m=nums[i];
                }
               
            }
            return m;
        }
