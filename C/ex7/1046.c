#include<stdio.h>
#include<string.h>
#define MAX 80

int main(int argc, char const *argv[])
{
    int i = 0 ;
	int j = 0 ;
	int end = 0 ;
	int inext = 0 ;
	int EndStr = 0 ;
 
	char str1[MAX] ;
	char str2[MAX] ;
	char *pstr ;
 
	gets(str1) ;
	gets(str2) ;
	
	i = strlen(str1) ;
	j = strlen(str2) ;
 
	if(i >= j)
	{
		end = j - 1 ;     
		pstr = str1 ;
		EndStr = i - 1 ;      
	}
	else
	{
		end = i - 1 ;
		pstr = str2 ;
		EndStr = j - 1 ;
	}
 
	for( ; end >= 0  ; end-- ,i--,j-- ,EndStr--)
	{
				
		if(str1[i-1] + str2[j-1] + inext - '0' >= 58)                
		{
			pstr[EndStr] = str1[i-1] + str2[j-1] + inext - 58 ;      
			inext = 1 ;
		}
		else 
		{		
			pstr[EndStr] = str1[i-1] + str2[j-1] + inext - '0' ;    
			inext = 0 ;                                             
		}
	}
	
	if(1 == inext)                              
	{
		for(i = EndStr ; i >= 0 ; i--)
		{
		
			if(pstr[i] + inext  >= 58)
			{
				pstr[i] = pstr[i] + inext - 58 + '0' ;
				inext = 1 ;
			}
			else
			{
				pstr[i] = pstr[i] + 1  ;
				inext = 0 ;
				break ;
			}    
		}
		
		if(-1 == i)                             
		{			
			for(i = strlen(pstr) - 1 , end = i+1, pstr[i+2] = '/0' ; i >= 0 ; i--)     
			{
				pstr[i+1] = pstr[i] ;
			}
			pstr[0] = '1' ;	                                                 
			pstr[end+1] = '\0' ;    //结束
		}		
	}
 
	puts(pstr) ;
    
    return 0;
}
