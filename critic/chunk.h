#ifndef CRITIC_CHUNK_H
#define CRITIC_CHUNK_H

#include "common.h"


//dynamic array
typedef struct{

int count;
int capacity;
uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk,uint8_t byte);

typedef enum{
OP_RETURN,
}OpCode;


#endif
