#ifndef __LINE_H__
#define __LINE_H__

/* clear_line: Clears the input buffer */
void clear_line(void);

/* add_word: Adds word to the end of the current line.
 *           If this is not the first word in the buffer
 *           puts one space before word
 */
void add_word(const char *word);

/* space_remaining: Returns the remaining space in the input buffer. */
int space_remaining(void);

/* Writes the current line with justification */
void write_line(void);


/* flush_line: Writes the current line without justification.
 *             If line is empty, does nothing.
 */ 
void flush_line(void);

#endif
