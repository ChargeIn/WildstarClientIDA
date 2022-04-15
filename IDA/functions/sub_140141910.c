#include "../winhttp.h"

//----- (0000000140141910) ----------------------------------------------------
float* __fastcall sub_140141910(__int64 a1, float* a2)
{
	unsigned __int64 v2; // rbp
	float i; // xmm12_4
	__int64 v6; // rbx
	float* result; // rax
	char v8[48]; // [rsp+20h] [rbp-98h] BYREF

	v2 = 0i64;
	*(_OWORD*)a2 = 0i64;
	for (i = *(float*)(a1 + 672);
		v2 < *(_QWORD*)(a1 + 816);
		a2[1] = fmaxf(
			a2[1],
			*(float*)((*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v6 + 16i64))(v6, v8) + 20)))
	{
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 808) + 8 * v2);
		i = fminf(i, *(float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v6 + 16i64))(v6, v8));
		*a2 = fmaxf(*a2, *(float*)((*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v6 + 16i64))(v6, v8) + 16));
		++v2;
	}
	result = a2;
	*a2 = fmaxf(0.0, *a2 - i);
	return result;
}

