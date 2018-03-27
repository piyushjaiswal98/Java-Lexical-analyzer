%{ 
#include<stdio.h>
#include<stdlib.h> 
%} 
%% 

"auto"|"class"|"public"|"break"|"System.out.println"|"main"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|
" enum"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"register"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|
"typed ef"|"union"|"unsigned"|"void"|"volatile"|"while"|"abstract"|"package"|"assert"|"private"|"this"|"boolean"|"implements"|
"sync hronised"|"native"|"super"|"strictfp"|"try"|"throw"|"catch"|"private"|"protected"

 printf("--------------------------\nAnalysed: %s \nToken: KEYWORD\n",yytext);   
 [a-zA-Z]+ printf("--------------------------\nAnalysed: %s \nToken: IDENTIFIER \n",yytext); 
 [0-90.0-9.0]*printf("--------------------------\nAnalysed: %s \nToken: NUMBER \n",yytext); 
 

"+"|"-"|"="|"/"|"<"|">"|"<="|">="  printf("--------------------------\nAnalysed: %s \nToken: OPERATOR \n",yytext); 
","|";"|")"|"("|"/n"|"/t"|"{"|"}"|"["|"]"     printf("--------------------------\nAnalysed: %s \nToken: SEPARATOR \n",yytext); 
\"(\\.|[^"])*\"  printf("--------------------------\nAnalysed: %s \nToken: LITERAL \n",yytext); 

%% 

int main(int ac,char **av) {  
FILE    *fd;  
if (ac == 2)     
{         
if (!(fd = fopen(av[1], "r")))         
{             
perror("Error: ");             
return (-1);         
}         

yyset_in(fd);         
yylex();         
fclose(fd);     
}     

else         
	printf("Usage: a.out filename\n");     

return (0); //yylex(); //return 0; } int yywrap() {  

}
