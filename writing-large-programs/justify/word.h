#ifndef __WORD_H__
#define __WORD_H__

/*
 * read_word: Reads the next word from input and stores
 *              it in word. Makes word empty if no word
 *              could be read because of end-of-file.
 *              Truncates the length if it exceeds len.
 */
void read_word(char *word, int len);

#endif
