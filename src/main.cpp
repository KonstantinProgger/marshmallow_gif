#include <gtk/gtk.h>

#include <iostream>
#include <fstream>
#include <locale>    
#include <cstdio>
#include <string>
#include "../include/app.hpp"
#include "../include/config.hpp"
#include "../include/start_setup.hpp"

#include "../lib/queue.hpp"

using namespace std;

int main(int argc, char *argv[]){
    if(app_init(&argc, &argv) == 2){
        //It will be message
    }

    queue<std::string> files;

    for(int i{1}; i < argc; i++) files.enqueue(argv[i]);

    start_app(files);

    return 0;
}