#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char aFilename[1024];
	char aLine[1024];
	int aInt[1024]; 
	
	FILE* fp; 
	int i,j,k = 0;
	int iNum = 0;
	
	printf("Input filename: ");
	scanf("%s", aFilename);
	
	fp = fopen(aFilename, "r");
	
	char *s1;
	while(fgets(aLine, 1024, fp)){
	    i++;
	    if(aLine[0]>='0'&&aLine[0]<='9'){
	        s1 = &aLine[0];
	        aInt[j] = atoi(s1);
	        j++;
	    }
    }
    
	iNum = i-1; 
	
	int min = aInt[0];
	
	for(i=0 ; i <iNum-1; i++){
	   if(min>aInt[i]){
	        min = aInt[i];
	   }else{
	        min = min;
	   }
	}
	
	printf("The smallest number is %d", min);
	return 0;
}
