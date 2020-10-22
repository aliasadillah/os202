/*
 * Copyright (C) 2020-2020 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: Week05
 * START: Mon Oct 19 21:45:06 WIB 2020
 *
 * Direction:
 * Replace "cbkadal" with your "GitHub account".
 * Compile (make) it.
 * Copy the output to "TXT/myW05.txt"
 */

#include "week05.h"

int main(void) {
    int      ssize = sizeof(SHARED);
    int      fd    = open(SHAREMEM, MYFLAGS, CHMOD);
    fchmod   (fd, CHMOD);
    ftruncate(fd, ssize);
    CHPTR    mymap = mmap(NULL, ssize, MYPROTECTION, MYVISIBILITY, fd, 0);
    strcpy  (mymap, SHARED);
    close(fd);
}

