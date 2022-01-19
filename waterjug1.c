#include <stdio.h>
int min(int a, int b) {
int result;
if (a < b) {
result = a;
}
else {
result = b;
}
return result;
};
void tuang35(int *a, int *b) {
int minWater;
minWater = min(*a, 5-(*b));
*a -= minWater;
*b += minWater;
};
void tuang53(int *a, int *b) {
int minWater;
minWater = min (3-(*a), *b);
*a += minWater;
*b -= minWater;
};
int main () {
int finish = 0;
int jugA = 0; int jugB = 0;
int pilihan = 0;
printf("13220053 - Radithya Arisaputra"
"\nWater jug");
while (finish == 0)
{
printf(
"\nProgram akan berakhir bila didalam ceret terdapat 4 liter air");
printf("\nCeret 3 liter: %d          Ceret 5 liter: %d", jugA, jugB);
printf(
"\n1. Isi ceret 3 liter"
"\n2. Isi ceret 5 liter"
"\n3. Tuang ceret 3 liter ke ceret 5 liter"
"\n4. Tuang ceret 5 liter ke ceret 3 liter"
"\n5. Kosongkan ceret 3 liter"
"\n6. Kosongkan ceret 5 liter"
"\nMasukkan pilihan anda (Asumsi input pengguna merupakan integer): ");
scanf("%d", &pilihan);
switch(pilihan) {
    case 1 :
    jugA = 3;
    break;
    case 2 :
    jugB = 5;
    break;
    case 3 :
    tuang35(&jugA, &jugB);
    break;
    case 4 :
    tuang53(&jugA, &jugB);
    break;
    case 5 :
    jugA = 0;
    break;
    case 6 :
    jugB = 0;
    break;
    default:
    printf("\nInvalid input\n");
};
if (jugA == 4 || jugB == 4) {
    finish = 1;
};
};
return 0;
};