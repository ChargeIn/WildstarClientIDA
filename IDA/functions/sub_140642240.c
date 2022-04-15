//----- (0000000140642240) ----------------------------------------------------
__int64 __fastcall sub_140642240(__int64 a1, unsigned int* a2)
{
	int* v3; // rax
	__int64 v4; // rax
	int* v5; // rdi
	int* v6; // rbp
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	int v9; // r9d
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v13[24]; // [rsp+40h] [rbp-E8h] BYREF
	__int128 v14; // [rsp+100h] [rbp-28h]
	int* v15; // [rsp+110h] [rbp-18h]

	sub_1400B6F30((__int64)v13);
	v14 = 0i64;
	v13[0] = (__int64)off_140B69230;
	v15 = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v14 = v3;
	*((_QWORD*)&v14 + 1) = v3;
	v15 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	if ((int)sub_1406416D0((__int64)v13, (__int64)a2, 0) >= 0)
	{
		v4 = sub_1400B7660(v13);
		v5 = 0i64;
		v6 = *(int**)(v4 + 8);
		v7 = (__int64)(*(_QWORD*)(v4 + 16) - (_QWORD)v6) >> 1;
		if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v5 = sub_14018B280(2 * (v7 + 1), 0);
		v8 = 2 * v7;
		sub_1407DB590(v5, v6, v8);
		if ((int*)((char*)v5 + v8))
			*(_WORD*)((char*)v5 + v8) = 0;
		if (v5)
		{
			sub_140211280(*a2);
			v9 = a2[8];
			if (v9)
			{
				sub_14042A360(*(_QWORD*)(qword_140C65898 + 29504), a2[7], (__int16*)v5, v9, a2[9]);
				sub_140003890((__int64*)qword_140C658A0, 0x17u, 0i64, v5, 0, 0i64);
			}
		}
		v10 = a2[6];
		if ((_DWORD)v10)
		{
			v11 = *(_QWORD*)(qword_140C63628 + 728);
			if (v11)
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v11 + 16i64))(
					v11,
					v10,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
		}
		if (v5)
			sub_14018B900((__int64)v5, 0);
	}
	if ((_QWORD)v14)
		sub_14018B900(v14, 0);
	sub_1400B7390(v13);
	return 0i64;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

