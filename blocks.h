//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "system_py",					5,		0},
	{"", "counttmuxsessions",			5,		5},
	{"", "pacpackages",					5,		0},
	{"", "mailbox",						5,		0},
	{"", "music",						5,		10},
	{"", "volume",						5,		10},
	{"", "internet",					5,		4},
	{"", "kbd_layout",					5,		0},
	{"", "calendar",					5,		0},
	{"", "clock",						60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 4;

// autocmd BufWritePost ~/.config/suckless/dwmblocks/blocks.h !cd ~/.config/suckless/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
