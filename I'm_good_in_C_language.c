// Me: I'm good in C language.
// Interviewer: Then write "Hello World" using C.
// Me:
#include <stdio.h>
#define P printf
#define p(c) P("%c",c);
#define b p(' ')
#define n p('\n')
char X[]="BPAAP BAAAB.BAAABDPMAABABAAAB"
"RBAAABIBPPPPOBPPAOLBBBAB FBPAB2LBIAB0B"
"BEAB1BBCAB7BPBPO.";int main(){int k,j,i
,c;char*C=X,*x=C+6;for(k=0;k<016;k++){if
(k%7==0){n n}for(j=0;j<5;j++){c=*C++-'A'
+16;for(i=040;i;i>>=1)p(c&i?'C':' ')b b}
if(k>=2){if(k<=6)*(x-6)=*C;*x++=*C;}C++;
n}n n*x=0;P("%s",X);n}
