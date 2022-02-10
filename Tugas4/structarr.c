#include <stdio.h>

struct mahasiswa
{
    char name[40];
    int nim;
    int kehadiran;
};

struct mahasiswa kls[10] = {{"agung",132001,100},{"jean",132003,97},{"kiana",132005,77},
{"siska",132007,56},{"kanna",132009,84},{"hasan",132011,80},
{"kus",132013,89},{"nana",132015,91},{"jeki",132017,95},{"alice",132777,0}};

void show(struct mahasiswa *kls, int i)
{
    printf("Nama: %s\nNIM: %d\nKehadiran: %d%%\n", kls[i].name, kls[i].nim, kls[i].kehadiran);
}

void main()
{
    int i = 0;
    for (i=0;i<10;i++)
    {
        if (kls[i].kehadiran <80)
        {
            show(&kls, i);
        }
    }
}