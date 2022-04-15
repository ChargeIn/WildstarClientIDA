#include "../winhttp.h"

//----- (00000001400F1A80) ----------------------------------------------------
__int64 __fastcall sub_1400F1A80(__int64 a1, __int64 a2, _QWORD* a3)
{
	int* v5; // rax
	int* v6; // rbx
	void(__fastcall * v7)(__int64, _DWORD*); // rcx
	char v8; // al

	if (*(_QWORD*)(a1 + 16))
		return 2147500037i64;
	*(_QWORD*)(a1 + 32) = a3[1];
	*(_QWORD*)(a1 + 24) = *a3;
	qword_140C63638 = (__int64)nullsub_1;
	v5 = sub_1400598C0();
	v6 = v5;
	if (v5)
		*(_QWORD*)(*((_QWORD*)v5 + 4) + 152i64) = sub_140058070;
	sub_14078B630(v5);
	v7 = sub_1400F45F0;
	*(_BYTE*)(a1 + 9) = 1;
	v8 = 4;
	if (!sub_1400F45F0)
	{
		v8 = 0;
		v7 = 0i64;
	}
	*((_BYTE*)v6 + 100) = v8;
	*((_QWORD*)v6 + 14) = v7;
	v6[26] = 100;
	v6[27] = 100;
	*(_QWORD*)(a1 + 16) = v6;
	return 0i64;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C63638: using guessed type __int64 qword_140C63638;

