#include<stdio.h>
#include<string.h>
void white () {
  printf("\033[0;37m");
}

void CountWorldInString( char str[100] ) {
    int count = 0, i;
 
    for (i = 0;str[i] != '\0';i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
            count++;    
    }

    printf("\n\tNumber of words in given string are: \033[1m%d\n\n", count + 1);
    white();
}
void SwapWordInString( char str[100] ) {
    char temp;
	int n;

	n = strlen(str);

	// revers

    printf("\n\t\tResult: ");
	printf("\n\tOutput String: \033[1m%s", strrev(str));
    white();
}
void Enter( char str[100 ]) {
    printf("\nEnter String: \033[0;35m");
	gets(str);
    white();
}
void Result( char str[100] ) {
    SwapWordInString(str);
    CountWorldInString(str);
}
int main() {
    int v;
    char str[100];
        Enter(str);
        SwapWordInString(str);
        CountWorldInString(str);
}