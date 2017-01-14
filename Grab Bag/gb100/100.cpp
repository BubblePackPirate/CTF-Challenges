/************
MCPA STL CTF 2015
Grabbag Challenge 100

Kyle J. Smathers

*************/

#include <stdio.h>
#include <string>
#include <iostream>
#include <istream>
#include <stdlib.h>

using namespace std;


int main(int argc, char* argv[])
{
	string arg1, arg2, arg3;

	if(argc == 1)	printf("Dang it.. where did I put that password??? Looks like I have to dig through the manual...\n\n");
	if(argc > 1) arg1 = argv[1];
	if(argc > 2) arg2 = argv[2];
	if(argc > 3) arg3 = argv[3];

if(argc > 1 &&  (!arg1.compare("-h") || !arg1.compare("-help")))
{
printf("Usage: grep [OPTION]... PATTERN [FILE]...\nSearch for PATTERN in each FILE or standard input.\nPATTERN is, by default, a basic regular expression (BRE).\nExample: grep -i 'hello world' menu.h main.c\n\nRegexp selection and interpretation:\n	-E, --extended-regexp     PATTERN is an extended regular expression (ERE)\n	-F, --fixed-strings       PATTERN is a set of newline-separated fixed strings\n	-G, --basic-regexp        PATTERN is a basic regular expression (BRE)\n	-P, --perl-regexp         PATTERN is a Perl regular expression\n	-e, --regexp=PATTERN      use PATTERN for matching\n	-f, --file=FILE           obtain PATTERN from FILE\n	-i, --ignore-case         ignore case distinctions\n	-w, --word-regexp         force PATTERN to match only whole words\n	-x, --line-regexp         force PATTERN to match only whole lines\n	-z, --null-data           a data line ends in 0 byte, not newline\n\nMiscellaneous:\n	-s, --no-messages         suppress error messages\n	-v, --invert-match        select non-matching lines\n	-V, --version             print version information and exit\n	--help                display this help and exit\n	--mmap                deprecated no-op; evokes a warning\n\nOutput control:\n	-m, --max-count=NUM       stop after NUM matches\n	-b, --byte-offset         print the byte offset with output lines\n	-n, --line-number         print line number with output lines\n		--line-buffered       flush output on every line\n	-H, --with-filename       print the file name for each match\n	-h, --no-filename         suppress the file name prefix on output\n		--label=LABEL         use LABEL as the standard input file name prefix\n	-o, --only-matching       show only the part of a line matching PATTERN\n	-pw 			  prints the secret password/flag\n	-q, --quiet, --silent     suppress all normal output\n		--binary-files=TYPE   assume that binary files are TYPE; TYPE is `binary', `text', or `without-match'\n	-a, --text                equivalent to --binary-files=text\n	-I                        equivalent to --binary-files=without-match\n	-d, --directories=ACTION  how to handle directories; ACTION is `read', `recurse', or `skip'\n	-D, --devices=ACTION      how to handle devices, FIFOs and sockets; ACTION is `read' or `skip'\n  -r, --recursive           like --directories=recurse\n  -R, --dereference-recursive  likewise, but follow all symlinks\n      --include=FILE_PATTERN  search only files that match FILE_PATTERN\n      --exclude=FILE_PATTERN  skip files and directories matching FILE_PATTERN\n      --exclude-from=FILE   skip files matching any file pattern from FILE\n      --exclude-dir=PATTERN  directories that match PATTERN will be skipped.\n  -L, --files-without-match  print only names of FILEs containing no match\n  -l, --files-with-matches  print only names of FILEs containing matches\n  -c, --count               print only a count of matching lines per FILE\n  -T, --initial-tab         make tabs line up (if needed)\n  -Z, --null                print 0 byte after FILE name\n\nContext control:\n  -B, --before-context=NUM  print NUM lines of leading context\n  -A, --after-context=NUM   print NUM lines of trailing context\n  -C, --context=NUM         print NUM lines of output context\n  -NUM                      same as --context=NUM\n      --color[=WHEN],\n      --colour[=WHEN]       use markers to highlight the matching strings;\n                            WHEN is `always', `never', or `auto'\n  -U, --binary              do not strip CR characters at EOL (MSDOS/Windows)\n  -u, --unix-byte-offsets   report offsets as if CRs were not there\n                            (MSDOS/Windows)\n\n'egrep' means 'grep -E'.  'fgrep' means 'grep -F'.\nDirect invocation as either 'egrep' or 'fgrep' is deprecated.\nWhen FILE is -, read standard input.  With no FILE, read . if a command-line\n-r is given, - otherwise.  If fewer than two FILEs are given, assume -h.\nExit status is 0 if any line is selected, 1 otherwise;\nif any error occurs and -q is not given, the exit status is 2.\n\nReport bugs to: bug-grep@gnu.org\nGNU Grep home page: <http://www.gnu.org/software/grep/>\nGeneral help using GNU software: <http://www.gnu.org/gethelp/>\n\n");
}else if(argc > 1 && (!arg1.compare("-pw")))
{
	printf("WeLcOmE2ThERoCK\n\n");
}
else if(argc > 2)
{
	string systemcmd;
	systemcmd = "grep " + arg1 + " " + arg2 +" "+ arg3;
	//printf(systemcmd.c_str());
	system(systemcmd.c_str());
}

}

