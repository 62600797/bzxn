#include<stdio.h>
#include<string.h>
//比较两个数组,将ascll码一样或者大于的放到第三个数组
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
