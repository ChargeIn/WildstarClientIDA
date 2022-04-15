#include "../winhttp.h"

//----- (00000001408362F0) ----------------------------------------------------
double __fastcall sub_1408362F0(__int64 a1, unsigned int a2, bool* a3)
{
	__int64 v3; // r9
	double result; // xmm0_8

	v3 = *(_QWORD*)(a1 + 8i64 * (a2 % 0xC1));
	if (v3)
	{
		while (*(_DWORD*)v3 != a2)
		{
			v3 = *(_QWORD*)(v3 + 8);
			if (!v3)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		v3 = 0i64;
	}
	if (a3)
		*a3 = v3 != 0;
	if (!v3)
		return 0.0;
	*(_QWORD*)&result = *(unsigned int*)(v3 + 16);
	return result;
}

