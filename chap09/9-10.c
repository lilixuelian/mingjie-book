
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

    printf("�������ַ���:");

    scanf("%s",str);

    printf("���ַ���ȥ������Ϊ:");

    del_digit(str);

}

