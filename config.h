#ifndef CONFIG_H_
#define CONFIG_H_

// Progress bar color
const unsigned long int PROGRESS_BAR_COLOR = 0xffffff;

// Default download directory (also build directory too)
const char download_dir[] = "/build_dir"; // Specify "." if you want it to do it in the current directory you are in

// Clean sources
const int clean_sources = 0; // 0 - no cleaning, 1 - clean extracted only, 3 - POWERWASH!

// Force download disabled by default, this will continue downloading even if there is an error, NOT RECOMMENDED TO TOGGLE ON
const int force_download = 0;

#endif // CONFIG_H_
