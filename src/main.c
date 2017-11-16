#include <stdio.h>

int main() {
  int a[5];
  int n;
  int i; //Auxiliar para contagem das iterações
  int r0, r1, r2, r3, r4; //Restos das divisões

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=1; i<=n; i++) {
    r0 = i % a[0];
    if (r0 == 0){
      printf ("0");
    }
    r1 = i % a[1];
    if (r1 == 0){
      printf ("1");
    }
    r2 = i % a[2];
    if (r2 == 0){
      printf ("2");
    }
    r3 = i % a[3];
    if (r3 == 0){
      printf ("3");
    }
    r4 = i % a[4];
    if (r4 == 0){
      printf ("4");
    }
    if (r0 != 0 && r1 != 0 && r2 != 0 && r3 != 0 && r4 != 0){
      printf ("-");
    }
    printf ("\n");
  }

  return 0;
}
