//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/	/*Update Signal*/
	{"", "mailbox",										10,									0},
	{"", "localip",										10,									0},
	{"", "publicip",									10,									0},
	{"", "trafdown",									1,									0},
	{"", "trafup",										1,									0},
	{"", "cpu",												1,									0},
	{"", "battery",										10,									0},
	{"", "disk",											10,									0},
	{"", "memory",										10,									0},
	{"", "volume",										10,									0},
	{"", "clock",											5,									0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " │ ";
static unsigned int delimLen = 5;
