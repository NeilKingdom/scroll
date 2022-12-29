/*
   Define ESC sequences to use for scroll events.
   Use "cat -v" to figure out favorite key combination.

   lines is the number of lines scrolled up or down.
   If lines is negative, it's the fraction of the terminal size.
*/
struct rule rules[] = {
	/* Sequence      Event         Lines */
	{ "\031",        SCROLL_UP,    1     }, /* Mouse wheel up */
	{ "\005",        SCROLL_DOWN,  1     }, /* Mouse wheel Down */
};
