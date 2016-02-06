#include<stdio.h>
#include<string.h>
int main()
{
    char ch[21];
    int i,l,p,m;
    while(scanf("%s",&ch)!=EOF)
    {
        i=0;p=1,m=1;
        l=strlen(ch);
        while(i<l)
        {
            if(ch[i]!=ch[l-1-i])
                {
                p=0;
                break;
                }
            i++;
        }
        i=0;
        while(i<l)
        {
            if((ch[i]=='B'||ch[i]=='C'||ch[i]=='D'||ch[i]=='F'||ch[i]=='G'||ch[i]=='K'||
                ch[i]=='N'||ch[i]=='P'||ch[i]=='Q'||ch[i]=='R'||ch[i]=='4'||ch[i]=='6'||
                ch[i]=='7'||ch[i]=='9'))
            {
                m=0; break;
            }
            if((ch[i]=='A'||ch[i]=='H'||ch[i]=='I'||ch[i]=='M'||ch[i]=='O'||ch[i]=='T'||
                ch[i]=='U'||ch[i]=='V'||ch[i]=='W'||ch[i]=='X'||ch[i]=='Y'||ch[i]=='1'||
                ch[i]=='8')&&ch[i]!=ch[l-1-i])
            {
                m=0; break;
            }
            if((ch[i]=='E'&&ch[l-1-i]!='3')||(ch[i]=='J'&&ch[l-1-i]!='L')||(ch[i]=='L'&&ch[l-1-i]!='J')||
                (ch[i]=='S'&&ch[l-1-i]!='2')||(ch[i]=='Z'&&ch[l-1-i]!='5')||(ch[i]=='2'&&ch[l-1-i]!='S')||
                (ch[i]=='3'&&ch[l-1-i]!='E')||(ch[i]=='5'&&ch[l-1-i]!='Z'))
            {
                m=0; break;
            }
            i++;
        }
        if(m==0&&p==0)
            printf("%s -- is not a palindrome.\n\n",ch);
        else if(m==0&&p==1)
            printf("%s -- is a regular palindrome.\n\n",ch);
        else if(m==1&&p==0)
            printf("%s -- is a mirrored string.\n\n",ch);
        else if(m==1&&p==1)
            printf("%s -- is a mirrored palindrome.\n\n",ch);
    }
    return 0;
}
