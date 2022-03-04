#include "stdafx.h"
#define BUF_SIZE 256

void init(void); //===============================================================================
void promptUser(bool isBatch); //===============================================================================
void printError(void); //===============================================================================
int parseInput(char* input, char* splitWords[BUF_SIZE]); //===============================================================================
char* redirectCommand(char* special, char* line, bool* isRedirect, char* tokens[BUF_SIZE], char* outputTokens[BUF_SIZE]);
char* executeCommand(char* cmd, bool* isRedirect, char* tokens[BUF_SIZE], char* outputTokens[BUF_SIZE],  bool* isExits);
char getLetter(char* str, int index); //===============================================================================
bool exitProgram(char* tokens[BUF_SIZE], int numTokens);
void launchProcesses(char* tokens[BUF_SIZE], int numTokens, bool isRedirect);
void changeDirectories(char* tokens[BUF_SIZE], int numTokens); //===============================================================================
void getHelp(char* tokens[BUF_SIZE], int numTokens);
int parseCommand(char* command, char* parameters[BUF_SIZE]);
int readCommands(char* command, char* parameters[BUF_SIZE], FILE* in); //parse commands /args
void removeChars(char* str, char c);
//new read commands i.e. determine

//implement:
//exit
//cd
//help
























//void alloc(char* buffer, int rows);
//void alloc2D(char* buffer[], int rows, int cols);
//void dealloc(char* buffer);
//void dealloc2D(char* buffer[], int rows);
//void alloc(char* buffer, int cols)
//{
//    buffer = (char*)malloc(cols * sizeof(char));
//}
//
//void alloc2D(char* buffer[], int rows, int cols)
//{
//    //alloc(buffer, rows);
//    buffer = (char**)malloc(rows * sizeof(char*));
//    for(int i = 0; i < rows; i++)
//    {
//        buffer[i] = (char*)malloc(cols * sizeof(char));
//    }
//}
//
//void dealloc(char* buffer)
//{
//    free(buffer);
//}
//
//void dealloc2D(char* buffer[], int rows)
//{
//    for(int i = 0; i < rows; i++)
//    {
//        free(buffer[i]);
//    }
//    //dealloc(buffer);
//    free(buffer);
//}