#include "../winhttp.h"

//----- (000000014049C120) ----------------------------------------------------
__int64 __fastcall sub_14049C120(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD* a5, int a6)
{
	__int64 v7[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v8; // [rsp+40h] [rbp-28h]
	int v9; // [rsp+48h] [rbp-20h]
	int v10; // [rsp+4Ch] [rbp-1Ch]
	int v11; // [rsp+50h] [rbp-18h]

	if (!a2)
	{
		a2 = *(_QWORD*)(qword_140C65898 + 120);
		if (!a2)
			return 0i64;
	}
	v8 = 8i64;
	v11 = -1;
	v7[2] = 0i64;
	v7[3] = 0i64;
	v9 = 0;
	v7[0] = a2;
	v7[1] = a4;
	v10 = a6;
	if (a5)
		LODWORD(v8) = *a5;
	return sub_1404A1E10(a1, v7, a3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

