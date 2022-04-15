#include "../winhttp.h"

//----- (0000000140196890) ----------------------------------------------------
const void** __fastcall sub_140196890(const void*** a1)
{
	const void** result; // rax
	const void** v3; // rdx
	const void*** v4; // rcx
	const void*** v5; // rcx

	for (result = *a1; *a1; result = *a1)
	{
		if (*result)
			*(_QWORD*)*result = result[1];
		v3 = (const void**)result[1];
		if (v3)
			*v3 = *result;
		*result = 0i64;
		result[1] = 0i64;
	}
	v4 = (const void***)a1[1];
	if (v4)
	{
		result = a1[2];
		*v4 = result;
	}
	v5 = (const void***)a1[2];
	if (v5)
	{
		result = a1[1];
		*v5 = result;
	}
	a1[1] = 0i64;
	a1[2] = 0i64;
	if (*a1)
		return (const void**)sub_1401A4A00(a1);
	return result;
}

