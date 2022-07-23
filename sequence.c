#include "sequence.h"
#include <stdlib.h>

sequence make_sequence(unsigned int initial_size){
    
    sequence s;
    
    s.elems = (void **)malloc(sizeof(void *) * initial_size );
    
    s.seq_size  = initial_size;
    s.last_elem = 0;

    return s;
}

void free_sequence(sequence s){ free(s.elems); }

void add_elem(sequence *s,void * new_elem){
    
    if( s->last_elem == s->seq_size ){
        
        s->seq_size *= 2;
        void ** new_seq = malloc( sizeof(void * ) * s->seq_size );

        for (int i = 0; i < s->last_elem ; ++i) {
            new_seq[i] = s->elems[i];
        }
        free(s->elems);
        s->elems = new_seq;
    }
    s->elems[s->last_elem++] = new_elem;
}

