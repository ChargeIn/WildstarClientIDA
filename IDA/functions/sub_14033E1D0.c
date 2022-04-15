#include "../winhttp.h"

//----- (000000014033E1D0) ----------------------------------------------------
__int64 __fastcall sub_14033E1D0(_QWORD* a1, int* a2)
{
	__int64 v2; // rbx
	int v3; // esi
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64 result; // rax

	v2 = *((_QWORD*)a2 + 1);
	v3 = *a2;
	if (v2)
		(**(void(__fastcall***)(_QWORD))v2)(*((_QWORD*)a2 + 1));
	v5 = (__int64)(a1[10] - a1[1]) >> 3;
	if ((unsigned __int64)(a1[2] - v5) < 2)
		sub_140173030((__int64)a1, v5);
	*(_QWORD*)(a1[10] + 8i64) = sub_14018B280(496i64, 0);
	v6 = a1[7];
	if (v6)
	{
		*(_DWORD*)v6 = v3;
		*(_QWORD*)(v6 + 8) = v2;
		if (v2)
			(**(void(__fastcall***)(__int64))v2)(v2);
	}
	v7 = (__int64*)(a1[10] + 8i64);
	a1[10] = v7;
	v8 = *v7;
	a1[8] = v8;
	a1[9] = v8 + 496;
	result = a1[8];
	a1[7] = result;
	if (v2)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	return result;
}

