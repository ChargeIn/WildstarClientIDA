#include "../winhttp.h"

//----- (000000014059AAA0) ----------------------------------------------------
__int64 __fastcall sub_14059AAA0(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // eax
	unsigned int v8; // r14d
	__int64 v9; // rcx
	__int64 v10; // rax
	int v11; // r10d
	__int64 v12; // rcx
	unsigned __int64 v13; // r8
	__int64 v14; // r15
	__int64 v15; // rdx
	__int64 v16; // rax
	__int64 v17; // rcx
	unsigned int* v18; // rbx
	__int64 v19; // rsi
	__int64 v20; // rbp
	__int64 v21; // rax
	int v22; // eax
	__int64 v23; // rcx
	unsigned __int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // r8
	__int64 v27; // rcx
	__int64 v28; // rax
	unsigned __int64 v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // r9
	__int64 v34; // [rsp+20h] [rbp-38h] BYREF
	__int128 v35; // [rsp+28h] [rbp-30h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = 0;
	v10 = sub_1405BE150(v9, v7);
	v12 = 0i64;
	v13 = *(_QWORD*)(qword_140C65898 + 5792);
	v14 = v10;
	if (v13)
	{
		v15 = *(_QWORD*)(qword_140C65898 + 5784);
		v16 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v15 + 8 * v16) + 8i64) != v11)
		{
			v12 = (unsigned int)(v12 + 1);
			v16 = (unsigned int)v12;
			if ((unsigned int)v12 >= v13)
				goto LABEL_10;
		}
		v17 = *(_QWORD*)(v15 + 8 * v12);
	}
	else
	{
	LABEL_10:
		v17 = 0i64;
	}
	if (!v14)
		goto LABEL_19;
	if (v17)
	{
		v18 = (unsigned int*)(v14 + 528);
		v19 = 10i64;
		v20 = v17 - v14 - 504;
		do
		{
			if (*(unsigned int*)((char*)v18 + v20))
			{
				v21 = sub_140246040(*v18);
				if (v21)
					v8 = *(_DWORD*)(v21 + 12);
			}
			++v18;
			--v19;
		} while (v19);
	}
	v22 = 1;
	if ((*(_BYTE*)(v14 + 16) & 1) == 0)
		LABEL_19:
	v22 = 4;
	v23 = a1[4];
	LODWORD(v35) = v22;
	v24 = *(_QWORD*)(v23 + 112);
	*(_QWORD*)((char*)&v35 + 4) = 0i64;
	HIDWORD(v35) = 0;
	if (*(_QWORD*)(v23 + 120) >= v24)
		sub_14005E2C0((__int64)a1);
	v25 = a1[5];
	if (v25 == a1[10])
		v26 = a1[15];
	else
		v26 = *(_QWORD*)(**(_QWORD**)(v25 + 8) + 24i64);
	v27 = sub_1400627D0((__int64)a1, 0x18ui64, v26);
	v28 = a1[2];
	*(_QWORD*)v28 = v27;
	*(_DWORD*)(v28 + 8) = 7;
	a1[2] += 16i64;
	v29 = v35;
	*(_QWORD*)(v27 + 48) = v8;
	*(_OWORD*)(v27 + 56) = __PAIR128__(*((unsigned __int64*)&v35 + 1), v29);
	v30 = a1[4];
	v31 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v32 = a1[2];
	v34 = v31;
	LODWORD(v35) = 4;
	sub_14005E8E0((__int64)a1, v30 + 160, (int*)&v34, v32);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 14059AB09: variable 'v9' is possibly undefined
// 14059AB38: variable 'v11' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

