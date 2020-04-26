#include <stdio.h>
#include <string.h>

int col,row;

int getRow(char[], int);
int search(char[], char[]);
int searchRight(char[], int, char[]);
int searchBottom(char[], int, char[]);

int main() {

 char str[50];
 char s[25];
 char puzzle[25][25];
 int i,j,temp=0;

 printf("Enter the puzzle string: ");
 scanf("%s",str);
 printf("Enter the search word: ");
 scanf("%s",s);
 printf("Enter the column size: ");
 scanf("%d",&col);
 
 row = getRow(str,col);

 printf("\nstring:\n\n"); 

 for(i=0; i<row; i++){
  for(j=0; j<col; j++) {
   printf("%c",str[temp++]);
  }
 printf("\n");
 }
 
 printf("\n");
 
 if(!search(str,s))
  printf("-1");

 return 0;
}

int search(char string[], char sub[]) {
 int l = strlen(sub);
 int len = strlen(string);
 int i = 0, index;
 while(i+l <= len) {
  if(string[i] == sub[0])
   if( col-(i%col) >= l && searchRight(string,i,sub)) return 1;
   else if( row-((i/col)%row) >= l && searchBottom(string,i,sub)) return 1;
   else i++;
  else i++;
 }
 return 0;
}

int searchRight(char str[], int index, char s[]) {
 int temp, i;
 int l = strlen(s);
 for(temp=0,i=index; temp<l; temp++, i++)
  if(str[i]==s[temp])
   continue;
  else
   return 0;
 i--;
 printf("%d,%d\n",(index/col),(index%col));
 printf("%d,%d\n",(i/col),(i%col));
}

int searchBottom(char str[], int index, char s[]) {
 int temp, i;
 int l = strlen(s);
 for(temp = 0, i = index; temp < l; temp++, i+=col)
  if(str[i] == s[temp])
   continue;
  else
   return 0;
 i-=col;
 printf("%d,%d\n",(index/col),(index%col));
 printf("%d,%d\n",(i/col),(i%col));
}

int getRow(char str[], int c) {
 int len = strlen(str);
 return (len/c)+((len%c==0)?0:1);
}