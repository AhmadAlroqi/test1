#ifndef INSTRUCTION_H
#define INSTRUCTION_H

typedef struct {
    int J;
    int C;
    int D1;
    int D0;
    int Sreg;
    int S;
    int imm;
    int imm1;
    char binary[9];
} Instruction;

void decodeInstruction(Instruction *inst);
void executeInstruction(Instruction *inst, int *RA, int *RB, int *RO, int *pc, int *carry);
void decoder(char *buffer[], int pc_counter); 
void print_instruction(char *buffer[], int pc_counter);

#endif
