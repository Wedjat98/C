#include<stdio.h> 
    void main() 
    { 
    	int a=0,b=0,c=0,d=0,e=0,i=0; 
    	char *p,s[20]; 
    	while((s[i]=getchar())!='\n')i++; 
   	 	p=s; 
   		 while(*p!=10) 
    	{ 
   			 if(*p>='A'&&*p<='Z') 
    		a++; 
    		else if(*p>='a'&&*p<='z') 
    			b++; 
    		else if(*p==' ') 
    			c++; 
   		    else if(*p>='0'&&*p<='9') 
    			d++; 
    		else e++; 
    		p++; 
    } 
    printf("大文字 %d 小文字 %d\n",a,b); 
    printf("スペース %d 数字 %d 文字ではない %d\n",c,d,e);
 }