/**
 * Simple conio for E:
 */

#include <atari.h>
#include <string.h>
#include "cio.h"

void print(const char* c)
{
  int l=strlen(c);

  OS.iocb[0].buffer=c;
  OS.iocb[0].buflen=l;
  OS.iocb[0].command=IOCB_PUTCHR;
  ciov(0);
}

void get_line(char* buf, unsigned char len)
{
  OS.iocb[0].buffer=buf;
  OS.iocb[0].buflen=len;
  OS.iocb[0].command=5;
  ciov(0);
}
