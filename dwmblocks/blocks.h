//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"bar_time",		2,			100},
	{"", 		"bar_volume",		0,			10},
	{"", 		"bar_ram",		5,			1},	
	{"", 		"bar_battery",		5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
