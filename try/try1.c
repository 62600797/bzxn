#include<stdio.h>
#include<string.h>
//�Ƚ���������,��ascll��һ�����ߴ��ڵķŵ�����������
  void fun(char *a,char *b,char *c)
  {
  	int i,ls1,ls2;
  	ls1=strlen(a);
  	ls2=strlen(b);
  	for(i=0;i<(ls1>ls2?ls2:ls1);i++)
  		c[i]=(a[i]>b[i]?a[i]:b[i]);
  	for(i=(ls1>ls2?ls2:ls1);i<(ls1>ls2?ls1:ls2);i++){
  		if(ls1>ls2)
  			c[i]=a[i];
  		else
  			c[i]=b[i];
	c[i]='\0';
	  }
   }
  int main()
  {char s1[80],s2[80],s3[80];
   gets(s1);
   gets(s2);
   fun(s1,s2,s3);
   puts(s3);
  }
