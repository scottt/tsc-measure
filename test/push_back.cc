#include <stdint.h>
#include <stdio.h>
#include <vector>

#include <tsc-measure/tsc-measure.h>

int main()
{
	uint64_t t0, t1, cycles;
	unsigned int N = 500 * 1000 * 1000;

	t0 = tsc_measure_start();
	std::vector<int> a;
	a.reserve(N);
	for(unsigned int i = 0; i < N; i++)
		a.push_back(i);
	t1 = tsc_measure_stop();
	cycles = t1 - t0;
	printf("cycles/op: %lld\n", (long long)cycles / N);
}
