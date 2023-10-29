#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EAZY_COUNT 80

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int GetMineCount(char mine[ROWS][COLS], int x, int y);

