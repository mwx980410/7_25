//1.#define _CRT_SECURE_NO_WARNINGS
//实现一个函数，可以左旋字符串中的k个字符
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
//void reverse(char*left,char*right)
//{
//	assert(left&&right);
//	while(left<right)
//	{
//		char tmp=*left;
//		*left=*right;
//		*right=tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void left_move(char arr[],int k)
//{ 
//	int len =strlen(arr);
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//}
//int main()
//{
//	char arr[]="abcd";
//	left_move(arr,2);
//	printf("%s\n",arr);
//	system("pause");
//	return 0;
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int is_left_move(char*str1,char* str2)
//{
//	int len1=strlen(str1);
//	int len2=strlen(str2);
//	if(len1!=len2)
//		return 0;
//	strncat(str1,str2,len1);
//	if(strstr(str1,str2)==NULL)
//		return 0;
//	else 
//		return 1;
//}
//int main()
//{
//	char arr1[20]="abcdef";
//	char arr2[]="cdefab";
//	if(is_left_move(arr1,arr2)==1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	system("pause");
//	return 0;
//}
//3.一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。 
//找出这两个数字，编程实现。 
//#include<stdio.h>
//#include<stdlib.h>
//
//void find_two_diff_num(int arr[],int sz,int*p1,int*p2)
//{
//    int ret=0;
//	int pos=0;
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//	   ret^=arr[i];
//	 
//	}
//	for(i=0;i<32;i++)
//	{
//	   pos=i;
//	   break;
//	}
//	for(i=0;i<sz;i++)
//	{
//	   if(((arr[i]>>pos)&1)==1)
//		   *p1^=arr[i];
//	}
//	*p2=*p1^ret;
//}
//int main()
//{
//	int arr[]={1,1,3,3,5,5,6,9};
//
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int num1=0;
//	int num2=0;
//	find_two_diff_num(arr,sz,&num1,&num2);
//	printf("num1=%d num=%d",num1,num2);
//	system("pause");
//	return 0;
//}
// 4.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
//给20元，可以多少汽水。 
//编程实现。  
//#include<stdio.h>
//#include<stdlib.h>
//int  main()
//{
//   int total=0;
//   int empty=0;
//   int money=0;
//   scanf("%d",&money);
//  /* if(money>0)
//	   total=money*2-1;
//   else
//	   total=0;*/
//   total+=money;
//   empty=money;
//   while(empty>=2)
//   {
//	   total+=empty/2;
//	   empty=empty/2+empty%2;
//   }
//   printf("%d\n",total);
//   system("pause");
//   return 0;
//}
//5.模拟实现strcpy 
//#include <stdio.h>
//#include<stdlib.h>
//char *my_copy(char *dest, const char *str)
//{
//	char *ret=dest;  //将目的指针保留，因为执行完下面的语句，目的指针dest已经指向字符串末尾
//	while(*dest++ = *str++)  //只要原字符串中字符不为\0,完成复制
//		;
//		return ret;
//}
//int main()
//{
//	char arr1[64];
//	char arr2[]="hello world";
//	my_copy(arr1, arr2);
//	printf("%s\n",arr1);
//	system("pause");
//	return 0;
//}
//6.模拟实现strcat 
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//char*my_strcat(char*dest, const char*src)
//{
//	assert(dest != NULL);    //断言，保证dest不为空
//	char *start = dest;
//	while (*dest)
//		dest++;
//	while (*dest++ = *src++)
//		;
//	return start;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	//char*p = "world!";
//	char*tmp=my_strcat(arr, p);
//	printf("%s\n",tmp);
//	system("pause");
//	return 0;
//}
//7.实现strcpy 
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//char* my_strcpy(char* dest,const char *src)
//{
//	char* ret = dest;
//  assert(dest != NULL);
//	assert(src != NULL);
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10] = {0};
//	printf("%s\n",my_strcpy(arr2,arr1));
//	system("pause");
//	return 0;
//}
//8.实现strcat 
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//char* my_strcat(char* arr1,const char* arr2)
//{
//	char *ret = arr1;
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while(*arr1 != '\0')
//	{
//		*arr1++;
//	}
//	while(*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = " bit";
//	printf("%s\n",my_strcat(arr1,arr2));
//	system("pause");
//	return 0;
//}
//9.实现strstr 
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//char* my_strstr(const char*str1,const char*str2)
//{
//	const char *s1 = str1;
//	const char *s2 = str2;
//    const char *cp = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	if(*str2 == '\0')
//		return (char*)str1;
//
//	while(*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		
//        while(*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//			return (char *)cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char *p1 = "bbc";
//	char *p2 = "abbcdef";
//	char *ret = my_strstr(p2,p1);
//	printf("%s\n",ret);
//	system("pause");
//	return 0;
//}
//10.实现strchr 
//#include<stdio.h>
//#include<stdlib.h>
//char* my_strchr(char* s,char c)
//{
//	while(*s != '\0' && *s != 'c')
//	{
//		s++;
//	}
//	return *s == c?s:NULL;
//}
//int main()
//{
//	char* arr = "abcdefg";
//	
//	int ret =(int) my_strchr(arr,'c');
//	printf("%s\n",ret);
//	system("pause");
//	return 0;
//}
//11.实现strcmp 
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//   while(*str1 == *str2)
//   {
//	   if(*str1 == '\0')
//	   {
//		   return 0;
//	   }
//	   str1++;
//	   str2++;
//   }
//   return *str1 - *str2;
//}
//int main()
//{
//	int ret = my_strcmp("abcdef","abc");
//	printf("%d",ret);
//	system("pause");
//}
//12.实现memcpy 
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<string.h>
//void* my_memcpy(void* dest,void* src ,int count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest=(char*)dest+1;
//		src=(char*)src+1;
//	}
//	return ret;
//}
//int main()
//{
//    char str[]="123456";
//    char arr[6];
//    char *ps = NULL;
//    char *pp = NULL; 
//    ps =(char*) my_memcpy(arr,str,2);
//    pp =(char*) memcpy(arr,str,2);
//    printf("my_memcpy :%s\n",pp);
//    printf("memcpy :%s\n",ps);
//	system("pause");
//    return 0;
//}
//13.实现memmove
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#include<stdlib.h>
//void *my_memmove ( void *det ,const char *src ,size_t count)
//{
//    void *ret = det;
//    assert(det);
//    assert(src);
//
//    if(det <= src || ((char*)det) >= ((char*)src + count))
//    {
//        while(count--)
//        {
//           *(char *)det = *(char*)src ;
//           det = (char*)det + 1;
//           src = (char*)src + 1;
//        }
//    }
//    else
//    {
//           det = (char*)det + count - 1;
//           src = (char*)src + count - 1;
//        while(count--)
//        {
//           *(char *)det = *(char*)src ;
//           det = (char*)det - 1;
//           src = (char*)src - 1;
//        }
//    }
//    return ret;
//}
//
//int main()
//{
//    char str[]="1234abc886";
//    char arr[20] = " ";
//    char *pp = NULL; 
//    *arr =(char) str + 4;
//    pp =(char*) my_memmove(arr,str,7);
//    printf("my_memmove :%s\n",pp);
//	system("pause");
//    return 0;
//}
//
//14.模拟实现strncpy
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//char* my_strncpy(char *des,const char *src,int count)
//{
// char *cp=des;
// assert(src && des);
// while(count && (*des++=*src++))
// {
//   count--;
// }
// if(count>0)
// {
//     while(--count)
//     {
//       *des++='\0';
//     }
// }
// return cp;
//}
//
//int main()
//{
//   char string[80]={0};
//   int len=strlen("hello");
//   printf( "String = %s\n", my_strncpy(string,"Hello",len));
//   system("pause");
//   return 0;
//}
//15.模拟实现strncat 
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//char* my_strncat(char *des,const char *src,size_t count)
//{
// char *cp=des;
// assert(src && des);
// while(*des!='\0')
// {
//  *des++;
// }
// while(count && *src)
// {
//  *des++=*src++;
//  count--;
// }
// *des='\0';
// return cp;
//}
//
//int main()  
//{  
//    char arr[20] = "hello";  
//    int len = strlen(arr);  
//    char *ret = my_strncat(arr,arr, len);  
//    printf("%s", ret);  
//    system("pause");  
//    return 0;  
//}  
//16.模拟实现strncmp
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int my_strncmp(const char *arr1,const char *arr2,int count)
{
  assert(arr1 && arr2);
  while(count && (*arr1==*arr2))
  {
    if(arr1=='\0')
     return 0;
    arr1++;
    arr2++;
    count--;
  }
  return *arr1-*arr2;
}

int main(void)
{
    char *arr1 = "abcd";
    char *arr2 = "abcde";
    int len=strlen(arr1);
    int ret= my_strncmp(arr1, arr2,len);
    printf("%d\n",ret);
    system("pause");
}