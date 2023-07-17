//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/	/*Update Signal*/
	// {"", "music",											1,									0},
	// {"", "delimeter",									10,									0},
	/* {"", "mailbox",										10,									0}, */
	{"", "updates",										1800,									0},
	{"", "delimeter",									10,									0},
	// {"", "updates",										600,								0},
	// {"", "delimeter",									10,									0},
	{"", "localip",										10,									0},
	{"", "delimeter",									10,									0},
	// {"", "publicip",									10,									0},
	// {"", "delimeter",									10,									0},
	{"", "trafdown",									1,									0},
	{"", "delimeter",									10,									0},
	{"", "trafup",										1,									0},
	{"", "delimeter",									10,									0},
	{"", "cpu",												1,									0},
	{"", "delimeter",									10,									0},
	{"", "battery",										10,									0},
	{"", "delimeter",									10,									0},
	{"", "disk",											10,									0},
	{"", "delimeter",									10,									0},
	{"", "memory",										10,									0},
	{"", "delimeter",									10,									0},
	// {"", "volume",										10,									0},
	{"",	"sb-volume",								0,									10},
	{"", "delimeter",									10,									0},
	{"", "clock",											5,									0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
// static char delim[] = " │ ";
static char delim[] = "\0";
static unsigned int delimLen = 5;
