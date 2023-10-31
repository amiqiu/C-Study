#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS 9+2
#define COLS 9+2

#define COUNT 10

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
void SetMine(char arr[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void FindMineStart(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
