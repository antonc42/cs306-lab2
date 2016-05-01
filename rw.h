/* This is the header file to be used for your lab2 assignment. */


#ifndef RW_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>

#define FALSE 0
#define TRUE  1

/* DO NOT REDUCE THE VALUE of SIZE. You can increase it, however. */
#define SIZE  100		

/* DO NOT REDUCE THE VALUES of WRITE_ITR or READ_ITR. You can increase them, however. */
#define WRITE_ITR 100000
#define READ_ITR  100000

#define MAX_BALANCE 1000000

/* DO NOT CHANGE THE FOLLOWING STRUCT DEFINITION */
/* global variables */
typedef struct {
        int accno;
        float balance;
} account;

#endif
