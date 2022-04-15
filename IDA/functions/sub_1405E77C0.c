#include "../winhttp.h"

//----- (00000001405E77C0) ----------------------------------------------------
__int64 __fastcall sub_1405E77C0(__int64 a1, int a2, float a3)
{
	float v3; // xmm0_4
	__int64 v7; // rcx
	__int64 v8; // rbp
	unsigned int v9; // esi
	__int64 v10; // rdi
	unsigned int v11; // ebx
	float v12; // xmm1_4

	if (a3 == 0.0)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 96i64))(a1);
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v7)
		return 11i64;
	v8 = *(_QWORD*)(v7 + 224);
	if (!v8)
		return 11i64;
	v9 = 11;
	v10 = 540i64;
	v11 = 0;
	while (1)
	{
		if (*(_DWORD*)(v10 + v8 - 440) == a2)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 56i64))(a1, v11);
			v12 = *(float*)(v10 + *(_QWORD*)(qword_140C65898 + 120)) + a3;
			if (v12 >= 0.0 && v12 <= v3)
				break;
		}
		++v11;
		v10 += 4i64;
		if (v11 >= 8)
			return v9;
	}
	return v11;
}
// 1405E785C: conditional instruction was optimized away because ebx.4<8u
// 1405E787F: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

