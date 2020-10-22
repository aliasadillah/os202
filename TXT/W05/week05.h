/*
 * START Mon Oct 19 22:08:35 WIB 2020
 * Replace "cbkadal" in SHARED with your GitHub account.
 */

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define CHMOD          0666
#define MYFLAGS        O_CREAT|O_RDWR
#define MYPROTECTION   PROT_READ|PROT_WRITE
#define MYVISIBILITY   MAP_SHARED
#define SHARED         "ZCZC W05 aliasadillah\n"
#define SHAREMEM       "myW05.txt"
typedef unsigned char* CHPTR;

