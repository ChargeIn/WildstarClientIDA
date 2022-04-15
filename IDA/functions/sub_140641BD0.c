//----- (0000000140641BD0) ----------------------------------------------------
__int64 __fastcall sub_140641BD0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdi
	int* v4; // rsi
	int* v5; // rax
	int* v6; // r9
	int* v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rcx
	unsigned int v11; // eax
	__int64 v13[24]; // [rsp+30h] [rbp-E8h] BYREF
	__int128 v14; // [rsp+F0h] [rbp-28h]
	int* v15; // [rsp+100h] [rbp-18h]

	v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 24));
	if (v3)
	{
		v4 = *(int**)(qword_140C65898 + 120);
		sub_1400B6F30((__int64)v13);
		v15 = 0i64;
		v14 = 0i64;
		v13[0] = (__int64)off_140B69230;
		v5 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v14 = v5;
		*((_QWORD*)&v14 + 1) = v5;
		v15 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		if ((int)sub_1406416D0((__int64)v13, a2, 0) >= 0)
		{
			if (*(_DWORD*)(a2 + 28))
			{
				v6 = *(int**)(sub_1400B7660(v13) + 8);
				if (v6)
				{
					v7 = (int*)&word_140B7B704;
					if (*(_QWORD*)(v3 + 16))
						v7 = *(int**)(v3 + 16);
					sub_140003890((__int64*)qword_140C658A0, 8u, 0i64, v6, *(_DWORD*)(v3 + 8), v7);
				}
			}
			else if (*(_DWORD*)(a2 + 32))
			{
				v8 = sub_1400B7660(v13);
				sub_140475EF0(v3, *(int**)(v8 + 8), 1, *(float*)(a2 + 36));
			}
			else
			{
				v9 = sub_1400B7660(v13);
				sub_1403E0020(v3, *(int**)(v9 + 8), 1, *(float*)(a2 + 36));
			}
			if (!(unsigned int)sub_140472ED0(v3, *(_DWORD*)a2))
			{
				v11 = sub_140612DE0(v10, *(_DWORD*)(a2 + 4), v4);
				sub_140472ED0(v3, v11);
			}
		}
		if ((_QWORD)v14)
			sub_14018B900(v14, 0);
		sub_1400B7390(v13);
	}
	return 0i64;
}
// 140641D2D: variable 'v10' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

