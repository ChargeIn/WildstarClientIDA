#include "../winhttp.h"

//----- (00000001408A1070) ----------------------------------------------------
__int64 __fastcall sub_1408A1070(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	unsigned int* v3; // rdi
	__int64 v6; // r8
	__int64 result; // rax
	__int64 v8; // rax
	__int64 v9; // rax

	v2 = *(_QWORD*)(a1 + 120);
	v3 = 0i64;
	if (!*(_BYTE*)(v2 + 29))
		goto LABEL_6;
	v6 = v2 + 8;
	if (!v2)
		v6 = 0i64;
	result = sub_1408A1760(a1 + 8, *(_QWORD*)(a1 + 128), v6, *(_DWORD*)(a2 + 8));
	if ((_DWORD)result == 1)
	{
		sub_1408A1C60(a1 + 8);
		*(_BYTE*)(*(_QWORD*)(a1 + 120) + 29i64) = 0;
	LABEL_6:
		v8 = *(_QWORD*)(a1 + 120);
		if (*(_BYTE*)(v8 + 21))
		{
			sub_1408A15A0(a1 + 8, *(_BYTE*)(v8 + 20), COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v8 + 8)));
			*(_BYTE*)(*(_QWORD*)(a1 + 120) + 21i64) = 0;
		}
		v9 = *(_QWORD*)(a1 + 120);
		if (v9)
			v3 = (unsigned int*)(v9 + 8);
		return sub_1408A1800(a1 + 8, a2, v3);
	}
	return result;
}
// 1408A1C60: using guessed type __int64 __fastcall sub_1408A1C60(_QWORD);

