#include "../winhttp.h"

//----- (000000014034BDD0) ----------------------------------------------------
__int16* __fastcall sub_14034BDD0(__int64 a1, int a2)
{
	int v3; // eax
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // rdx
	__int64 v7; // r10
	unsigned __int64 v8; // rax

	v3 = dword_140C43DA0;
	if (*(_DWORD*)qword_140C63750 < dword_140C43DA0)
		v3 = *(_DWORD*)qword_140C63750;
	if (*((_BYTE*)&dword_140C43DB0 + v3))
		return sub_14034B970((__int64)&dword_140C43DB0, a2, qword_140C7AAC0);
	v5 = 0i64;
	v6 = *(unsigned int*)(qword_140C7AAC0 + 64);
	if (!*(_DWORD*)(qword_140C7AAC0 + 64))
		return &word_140B7B704;
	v7 = *(_QWORD*)(qword_140C7AAC0 + 72);
	while (1)
	{
		v8 = v5 + ((v6 - v5) >> 1);
		if (a2 - *(_DWORD*)(v7 + 8 * v8) >= 0)
			break;
		v6 = v5 + ((v6 - v5) >> 1);
	LABEL_11:
		if (v5 >= v6)
			return &word_140B7B704;
	}
	if (a2 - *(_DWORD*)(v7 + 8 * v8) > 0)
	{
		v5 = v8 + 1;
		goto LABEL_11;
	}
	return (__int16*)(*(_QWORD*)(qword_140C7AAC0 + 88) + 2i64 * *(unsigned int*)(v7 + 8 * v8 + 4));
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C43DA0: using guessed type int dword_140C43DA0;
// 140C43DB0: using guessed type int dword_140C43DB0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

