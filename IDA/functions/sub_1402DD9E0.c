#include "../winhttp.h"

//----- (00000001402DD9E0) ----------------------------------------------------
__int64 __fastcall sub_1402DD9E0(_QWORD* a1, _QWORD* a2)
{
	_DWORD* v5; // rbp
	unsigned __int64* v6; // rbx
	int v7; // r14d
	unsigned __int64* v8; // rdi
	__int64 v9; // rsi
	__int64 v10; // rax

	if (!a2)
		return 0i64;
	if (a2 == a1)
		return 1i64;
	v5 = (_DWORD*)(*(__int64 (**)(void))(*a1 + 16i64))();
	if (v5 != (_DWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a2 + 16i64))(a2))
		return 0i64;
	v6 = (unsigned __int64*)a1[3];
	v7 = v5[10] * (v5[8] - v5[6]);
	v8 = (unsigned __int64*)((char*)v6 + (v5[9] - v5[7]) * v5[11]);
	v9 = (*(__int64(__fastcall**)(_QWORD*))(*a2 + 32i64))(a2);
	if (v6 >= v8)
		return 1i64;
	while (!(unsigned int)sub_1407E6AF0(v6, v9, v7))
	{
		v10 = (int)v5[11];
		v6 = (unsigned __int64*)((char*)v6 + v10);
		v9 += v10;
		if (v6 >= v8)
			return 1i64;
	}
	return 0i64;
}

