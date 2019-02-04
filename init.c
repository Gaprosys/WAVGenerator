#include <stdio.h>

struct wav_riff {
    char[4] chunkID;            // Has to be "RIFF"
    unsigned int chunkSize;     // File length - 8
    char[4] riffType;           // Has to be "WAVE"
};

struct format_header {
    unsigned int wFormatTag;
    unsigned short wChannels;
    unsigned int dwSamplesPerSec;
    unsigned int dwAvgBytesPerSec;
    unsigned short wBlockAlign;
};

int main()
{
    printf("Create Header");
    
    struct wav_riff header;
    strcpy(header.chunkID, "RIFF");
    strcpy(header.riffType, "WAVE");
    
    
    
    /*
    FILE* datei;
    datei = fopen("testdatei.txt", "wb");
    if (datei == NULL)
    {
        printf("Fehler beim oeffnen der Datei.");
        return 1;
    }
    fprintf (datei, "Hallo, Welt\n");
    fclose (datei);
    */

    return 0;
}
