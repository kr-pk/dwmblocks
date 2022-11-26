//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
/*	{"",        "music",         1,		             1},*/
	{"",        "nettraf",       1,		             1},
/*	{"",        "battery",       1,                  1},*/
	{"",        "clock",         1,                  1},
	{"",        "volume",        1,                  1},
	{"",        "cpu",           1,                  1},
	{"",        "memory",        1,                  1},
/*	{"",        "bright",        1,                  1},*/
	{"",        "internet",      1,                  1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
