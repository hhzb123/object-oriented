#include<stdio.h>
int main()
{int a,b,sum,x[200],i,j,pan=0,cai=0;
	scanf("%d%d",&a,&b);
 		sum=a+b;
 		if(sum<0){
 			pan++;
 			sum=-sum;
 		}
 		if(sum<1000)
 		cai++;
 		if(cai==0){
 		
 			for(i=1;;i++){
 				x[i]=sum-sum/1000*1000;
 				sum=sum/1000;
 				if(sum<1000) {
 					i++;
 					x[i]=sum;
 					break;
 				}
 			}
 			for(j=i;j>=1;j--)
 			{if(pan==1&&j==i) printf("-");
			 if(j==i) printf("%d",x[j]);
			 if(x[j]>=100&&j!=i)
			 printf("%d",x[j]);
			 else if(x[j]<10&&j!=i ) 
			  printf("00%d",x[j]);
			  else if(x[j]>=10&&j!=i)
			  printf("0%d",x[j]);
 			if(j!=1) printf(",");
 			}
} 
else if(cai!=0&&pan==0)
printf("%d",sum);
else if(cai!=0&&pan==1)
printf("-%d",sum);
}
