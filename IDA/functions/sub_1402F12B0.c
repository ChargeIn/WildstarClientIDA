#include "../winhttp.h"

//----- (00000001402F12B0) ----------------------------------------------------
__int64 __fastcall sub_1402F12B0(__int64* a1, __int64* a2)
{
	__int64 v2; // r8
	__int64 v3; // r9
	unsigned int v4; // ecx
	unsigned int v5; // edx
	unsigned __int16 v7; // cx
	unsigned __int16 v8; // dx

	v2 = *a1;
	v3 = *a2;
	v4 = dword_140B63EF8[*(unsigned __int16*)(*a1 + 6)];
	v5 = dword_140B63EF8[*(unsigned __int16*)(*a2 + 6)];
	if (v4 < v5)
		return 0xFFFFFFFFi64;
	if (v4 > v5)
		return 1i64;
	v7 = *(_WORD*)(v2 + 8);
	v8 = *(_WORD*)(v3 + 8);
	if (v7 > v8)
		return 0xFFFFFFFFi64;
	return v7 < v8;
}
// 140B63EF8: using guessed type _DWORD dword_140B63EF8[4];

