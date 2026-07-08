// This program calculates mathematical 
// expressions given in reverse polish notation
// The operands must be single-digit integers

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 100

int stack[MAX_STACK];
int stack_size;

void push(int n);
int pop();
int evaluate_rpn();
void process_token(char token);

int main() {

        do {
                stack_size = 0;
                printf("Enter an RPN expression: ");
                int res = evaluate_rpn();
                printf("Value of expression: %d\n", res);
        } while (1);
}

void push(int n)  {
        if (stack_size == MAX_STACK) {
                printf("Expression is too complex\n");
                exit(1);
        }
        stack[stack_size++] = n;
}

int pop() {
        if (stack_size == 0) {
                printf("Not enough operands in expression\n");
                exit(1);
        }
        return stack[--stack_size];
}

int evaluate_rpn() {
        char ch;

        do {
                scanf(" %c", &ch);
                process_token(ch);
        } while (ch != '=');
        
        return pop();
}

void process_token(char token) {
       if (isdigit(token)) {
                push(token - '0');
       } else if (token == '+') {
                push(pop() + pop());
       } else if (token == '-') {
                int op = pop();
                push(pop() - op);
       } else if (token == '*') {
                push(pop() * pop());
       } else if (token == '/') {
                int op = pop();
                push(pop() / op);
       } else if (token != '=') {
                // invalid token
                exit(0);
       }
}
