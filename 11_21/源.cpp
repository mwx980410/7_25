#include <stdio.h>
#include <stdlib.h>
int main()
{
	//1. �����������α�����ֵ��������ֵ�����ݽ��н����� 
	/*int a=3;
	int b=5;
	int tmp=0;
	tmp=a;
	a=b;
	b=tmp;
	printf("a=%d b=%d",a,b);*/
	
//2. ����������ʱ���������������������ݣ������⣩ 
	/*int a=3;
	int b=5;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d",a,b);*/
	/*int a=3;
	int b=5;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d b=%d",a,b);*/
//3.��10 �����������ֵ��
	/*int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int max=arr[0];
	int i=0;
	for(i=1;i<10;i++)
	{*/
		/*if(max<arr[i])
			max=arr[i];*/
	/*max<arr[i]?(max=arr[i]):max;
	}
	printf("max=%d\n",max);*/
//4.�����������Ӵ�С����� 
	/*int a=1;
	int b=2;
	int c=3;
	int tmp;
	if(a<b)
	{	
		tmp=a;
	    a=b;
		b=tmp;
	}
	    
	if(a<c)
	{	
		tmp=a;
	    a=c;
		c=tmp;
	}
	if(b<c)
	{
		tmp=b;
		b=c;
		c=tmp;
	}
	printf("%d %d %d",a,b,c);*/
//5.�������������Լ����
	/*int a=25;
	int b=30;
	int tmp;
	while(a%b)
   { 
	   tmp=a%b;
		  a=b;
		  b=tmp;
	}
	if(a%b==0)
		printf("%d",tmp);*/
	/*int a=30;
	int b=25;
	while(a-b)
	{
       if(a>b)
		   a=a-b;
	   else
		   b=b-a;
	}
	printf("%d",a);*/
	//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
	/*int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={10,9,8,7,6,5,4,3,2,1};
	int tmp;
	int sz=sizeof(arr1)/sizeof(arr1[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		tmp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=tmp;
	}
	for(i=0;i<sz;i++)
	{
	  printf("%d ",arr1[i]);
	}
	printf("\n");
	for(i=0;i<sz;i++)
	{
	  printf("%d ",arr2[i]);
	}*/

//2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� 
   /* int i=0;
	int flag=1;
	double sum=0.0;
	for(i=1;i<=100;i++)
	{
     	sum=sum+1.0/i*flag;
		flag=-flag;
	}
	printf("%lf\n",sum);*/
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
     int i=0;
	int count=0;
	for(i=1;i<=100;i++)
	{
		if(i%10==9)
			count++;
		if(i/10==9)
			count++;
	}
	printf("%d\n",count);
	system("pause");
	return 0;
}


