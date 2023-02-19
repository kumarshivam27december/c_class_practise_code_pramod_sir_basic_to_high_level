#include <stdio.h>
void main()
{
	char a;
	printf("\nENTER YOUR INPUT\t");
	scanf("%c",&a);
	if(a=='A'||a=='Q'||a=='Z'||
	a=='W'||a=='S'||a=='X'||a=='E'||
	a=='V'||a=='F'||a=='R'||a=='C'||a=='D'||
	a=='T'||a=='G'||a=='B'||a=='Y'||a=='H'||
	a=='N'||
	a=='U'||a=='J'||
	a=='M'||a=='I'||a=='K'||
	a=='P'||a=='O'||a=='L'){
		printf("\nIT IS UPPER CASE");
	}else if(a=='1'||a=='2'||a=='3'||a=='4'||
	a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0')
	{
	   printf("\nIT IS AN INTEGER");	
	}
	else if(
	a=='`'||
	a=='~'||
	a=='!'||
	a=='@'||
	a=='#'||
	a=='$'||
	a=='%'||
	a=='^'||
	a=='&'||
	a=='*'||
	a=='('||
	a==')'||
	a=='-'||
	a=='_'||
	a=='='||
	a=='+'||
	a=='['||
	a==']'||
	a=='{'||
	a=='}'||
	a=='|'||
	a=='"'||
	a==';'||
	a==':'||
	a=='/'||
	a=='.'||
	a==','||
	a=='?'||
	a=='>'||
	a=='<'
	)
	{
	printf("\nENTERED NUMBER IS A SYMBOL");	
	}
	else if(a=='q'||
	a=='w'||
	a=='e'||
	a=='r'||
	a=='t'||
	a=='y'||
	a=='u'||
	a=='i'||
	a=='o'||
	a=='p'||
	a=='a'||
	a=='s'||
	a=='d'||
	a=='f'||
	a=='g'||
	a=='h'||
	a=='j'||
	a=='k'||
	a=='l'||
	a=='z'||
	a=='x'||
	a=='c'||
	a=='v'||
	a=='b'||
	a=='n'||
	a=='m'
	)
	{
	printf("\nENTER CHARACTER IS LOWERCASE");
	
}
else{

		printf("\nENTER AN INVALID CHARACTER");
}
	
}
