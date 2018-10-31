#include "Song.h"
#include "UtPod.h"
#include <iostream>
#include <iomanip>

//Constructor with size parameter
//The user of the class will pass in a size.
//If the size is greater than MAX_MEMORY or less than or equal to 0,
//set the size to MAX_MEMORY.
UtPod::UtPod(int size){
    if(size <= 0 || size > MAX_MEMORY){
        size = MAX_MEMORY;
    }
    memSize = size;
}

/* FUNCTION - int addSong
      * attempts to add a new song to the UtPod
          o returns a 0 if successful
          o returns -1 if not enough memory to add the song

      precondition: s is a valid Song

      input parms -

      output parms -
     */

int UtPod::addSong(Song const &s){

    SongNode *temp  = new SongNode;
    temp->s = s;
    temp->next = songs;

}