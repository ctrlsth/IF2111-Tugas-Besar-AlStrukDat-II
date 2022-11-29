#ifndef towerOfHanoi_H
#define towerOfHanoi_H

#include <stdio.h>
#include "boolean.h"
#include "../src/ADT/stack.h"


void piringan(Stack S, int x, int wmax);

void showTiang(Stack S1, Stack S2, Stack S3);

boolean finalGame(Stack S);

void proceedTiang(Stack *S1, Stack *S2);

void towerOfHanoi();

#endif
