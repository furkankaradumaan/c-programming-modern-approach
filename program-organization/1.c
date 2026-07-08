// This program checks for a series of parenthesis and braces
// to find whether they are balanced

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 100
#define OP_PUSH 0
#define OP_POP_AND_COMPARE 1
#define OP_SKIP 2

char stack[MAX_STACK];
int stack_size = 0;

void push(char parent);
char pop();
bool matches(char open, char closed);
int decide_operation(char c);

int main() {
        char c;
        bool nested_properly;

        printf("Enter parenthesis and/or braces: ");
        
        nested_properly = true;
        do {
                c = getchar();

                if (c == '\0') break;
                switch (decide_operation(c)) {
                        case OP_PUSH: push(c); break;
                        case OP_POP_AND_COMPARE: 
                                      {
                                        char popped = pop();
                                        if (!matches(popped, c)) {
                                                nested_properly = false;
                                        }
                                        break;
                                      }          
                }
        } while (c != '\n' && c != '\0' && nested_properly);
        nested_properly = stack_size == 0;

        if (nested_properly) printf("Parenthesis/braces are nested properly\n");
        else printf("Parenthesis/braces are not nested properly\n");

        return 0;
}

void push(char parent) {
        if (stack_size == MAX_STACK) {
                printf("Max stack depth exceeded\n");
                exit(1);
        }
        stack[stack_size++] = parent;
}

char pop() {
        if (stack_size == 0) {
                return '\0'; // return an invalid character for underflow
        }
        return stack[--stack_size];
}

bool matches(char open, char closed) {
        if (open == '{' && closed == '}'
         || open == '(' && closed == ')'
         || open == '}' && closed == '{'
         || open == ')' && closed == '(')
                return true;
        else
                return false;
}

int decide_operation(char c) {
        if (c == '(' || c == '{') return OP_PUSH;
        else if (c == ')' || c == '}') return OP_POP_AND_COMPARE;
        return OP_SKIP;
}

