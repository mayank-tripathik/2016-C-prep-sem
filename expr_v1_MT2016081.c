#include<stdio.h>
int powr(int x,int y){
	int ans=1,i;
	for(i=0;i<y;i++)
	{
	ans=ans*x;
	}
	return ans;
}
int main()
{
	int i;
	int val;
	int v1,v2;
	char expr[50];
	scanf("%s",expr);
	while(1)
	{
		i=1;
		scanf("%d",&val);
        if(val==1000)
            break;
        if(expr[i-1]=='x'){
            v1=val;
        }
        else{
            v1=expr[i-1]-48;
        }
		while(expr[i]!='\0')
		{
            //printf("v1:%f\n",v1);
            if(expr[i+1]=='x'){
                v2=val;
            }
            else{
                v2=expr[i+1]-48;
            }
            //printf("v2:%f\n",v2);
			if(expr[i]=='^'){
				v1=powr(v1,v2);
			}
			else if(expr[i]=='+'){
				v1=v1+v2;
			}
			else if(expr[i]=='/'){
				v1=v1/v2;
                if((v1%v2)!=0)
                    v1++;
			}
			else if(expr[i]=='*'){
				v1=v1*v2;
			}
			else if(expr[i]=='-'){
				v1=v1-v2;
			}
			i=i+2;
            //printf("i:%d\n",i);
		}
		printf("%d\n",v1);	
	}
}
