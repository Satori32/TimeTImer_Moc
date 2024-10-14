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
clock_t Elapsed(TimeTimer& In) {
	return clock() - In.S;
}