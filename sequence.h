#ifndef _SEQUENCE_H_
#define _SEQUENCE_H_

typedef struct{
    
    void ** elems;
    unsigned int seq_size;
    unsigned int last_elem;
}sequence;

sequence make_sequence(unsigned int initial_size);
void free_sequence(sequence s);
void add_elem(sequence * s,void * new_elem);

#endif

