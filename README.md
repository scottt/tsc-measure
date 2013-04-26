# Time Stamp Counter Performance Measuring

[tsc-measure.h](https://github.com/scottt/tsc-measure/blob/master/tsc-measure/tsc-measure.h) defines a pair of inline functions to measure code execution time in CPU cycles on x86 and x86-4:
```C
#include <tsc-measure/tsc-measure.h>
int main()
{
	uint64_t cycles_start, cycles_end, cycles;
	cycles_start = tsc_measure_start();
	/* ... code to be measured ... */
	cycles_end = tsc_measure_stop();
	cycles = cycles_end - cycles_start;
}
```

The implementation uses the **RDTSCP**, **RDTSC** and **CPUID** instructions as described in
[How to Benmark Code Execution Times on Intel IA32 and IA-64 Instruction Set Architectures](http://www.intel.com/content/dam/www/public/us/en/documents/white-papers/ia-32-ia-64-benchmark-code-execution-paper.pdf) by Gabriele Paoloni.
