//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"   ", "bash /home/lucy/.dwm/spot-playing | tr -d '\n'",			1,		0},
	{"   ", "wpctl get-volume @DEFAULT_AUDIO_SINK@ | cut -d' ' -f2", 		1,		0},
	{"   ", "date '+%H:%M'",							1,		0},
	{"   ", "date '+%d.%m.%y'",							1,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " / ";
static unsigned int delimLen = 5;
