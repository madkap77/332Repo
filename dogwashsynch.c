#include "dogwashsynch.h"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

//initializes locks and variables returns 0 for sucess and -1 for faliure
int dogwash_init(int numbays)
{
    printf("Initializing dog bay \n");
    dogwash *d = malloc(sizeof(dogwash));
    d->curnumbays = 0;
    d->totaldogs = 0;
    d->dogAs = 0;
    d->dogBs = 0;
    d->dogOs = 0;
    
    return 0;
}

//Called when new dog arrives, returns when dog is being washed 
// returns 0 for success and -1 for faliure
int newdog(dogtype dog)
{
    
    printf("Dog is now being washed \n ");
    return 0;
}
// called when dog is done being washed, returns after dog is removed
// returns 0 for success and -1 for faliure
int dogdone(dogtype dog)
{
    
    printf("Dog is now done being washed, GO HOME! \n");
    return 0;
}
//Called when data clean up is required, destroys locks
// returns 0 for success and -1 for faliure
int dogwash_done()
{
    return 0;
}
