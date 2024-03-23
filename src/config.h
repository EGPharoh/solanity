#ifndef VANITY_CONFIG
#define VANITY_CONFIG

static int const MAX_ITERATIONS = 200000;
static int const STOP_AFTER_KEYS_FOUND = 100000;

// how many times a gpu thread generates a public key in one go
__device__ const int ATTEMPTS_PER_EXECUTION = 200000;

__device__ const int MAX_PATTERNS = 10;

// exact matches at the beginning of the address, letter ? is wildcard
__device__ static char const *prefixes[] = {
  "mintech",
  "MinTech",
  "MINTECH",
  "PASTEL",
  "pastel",
  "mintechpastel",
  "MTCHxPSTL"
};

#endif
