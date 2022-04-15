#include "../winhttp.h"

//----- (00000001404E5640) ----------------------------------------------------
__int64 __fastcall sub_1404E5640(_QWORD* a1)
{
	__int64 v1; // rax
	unsigned __int64 v3; // r8
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // rbx
	_QWORD* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]
	__int64 v16; // [rsp+30h] [rbp-18h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v5 = (unsigned int)v1;
			if ((unsigned int)v1 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	if (v7 > 0x12)
		v8 = 0i64;
	else
		v8 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 8i64 * (int)v7 + 208);
	v15 = 15i64;
	LODWORD(v16) = 0;
	HIDWORD(v16) = v7;
	v9 = (_QWORD*)sub_140059170(a1, 0x18ui64);
	*v9 = v8;
	v9[1] = v15;
	v9[2] = v16;
	v10 = a1[4];
	v11 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v12 = a1[2];
	v14 = v11;
	LODWORD(v15) = 4;
	sub_14005E8E0((__int64)a1, v10 + 160, (int*)&v14, v12);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;

