#include <iostream>
#include <string>

extern "C" {
#include "metadata.h"
#include "avio_reading.h"
#include "ffplay.h"
}

using namespace std;

int main() {
    string file_path = "/Users/yfsu/Desktop/video_mp4.mp4";

    std::cout << "meta_data_main---start" << std::endl;
    meta_data_main(file_path.c_str());

    std::cout << std::endl << "avio_reading_main---start " << std::endl;
    avio_reading_main(file_path.c_str());

    std::cout << std::endl << "ffplay_main---start " << std::endl;
    char *argv[2] = {nullptr, const_cast<char *>(file_path.c_str())};
    ffplay_main(2, argv);
    return 0;
}
