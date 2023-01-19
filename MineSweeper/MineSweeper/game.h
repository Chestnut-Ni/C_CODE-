#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10//设置雷有几个


void InitBoard(char board[ROWS][COLS],int row,int cool,char set);
void PrintBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char mine[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
int get_mine_count(char mine[ROWS][COLS],int row,int col);