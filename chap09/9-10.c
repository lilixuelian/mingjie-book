
#include <stdio.h>

#define NUMBER 128

 

void del_digit(char s[])

{

    int i=0;

    while(s[i]!='\0')

    {

        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))

        {

            putchar(s[i]);

        }

        i++;

    }

 

}

 

int main(void)

{

    char str[NUMBER];

    printf("ÇëÊäÈë×Ö·û´®:");

    scanf("%s",str);

    printf("¸Ã×Ö·û´®È¥µôÊý×ÖÎª:");

    del_digit(str);

}

