#include <conio.h> 
#include <stdio.h> 
#include <string.h> 
int main(void) 
{ 
const int NUMBER_WORDS = 10; 
const int LENTH_WORD = 20; 
char MasWords[NUMBER_WORDS][LENTH_WORD], Str[LENTH_WORD]; 
int i, j; 
printf("\tEnter array from words\n"); 
for( i = 0; i < NUMBER_WORDS; i++)
{ 
    gets(MasWords[i]); 
} 
//clrscr(); 
printf("\tSource array from words\n"); 
for( i = 0; i < NUMBER_WORDS; i++) 
{ 
printf(" %d%15s\n",(i + 1),MasWords[i]); 
} 
for( i = 0; i < NUMBER_WORDS; i ++) 
{ 
for( j = NUMBER_WORDS - 1; j > i; j --) 
{ 
if (stricmp(MasWords[j],MasWords[j-1])<0) 
{ 
strcpy(Str,MasWords [j]); 
strcpy(MasWords[j],MasWords[j-1]); 
strcpy(MasWords[j-1],Str); 
} 
} 
} 
printf("\tSelected array from words\n"); 
for( i = 0; i < NUMBER_WORDS; i ++) 
{ 
printf("%d%15s\n",(i + 1),MasWords[i]); 
} 
printf("\nPress any key to exit..."); 
//getch(); 
return 0; 
}
