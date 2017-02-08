#include <stdio.h>
#include <string.h>

void Reverse(char s[],unsigned int len)

{

    for(int i = 0, j = len - 1; i < j; ++i, --j) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

}
 
char* resver(char *str, unsigned int len)
{
    char *p = str;
	char tmp;

	for(int i=0; i<len/2; i++)
	{
		tmp = *(str+i);
		printf("step%d. [%d]->%c,[%d]->%c\r\n",i,i,*(str+len-i-1),len-i-1,tmp);
		*(str+i) = *(str+len-i-1);
		*(str+len-i-1) = tmp;
	}
	
	return p;
}

int main(void) { 
    char message[] = "Hello123456789";
    printf("%s,lenth = %ld\r\n",message,strlen(message));
    
    //Reverse(message,strlen(message));
    printf("%s,lenth = %ld\r\n",resver(message,strlen(message)),strlen(message));
    return 0;
}
