#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limts.h>
#include <fcntl.h>
#include <errno.h>

/* read/write buffers*/
#defiine READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE1024
#defunebuf_flush -1

/* cmd chaining */
#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

#endif
