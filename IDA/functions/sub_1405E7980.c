#include "../winhttp.h"

//----- (00000001405E7980) ----------------------------------------------------
__int64 __fastcall sub_1405E7980(__int64 a1, int a2, float a3)
{
	float v3; // xmm0_4
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // rbp
	unsigned int v9; // edi
	__int64 i; // rbx
	float v11; // xmm1_4

	if (a3 == 0.0)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1);
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v7)
		return 175i64;
	v8 = *(_QWORD*)(v7 + 224);
	if (!v8)
		return 175i64;
	result = 0i64;
	v9 = 0;
	for (i = 540i64; *(_DWORD*)(i + v8 - 440) != a2; i += 4i64)
	{
	LABEL_12:
		if (++v9 >= 8)
			return result;
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 56i64))(a1, v9);
	v11 = *(float*)(i + *(_QWORD*)(qword_140C65898 + 120)) + a3;
	if (v11 < 0.0 || v11 > v3)
	{
		result = *(unsigned int*)((char*)&unk_140C390D0 + i - 540);
		goto LABEL_12;
	}
	return 0i64;
}
// 1405E7A38: conditional instruction was optimized away because edi.4<8u
// 1405E7A5B: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

