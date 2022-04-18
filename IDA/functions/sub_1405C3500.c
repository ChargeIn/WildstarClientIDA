#include "../winhttp.h"

//----- (00000001405C3500) ----------------------------------------------------
void __fastcall sub_1405C3500(__int64 a1, int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	v5 = a1;
	v2 = qword_140C65B98;
	if (*(_QWORD*)(qword_140C65B98 + 208))
	{
		sub_140195D70(qword_140C65B98 + 192);
		LODWORD(v5) = a2;
		sub_1403F4900(qword_140C65898, 0x5C8u, (__int64)&v5);
		if (!*(_DWORD*)(v2 + 172) || !a2)
		{
			v4 = qword_140C65898;
			*(_DWORD*)(v2 + 164) = 0;
			*(_DWORD*)(v4 + 1368) = 1;
			*(_QWORD*)(v2 + 176) = 0i64;
			*(_DWORD*)(v2 + 184) = 0;
			*(_QWORD*)(v2 + 168) = 16i64;
			sub_140195D70(v2 + 192);
			if (!a2)
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MatchingCancelPendingGame", &unk_1409D1256);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

