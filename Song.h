#ifndef SONG_H
#define SONG_H
#include "Song.h"
#include "UtPod.h"

class Song{

    private:

        String title;
        String artist;
        int    size;

    public:

        Song(Sring title, String artist, int size);

        void setTitle(String new_Title);

        void setName(String new_Name);

        String getTitle();

        String getArtist();

        int getSize();

        ~Song();
};

#endif