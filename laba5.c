#include <stdio.h>
 int main() {
/*int v;    //12  выводит прост.числа в А
int A[100]; 
int i=0;
int s,n,a;
scanf("%d", &v);
for (i=0,a=2; a<v; a++){
        for (s=0,n=2; n<a; n++)
                if (a%n==0) { s=1; break; }
        if (s==0) A[i++]=a;
        }
A[i]=0;
for(int j=0;A[j]!=0;j++){
    printf("%d ", A[j]);
      }      */

/* int j,i,m; //13 ищет простые числа в А и записывает в В
int n=5;
int A[n];
int B[j];
for(i=0;i<n;i++){
    scanf("%d",&A[i]);}
for (j=0,i=0; i<n ; i++){
        for (m=2; m<A[i]; m++)
           { if (A[i]%m==0) break; }
        if (m==A[i]) B[j++]=A[i];}
B[j]=0;
for(i=0;i<n;i++){
    printf("%d ",A[i]);
}
printf("\n");
for(j=0;B[j]!=0;j++){
    printf("%d ", B[j]);
}
printf("\n");   */

/*int j,i,m,s; //14 ищет простые числа в А и записывает в В
int n=5;
int A[n];
int B[j];
for(i=0;i<n;i++){
    scanf("%d",&A[i]);}
for (j=0,i=0; i<n ; i++){
        for (s=0,m=2; m<A[i]; m++)
           if (A[i]%m==0) { s=1; break; }
        if (s==0) B[j++]=A[i];
        }
B[j]=0;
for(i=0;i<n;i++){
    printf("%d ",A[i]);
}
printf("\n");
for(j=0;B[j]!=0;j++){
    printf("%d ", B[j]);
}
printf("\n"); */


/*int j,i,m;   //15 тока прост числ.
int n=12;
int A[n];
for(i=0;i<n;i++){
    scanf("%d",&A[i]);}
for (i=0; i<n ; i++){
        for (m=2; m<A[i]; m++)
           { if (A[i]%m==0) break; }
        if (m==A[i]) {
                for (j=i; j<n-1;j++) A[j]=A[j+1];
                n--;
                i--;            
                }}
for(int j=0;j<n;j++){
    printf("%d ", A[j]);
      } */


/*int j,i,m,s; //16 выводит все кроме прост.ч.
int n=12;
int A[n];
for(i=0;i<n;i++){
    scanf("%d",&A[i]);}
for (j=0,i=0; i<n ; i++){
        for (s=0,m=2; m<A[i]; m++)
           if (A[i]%m==0) { s=1; break; }
        if (s==0) {
                for (j=i; j<n-1;j++) A[j]=A[j+1];
                n--;
                i--;            
                }}
for(int j=0;j<n;j++){
    printf("%d ", A[j]);
} */

/*int n=10; //17 ищет делители числа
int A[n];
int i,m;
int val=27;
for (i=0; i<n-1 && val !=1; i++){
        for (m=2; val % m !=0; m++);
        val /= m; A[i] = m;
        }
A[i] = 0;
for(int j=0;A[j]!=0;j++){
    printf("%d ", A[j]);
}*/

/*int i,s; //18 ищет НОД
int n=6;
int v;
int A[n];
for(i=0;i<n;i++){
    scanf("%d",&A[i]);}
v=A[0]+1;
do      {
        v--;
        for (i=0,s=0;i<n;i++)
                if (A[i]%v!=0) { s=1; break; }
        } while(s==1);
printf("%d ", v);*/
}