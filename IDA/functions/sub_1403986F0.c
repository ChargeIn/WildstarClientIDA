#include "../winhttp.h"

//----- (00000001403986F0) ----------------------------------------------------
__int64 __fastcall sub_1403986F0(__int64 a1, int a2, __int64 a3, __int64 a4, int* a5, __int64 a6, __int64 a7, int a8)
{
	__int64 v11; // rcx
	int v14; // [rsp+20h] [rbp-E8h]
	int v15[7]; // [rsp+30h] [rbp-D8h] BYREF
	int v16; // [rsp+4Ch] [rbp-BCh]
	int v17; // [rsp+54h] [rbp-B4h]
	int v18; // [rsp+64h] [rbp-A4h]
	int v19; // [rsp+68h] [rbp-A0h]
	int v20; // [rsp+6Ch] [rbp-9Ch]

	sub_1407E4830(v15, 0i64, 0xC8ui64);
	v11 = 0i64;
	v16 = 0;
	if (a3)
		v16 = *(_DWORD*)(a3 + 8);
	v15[0] = a2;
	if (!a2)
		return 4i64;
	if (!a3)
		goto LABEL_21;
	if (*(_QWORD*)(qword_140C65898 + 120) == a3 || *(_QWORD*)(qword_140C65898 + 25744) == a3)
		v11 = qword_140C65898;
	if (!v11 || !sub_1405A5B90(v11, a2))
	{
	LABEL_21:
		if (!sub_1407A0FD0(qword_140C65B70, a2))
			return 4i64;
	}
	if (a4)
		v17 = *(_DWORD*)(a4 + 8);
	if (a5)
	{
		v18 = *a5;
		v19 = a5[1];
		v20 = a5[2];
	}
	return sub_1403ACE00((__int64)a5, (__int64)v15, a6, a7, v14, a8);
}
// 1403987D6: variable 'v14' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

