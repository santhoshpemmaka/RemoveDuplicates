#include<stdio.h>
#include<string.h>

int main()
{
   char string[100];
   char string1[100];
   int j=1,n;
   int str_len1=0;
   scanf("%d",&n);
   while(j<=n)
   { 
       scanf("%s",string);
       int str_len = strlen(string);
       for(int i=0;i<str_len;i++)
       {
         int j;
         for(j=0;j<i;j++)
         {
           if(string[i]==string[j])
           break;
         }
         if(i==j)
         { 
           string1[k++]=string[i];
         }
        }
        j++;
   }
   printf("%s",string1);
   return 0;
}
        
