//----- (0000000140641D80) ----------------------------------------------------
__int64 __fastcall sub_140641D80(__int64 a1, float* a2)
{
	int* v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	float v6; // xmm6_4
	int* v7; // rsi
	int* v8; // r8
	__int64 v9; // rcx
	unsigned int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rcx
	__int16* v13; // rbx
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rcx
	unsigned int v17; // eax
	__int64 v19[24]; // [rsp+30h] [rbp-F8h] BYREF
	__int128 v20; // [rsp+F0h] [rbp-38h]
	int* v21; // [rsp+100h] [rbp-28h]

	sub_1400B6F30((__int64)v19);
	v20 = 0i64;
	v21 = 0i64;
	v19[0] = (__int64)off_140B69230;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v20 = v3;
	*((_QWORD*)&v20 + 1) = v3;
	v21 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	if ((int)sub_1406416D0((__int64)v19, (__int64)a2, 0) >= 0)
	{
		v4 = sub_1403D90D0(qword_140C65898, *((_DWORD*)a2 + 6));
		if (v4)
		{
			v5 = sub_1400B7660(v19);
			v6 = a2[8];
			v7 = *(int**)(v5 + 8);
			if (v7)
			{
				v8 = (int*)&word_140B7B704;
				if (*(_QWORD*)(v4 + 16))
					v8 = *(int**)(v4 + 16);
				sub_140003890((__int64*)qword_140C658A0, 0x15u, 0i64, v7, *(_DWORD*)(v4 + 8), v8);
				sub_140475EF0(v4, v7, 1, v6);
			}
			if (!(unsigned int)sub_140472ED0(v4, *(_DWORD*)a2))
			{
				v10 = sub_140612DE0(v9, *((_DWORD*)a2 + 1), *(int**)(qword_140C65898 + 120));
				sub_140472ED0(v4, v10);
			}
		}
		else
		{
			v11 = sub_1404835C0(qword_140C65918, *((_DWORD*)a2 + 7));
			if (v11)
			{
				v13 = sub_14034BDD0(v12, *(_DWORD*)(v11 + 8));
				v14 = sub_1400B7660(v19);
				sub_140003890((__int64*)qword_140C658A0, 0x15u, 0i64, *(int**)(v14 + 8), 0, (int*)v13);
				v15 = sub_1406132E0(*(_DWORD*)a2);
				if (!v15)
				{
					v17 = sub_140612DE0(v16, *((_DWORD*)a2 + 1), *(int**)(qword_140C65898 + 120));
					v15 = sub_1406132E0(v17);
				}
				if (qword_140C7DC80 && v15)
					sub_140712C00((void(__fastcall***)(_QWORD))qword_140C7DC80, v15, (__int64)sub_140472EB0, 0i64);
			}
		}
	}
	if ((_QWORD)v20)
		sub_14018B900(v20, 0);
	sub_1400B7390(v19);
	return 0i64;
}
// 140641EBA: variable 'v9' is possibly undefined
// 140641EE5: variable 'v12' is possibly undefined
// 140641F30: variable 'v16' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C7DC80: using guessed type __int64 qword_140C7DC80;

