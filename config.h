//Modify this file to change what commands output to your statusbar, and recompile using the make command.

// change config here:
// ~/.local/suckless/dwm/config.def.h
// ~/.local/suckless/dwm/bindings.h

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	        0,	    9},
	/* {"", "~/.local/bin/statusbar/system_py",			5,		0}, */
	{"", "~/.local/bin/statusbar/spotify",    			5,		0},
	/* {"", "~/.local/bin/statusbar/docker",			5,		0}, */
	{"", "~/.local/bin/statusbar/counttmuxsessions",	5,		5  },
	{"", "~/.local/bin/statusbar/pacpackages",			0,		8  },
	{"", "~/.local/bin/statusbar/mailbox",				5,		0  },
	/* {"", "~/.local/bin/statusbar/music",				5,		10 }, */
	{"", "~/.local/bin/statusbar/volume",				5,		10 },
	{"", "~/.local/bin/statusbar/internet",				10,		4  },
	/* {"", "~/.local/bin/statusbar/kbd_layout",			5,		0  }, */
	{"", "~/.local/bin/statusbar/calendar",				5,		0  },
	{"", "~/.local/bin/statusbar/clock",				1,		0  },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "  ";
/* static unsigned int delimLen = 1; */

// autocmd BufWritePost ~/.config/suckless/dwmblocks/config.h !cd ~/.config/suckless/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
