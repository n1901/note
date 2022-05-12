#include <iostream>     // std stuff
#include <string.h>     // strcmp

using std::cout;
using std::cerr;
using std::endl;

#pragma GCC diagnostic push

    #pragma GCC diagnostic ignored "-Wwrite-strings"
    char* source = "~/.note";

#pragma GCC diagnostic pop

// help function
// print the manual and exit
void help() {
    exit(0);
}


int main(int argc, char **argv) {

    // print manual if no arguments are passed
    if(argc == 0) {
        help();
    }

    // loop through all arguments
    for (int arg = 0; arg < argc; arg++) {

        // manual
        if(strcmp("help", argv[arg])==0) {
            help();
        }
        
        // set the source file
        if(strcmp("source", argv[arg])==0) {
            if(arg==argc-1) {
                cerr<<"\t\"source\"\t->\tfilename expected"<<endl;
                exit(1);
            }
            source = argv[arg+1];
        }

        if(strcmp("add", argv[arg])==0) {
            if(arg==argc-1) {
                cerr<<"\t\"add\"\t->\tvalue expected"<<endl;
                exit(1);
            }
        }

        if(strcmp("remove", argv[arg])==0) {
            if(arg==argc-1) {
                cerr<<"\t\"remove\"\t->\tvalue expected"<<endl;
                exit(1);
            }
        }
        
        if(strcmp("show", argv[arg])==0) {

        }
    }

    //TODO 
    //  create manpage
    //  finish Makefile
    //  find a better std source file
    //  add remove command
    //  add new command
    //  add show command
    //  add delete command
}
