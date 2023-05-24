#ifndef SHELL_H
#define SHELL_H

void print_prompt1(void);
void print_prompt2(void);

char *read_cmd(void);

#include "source.h"
int  parse_and_execute(struct source_s *src);

void initsh(void);

int dump(int argc, char **argv);


struct builtin_s
{
    char *name;    
    int (*func)(int argc, char **argv); 
};


extern struct builtin_s builtins[];


extern int builtins_count;

#endif
