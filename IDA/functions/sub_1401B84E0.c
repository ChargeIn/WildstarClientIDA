#include "../winhttp.h"

//----- (00000001401B84E0) ----------------------------------------------------
int __fastcall sub_1401B84E0(__int64 a1, unsigned int a2)
{
	int result; // eax
	unsigned __int64* v4; // rdx
	unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

	v5 = a2;
	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return -2147024891;
	if (!a2)
		return 0;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624))
		return -2147024809;
	v4 = (unsigned __int64*)(*(_QWORD*)(a1 + 616) + 16i64 * a2);
	if (!v4[1])
		return -2147024809;
	result = sub_1401BB790(a1, *v4);
	if (result >= 0)
	{
		result = sub_1401BA720(a1, v5, *(unsigned int*)(a1 + 604), 0i64);
		if (result >= 0)
		{
			result = sub_1401BA680(a1, (LARGE_INTEGER)548i64, (int*)&v5, 4ui64);
			if (result >= 0)
				return 0;
		}
	}
	return result;
}

