#include<stdio.h>
int main() {
FILE*fp;
int ch;
clrscr();
fp=fopen("text.txt","w");
if(fp==NULL) {
printf("Error opening file!\n");
return 1;
}
fprintf(fp,"Welcome to C\n");
fprintf(fp,"A language which is used to communicate with the electronic device\n");
fprintf(fp,"It has machine,assembly,and high level languages\n");
fprintf(fp,"A C program commonly contains a header file,the main() funcion,declarations,executable statements,and a return statement\n");
fprintf(fp,"It is translated into an executable program through several toolchain stages\n");
fclose(fp);
fp=fopen("text.txt","a");
if(fp==NULL) {
printf("Error opening file!\n");
return 1;
}
fprintf(fp,"My C program trainer explains the concept of C fairly well\n");
fprintf(fp,"Encourages students to practise coding\n");
fprintf(fp,"Covers the important topics in the syllabus\n");
fprintf(fp,"Provides useful examples during teaching\n");
fprintf(fp,"Maintains a friendly and supportive classroom environment\n");
fclose(fp);
fp=fopen("text.txt","r");
if(fp==NULL) {
printf("Error opening file!\n");
return 1;
}
printf("\nC Program Feedback:\n");
while((ch=fgetc(fp))!=EOF) {
printf("%c",ch);
}
fclose(fp);
getch();
return 0;
}