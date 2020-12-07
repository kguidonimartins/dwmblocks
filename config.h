//Modify this file to change what commands output to your statusbar, and recompile using the make command.

// change config here:
// ~/.local/suckless/dwm/config.def.h
// ~/.local/suckless/dwm/bindings.h

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	        0,	    9},
	{"", "~/.local/bin/tools/statusbar/music",				5,		10 },
	/* {"", "~/.local/bin/tools/statusbar/dwl",				5,		13 }, */
	/* {"", "~/.local/bin/tools/statusbar/system_py",			5,		0}, */
	{"", "~/.local/bin/tools/statusbar/spotify",    			5,		11},
	/* {"", "~/.local/bin/tools/statusbar/docker",			5,		0}, */
	{"", "~/.local/bin/tools/statusbar/counttmuxsessions",	5,		5  },
	{"", "~/.local/bin/tools/statusbar/pacpackages",			0,		8  },
	{"", "~/.local/bin/tools/statusbar/mailbox",				5,		7  },
	{"", "~/.local/bin/tools/statusbar/volume",				5,		12 },
	{"", "~/.local/bin/tools/statusbar/internet",				10,		4  },
	/* {"", "~/.local/bin/tools/statusbar/kbd_layout",			5,		0  }, */
	{"", "~/.local/bin/tools/statusbar/calendar",				5,		1  },
	{"", "~/.local/bin/tools/statusbar/clock",				60,		0  },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "  ";
/* static unsigned int delimLen = 1; */

// autocmd BufWritePost ~/.config/suckless/dwmblocks/config.h !cd ~/.config/suckless/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
