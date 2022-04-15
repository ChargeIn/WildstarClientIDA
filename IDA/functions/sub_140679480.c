//----- (0000000140679480) ----------------------------------------------------
__int64 __fastcall sub_140679480(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // r13
	int* v5; // rcx
	int* v6; // rcx
	_QWORD* v7; // r15
	__int64 v8; // rax
	int* v9; // r14
	__int64 v10; // r12
	int* v11; // rax
	__int64 v12; // rcx
	int* v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rax
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	__int64 v21; // [rsp+20h] [rbp-E0h] BYREF
	int* v22; // [rsp+28h] [rbp-D8h]
	int* v23; // [rsp+30h] [rbp-D0h]
	__int64 v24; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v25)(); // [rsp+40h] [rbp-C0h] BYREF
	char v26[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v27; // [rsp+50h] [rbp-B0h]
	_WORD* v28; // [rsp+58h] [rbp-A8h]
	__int128 v29; // [rsp+100h] [rbp+0h]
	int* v30; // [rsp+110h] [rbp+10h]

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		sub_1400B6F30((__int64)&v25);
		v29 = 0i64;
		v25 = off_140B69230;
		v30 = 0i64;
		v5 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v29 = v5;
		*((_QWORD*)&v29 + 1) = v5;
		v30 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		v6 = sub_14018B280(96i64, 0);
		if (v6)
			v7 = (_QWORD*)sub_1404DB7E0((__int64)v6, *(_QWORD*)(qword_140C65898 + 120));
		else
			v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		v22 = 0i64;
		v23 = 0i64;
		v24 = 0i64;
		do
			++v8;
		while (word_140B0A7D8[v8]);
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v9 = sub_14018B280(2 * (v10 + 1), 0);
			v22 = v9;
			v23 = v9;
			v24 = (__int64)v9 + 2 * v10 + 2;
		}
		sub_1407DB590(v9, (int*)word_140B0A7D8, 2 * v10);
		v11 = (int*)((char*)v9 + 2 * v10);
		v23 = v11;
		if (v11)
			*(_WORD*)v11 = 0;
		sub_1400B7480((__int64)&v25, v7);
		(*(void(__fastcall**)(_QWORD*, __int64*))(*v7 + 72i64))(v7, &v21);
		v12 = (__int64)v22;
		if (v22)
			sub_14018B900((__int64)v22, 0);
		v13 = (int*)sub_14034BDD0(v12, *(_DWORD*)(*(_QWORD*)v4 + 8i64));
		if (v13)
		{
			v14 = 0i64;
			if (*(_WORD*)v13)
			{
				do
					++v14;
				while (*((_WORD*)v13 + v14));
			}
			sub_14001C480((__int64)v26, v13, (int*)((char*)v13 + 2 * v14));
		}
		else if (v27 != v28)
		{
			*v27 = 0;
			v28 = v27;
		}
		v15 = sub_1400B7660(&v25);
		v16 = (unsigned __int64*)sub_14018F0E0(&v21, *(unsigned __int16**)(v15 + 8))[1];
		if (v16)
		{
			v17 = -1i64;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			sub_140058710((__int64)a1, v16, v17);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v22)
			sub_14018B900((__int64)v22, 0);
		if ((_QWORD)v29)
			sub_14018B900(v29, 0);
		sub_1400B7390(&v25);
	}
	else
	{
		v18 = (unsigned __int64*)sub_14018F0E0(&v21, word_1409F4BB4)[1];
		if (v18)
		{
			v19 = -1i64;
			do
				++v19;
			while (*((_BYTE*)v18 + v19));
			sub_140058710((__int64)a1, v18, v19);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v22)
			sub_14018B900((__int64)v22, 0);
	}
	return 1i64;
}
// 140679667: variable 'v12' is possibly undefined
// 1409F4BB4: using guessed type unsigned __int16 word_1409F4BB4[12];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140679480: using guessed type char var_F8[8];

