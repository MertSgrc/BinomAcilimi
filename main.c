#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ndegeri;
 printf("Binom Acilimi (n) degerini giriniz:");
 scanf("%d", &ndegeri);
 int nBinomAcilimi[ndegeri+1][ndegeri+1];
 int i,j;
 for (i=0;i<ndegeri+1; i++)
 {
  nBinomAcilimi[i][i]=0;
  nBinomAcilimi[i][0]=1;
 }
 for (i=0;i<ndegeri+1;i++)
  for (j=1;j<ndegeri+1;j++)
   nBinomAcilimi[i][j]=0;
 for (i=1;i<ndegeri+1;i++)
 {
  for (j=1;j<ndegeri+1;j++)
  {
   nBinomAcilimi[i][j] = 0;
   nBinomAcilimi[i][j] = nBinomAcilimi[i-1][j-1]+nBinomAcilimi[i-1][j];
  }
 }
 for (i=0;i<ndegeri+1;i++)
 {
  for (j=0;j<ndegeri+1;j++)
  {
   if (nBinomAcilimi[i][j]!=0)
    printf("%d ", nBinomAcilimi[i][j]);
  }
  printf("\n");
  printf("\n");
 }
 int x=ndegeri;
 int y=0;
 for (j=0;j<ndegeri+1;j++)
 {
  if (nBinomAcilimi[ndegeri][j]!=0)
  {
   if (nBinomAcilimi[ndegeri][j]==1)
   {
    if (x!=0)
     printf("x%d ",x);
    else
     printf(" + y%d",y);
   }
   else
   {
    if (x==1)
     printf(" + x.y%d ", y);
    else if (y==1)
     printf(" + x%d.y ", x);
    else
     printf(" + x%d.y%d ", x,y);
   }
  }
  x--;
  y++;
 }
 printf("\n");
 printf("\n");
 system("PAUSE");
 
 
 return EXIT_SUCCESS;
}
