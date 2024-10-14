/** /
#include <stdio.h>
#include <time.h>


struct TimeTimer {
	clock_t S = clock();
	clock_t E = S;
};

bool Start(TimeTimer& In) {
	In.S = clock();
	In.E = In.S;
	return true;
}
clock_t End(TimeTimer& In) {
	In.E = clock();
	return In.E - In.S;
}
clock_t Result(TimeTimer& In) {
	return In.E - In.S;
}
clock_t Elapsed(TimeTimer& In) {
	return clock() - In.S;
}
/**/

#include "TimeTimer.h"

int main() {
	TimeTimer S;

	Start(S);
	clock_t E = End(S);
	clock_t R = Result(S);
	clock_t EE = Elapsed(S);

	return 0;
}