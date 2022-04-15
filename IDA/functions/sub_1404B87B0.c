#include "../winhttp.h"

//----- (00000001404B87B0) ----------------------------------------------------
__int64 __fastcall sub_1404B87B0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v6; // [rsp+20h] [rbp-38h]
	__int64 v7; // [rsp+30h] [rbp-28h] BYREF
	__int64 v8; // [rsp+38h] [rbp-20h]
	__int128 v9; // [rsp+40h] [rbp-18h]

	v3 = 0i64;
	if (!qword_140C7DE20)
		return 56i64;
	while (1)
	{
		v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
		if (*(_DWORD*)(v4 + 16) == 7)
			break;
		if (++v3 >= (unsigned __int64)qword_140C7DE20)
			return 56i64;
	}
	if (!v4)
		return 56i64;
	if (*(_DWORD*)(v4 + 772))
		return 14i64;
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0ui64;
	LODWORD(v6) = *(_DWORD*)(qword_140C635F0 + 5760);
	v8 = *(_QWORD*)v4;
	DWORD2(v9) = a3;
	v7 = v6;
	*(_QWORD*)&v9 = a2;
	sub_1403F4900(qword_140C65898, 0x788u, (__int64)&v7);
	return 64i64;
}
// 1404B8851: variable 'v6' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

