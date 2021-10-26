#include <stdio.h>
#include <string.h>

void testcase()
{
    long int i,len1,len2,freq[26]={0},rndm[26]={0};
    char str1[1000000],str2[1000000];
    scanf("%s%s",str1,str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    for(i=0;i<len1;i++)
        freq[str1[i]-97]++;
    for(i=0;i<26;i++)
    { 
        if(freq[i]>=1)
            freq[i] = 1;
        else 
            freq[i] = -100;
    }
    for(i=0;i<len2;i++)
        rndm[str2[i]-97]++;
    for(i=0;i<26;i++)
    { 
        if(rndm[i]>=1)
            rndm[i] = 2;
        else 
            rndm[i] = -200;
    }
    for(i=0;i<26;i++)
    {
        if(freq[i]+rndm[i]==3)
        {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
     testcase();
    return 0;
}
