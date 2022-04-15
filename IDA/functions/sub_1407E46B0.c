#include "../winhttp.h"

//----- (00000001407E46B0) ----------------------------------------------------
LPWCH sub_1407E46B0()
{
	LPWCH result; // rax
	int* v1; // rbx
	int* v2; // rdi
	SIZE_T v3; // rbp
	int* v4; // rax
	int* v5; // rsi

	result = GetEnvironmentStringsW();
	v1 = 0i64;
	v2 = (int*)result;
	if (result)
	{
		while (*result)
		{
			do
				++result;
			while (*result);
			++result;
		}
		v3 = (int)result - (int)v2 + 2;
		v4 = (int*)sub_1407E2C30(v3);
		v5 = v4;
		if (v4)
		{
			sub_1407DB590(v4, v2, v3);
			v1 = v5;
		}
		FreeEnvironmentStringsW((LPWCH)v2);
		return (LPWCH)v1;
	}
	return result;
}

