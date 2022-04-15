//----- (000000014067B9C0) ----------------------------------------------------
__int64 __fastcall sub_14067B9C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r15
	int* v4; // rax
	int* v5; // rax
	_QWORD* v6; // r12
	__int64 v7; // rax
	int* v8; // r14
	__int64 v9; // r13
	int* v10; // rax
	int* v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rax
	unsigned __int64* v14; // rdx
	unsigned __int64 v15; // r8
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v19; // [rsp+20h] [rbp-E0h] BYREF
	int* v20; // [rsp+28h] [rbp-D8h]
	int* v21; // [rsp+30h] [rbp-D0h]
	__int64 v22; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v23)(); // [rsp+40h] [rbp-C0h] BYREF
	char v24[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v25; // [rsp+50h] [rbp-B0h]
	_WORD* v26; // [rsp+58h] [rbp-A8h]
	__int128 v27; // [rsp+100h] [rbp+0h]
	int* v28; // [rsp+110h] [rbp+10h]

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		sub_1400B6F30((__int64)&v23);
		v27 = 0i64;
		v23 = off_140B69230;
		v28 = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v27 = v4;
		*((_QWORD*)&v27 + 1) = v4;
		v28 = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = sub_14018B280(96i64, 0);
		if (v5)
			v6 = (_QWORD*)sub_1404DB7E0((__int64)v5, *(_QWORD*)(qword_140C65898 + 120));
		else
			v6 = 0i64;
		v7 = 0i64;
		v8 = 0i64;
		v20 = 0i64;
		v21 = 0i64;
		v22 = 0i64;
		do
			++v7;
		while (word_140B0A7D8[v7]);
		v9 = (2 * v7) >> 1;
		if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v8 = sub_14018B280(2 * (v9 + 1), 0);
			v20 = v8;
			v21 = v8;
			v22 = (__int64)v8 + 2 * v9 + 2;
		}
		sub_1407DB590(v8, (int*)word_140B0A7D8, 2 * v9);
		v10 = (int*)((char*)v8 + 2 * v9);
		v21 = v10;
		if (v10)
			*(_WORD*)v10 = 0;
		sub_1400B7480((__int64)&v23, v6);
		(*(void(__fastcall**)(_QWORD*, __int64*))(*v6 + 72i64))(v6, &v19);
		if (v20)
			sub_14018B900((__int64)v20, 0);
		v11 = (int*)sub_14034BDD0(**(_QWORD**)(v3 + 48), *(_DWORD*)(**(_QWORD**)(v3 + 48) + 28i64));
		if (v11)
		{
			v12 = 0i64;
			if (*(_WORD*)v11)
			{
				do
					++v12;
				while (*((_WORD*)v11 + v12));
			}
			sub_14001C480((__int64)v24, v11, (int*)((char*)v11 + 2 * v12));
		}
		else if (v25 != v26)
		{
			*v25 = 0;
			v26 = v25;
		}
		v13 = sub_1400B7660(&v23);
		v14 = (unsigned __int64*)sub_14018F0E0(&v19, *(unsigned __int16**)(v13 + 8))[1];
		if (v14)
		{
			v15 = -1i64;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			sub_140058710((__int64)a1, v14, v15);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v20)
			sub_14018B900((__int64)v20, 0);
		if ((_QWORD)v27)
			sub_14018B900(v27, 0);
		sub_1400B7390(&v23);
	}
	else
	{
		v16 = (unsigned __int64*)sub_14018F0E0(&v19, word_1409F50DC)[1];
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
		if (v20)
			sub_14018B900((__int64)v20, 0);
	}
	return 1i64;
}
// 1409F50DC: using guessed type unsigned __int16 word_1409F50DC[2];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 14067B9C0: using guessed type char var_F8[8];

