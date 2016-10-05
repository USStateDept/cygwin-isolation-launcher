#include <stdlib.h>
#include <process.h>

int main(int argc, char* argv[])
{
	char** newargs=(char**)malloc(sizeof(char*)*argc);
	char* target="c:\\cygwin\\bin\\git.exe";
	int i;

	_putenv("PATH=c:\\cygwin\\bin\\");

	newargs[0]=target;
	for (i=1; i<argc; i++) newargs[i]=argv[i];
	newargs[argc]=NULL;

	_execv(newargs[0], newargs);
}