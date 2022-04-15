#include "../winhttp.h"

//----- (000000014004F950) ----------------------------------------------------
__int64 __fastcall sub_14004F950(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v5; // rcx
	int v6; // ebx
	__int64 v7; // rax
	int v8; // ecx
	int v9; // edi
	__int64 v11[4]; // [rsp+20h] [rbp-48h] BYREF
	int v12; // [rsp+40h] [rbp-28h]
	__int64(__fastcall * v13)(__int64, unsigned int, _DWORD*, _WORD*); // [rsp+48h] [rbp-20h]
	__int64 v14; // [rsp+50h] [rbp-18h]
	__int64 v15; // [rsp+58h] [rbp-10h]

	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = a2;
	v11[0] = (__int64)L"audio";
	v11[1] = (__int64)&word_140B7B704;
	v11[2] = (__int64)&word_140B7B704;
	v11[3] = *(_QWORD*)(qword_140C7AAC0 + 56);
	v12 = 0;
	v13 = sub_140050EC0;
	v14 = 0i64;
	v15 = a2;
	v6 = sub_14033EE00(a4 == 0, a2, v11);
	if (v6 >= 0)
	{
		if (qword_140C65850)
			sub_14033FA70(v5, (__int64)sub_140051000, a1);
		v7 = sub_140210A00(*(_DWORD*)(qword_140C7AAC0 + 8));
		if (v7 && (v8 = *(_DWORD*)(v7 + 24), v8 >= 0))
			v9 = 1 << v8;
		else
			v9 = 0;
		*(_DWORD*)(a1 + 1524) = v9;
	}
	return (unsigned int)v6;
}
// 14004F9E8: variable 'v5' is possibly undefined
// 140B55D10: using guessed type wchar_t aAudio[6];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65850: using guessed type __int64 qword_140C65850;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

