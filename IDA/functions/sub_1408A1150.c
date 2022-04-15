#include "../winhttp.h"

//----- (00000001408A1150) ----------------------------------------------------
__int64 __fastcall sub_1408A1150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	__int64 v5; // rbx
	_DWORD* v8; // rsi
	char v9; // al
	__int64 v10; // rax
	unsigned int v11; // ebx
	__int64 result; // rax

	v5 = 0i64;
	*(_QWORD*)(a1 + 120) = a4;
	*(_QWORD*)(a1 + 128) = a2;
	v8 = (_DWORD*)(a4 + 8);
	if (!a4)
		v8 = 0i64;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	sub_1408A1C70(a1 + 8, v8, v9, *a5);
	v10 = *(_QWORD*)(a1 + 120);
	if (v10)
		v5 = v10 + 8;
	v11 = sub_1408A1760(a1 + 8, a2, v5, a5[1] & 0x3FFFF);
	sub_1408A15A0(
		a1 + 8,
		*(_BYTE*)(*(_QWORD*)(a1 + 120) + 20i64),
		COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64)));
	*(_BYTE*)(*(_QWORD*)(a1 + 120) + 29i64) = 0;
	result = v11;
	*(_BYTE*)(*(_QWORD*)(a1 + 120) + 21i64) = 0;
	return result;
}

