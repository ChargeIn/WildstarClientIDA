//----- (00000001406F7B60) ----------------------------------------------------
__int64 __fastcall sub_1406F7B60(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // rax
	_DWORD* v6; // rax
	int v7; // esi
	_DWORD* v8; // rax
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // r8
	_QWORD* v14; // rcx
	__int64 v15; // rax
	unsigned __int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // r9
	__int64 v21; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v22; // [rsp+28h] [rbp-20h]
	__int64 v23; // [rsp+30h] [rbp-18h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = (_DWORD*)a1[3];
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || (int)v6[2] <= 0)
		v7 = 1;
	else
		v7 = sub_140056D60(a1, 1u);
	v8 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v9 = 0;
	else
		v9 = sub_140056D60(a1, 2u);
	v23 = 0i64;
	if (v7 == 15 && v9 == 1)
	{
		v22 = 0x10000000Fi64;
		v10 = 0i64;
		if (qword_140C7DE20)
		{
			while (1)
			{
				v11 = *(_QWORD*)(qword_140C7DE18 + 8 * v10);
				if (v11)
				{
					if (*(_DWORD*)(v11 + 16) == 3)
						break;
				}
				if (++v10 >= (unsigned __int64)qword_140C7DE20)
					goto LABEL_25;
			}
			v1 = *(unsigned int*)(v11 + 504);
		}
	}
	else
	{
		v22 = __PAIR64__(v9, v7);
		if ((unsigned int)(v7 - 1) <= 0xD)
			v1 = *(_QWORD*)(qword_140C65898 + 8i64 * v7 + 5616);
	}
LABEL_25:
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v12 = a1[5];
	if (v12 == a1[10])
		v13 = a1[15];
	else
		v13 = *(_QWORD*)(**(_QWORD**)(v12 + 8) + 24i64);
	v14 = (_QWORD*)sub_1400627D0((__int64)a1, 0x18ui64, v13);
	v15 = a1[2];
	*(_QWORD*)v15 = v14;
	*(_DWORD*)(v15 + 8) = 7;
	a1[2] += 16i64;
	v16 = v22;
	v14[6] = v1;
	v14[7] = v16;
	v14[8] = v23;
	v17 = a1[4];
	v18 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v19 = a1[2];
	v21 = v18;
	LODWORD(v22) = 4;
	sub_14005E8E0((__int64)a1, v17 + 160, (int*)&v21, v19);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

