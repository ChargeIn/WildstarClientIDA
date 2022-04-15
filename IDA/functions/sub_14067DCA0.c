#include "../winhttp.h"

//----- (000000014067DCA0) ----------------------------------------------------
__int64 __fastcall sub_14067DCA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	int v4; // ebx
	unsigned int v5; // eax
	__int64 v6; // rcx
	int v7; // eax
	_DWORD* v8; // rcx

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3))
	{
		v4 = sub_1400584E0((__int64)a1, 2);
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		v7 = sub_140571400(v6, v5, v4 - 1);
		v8 = (_DWORD*)a1[2];
		v8[2] = 1;
		*v8 = v7 >= 0;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 14067DCFB: variable 'v6' is possibly undefined

