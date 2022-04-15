#include "../winhttp.h"

//----- (0000000140733280) ----------------------------------------------------
__int64 __fastcall sub_140733280(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rcx
	int v12; // [rsp+38h] [rbp+10h] BYREF
	int v13; // [rsp+3Ch] [rbp+14h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v2 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_1400F26A0(v2 + 384, 1);
	if (v7)
	{
		v12 = BYTE1(v7);
		v13 = (unsigned __int8)v7;
		v8 = sub_1403AC780(qword_140C65898 + 160, &v12);
		if (v8)
		{
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 48i64))(v8);
			sub_1404B99B0(v10, v9);
		}
	}
	return 0i64;
}
// 140733324: variable 'v10' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

