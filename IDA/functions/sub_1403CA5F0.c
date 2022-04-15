//----- (00000001403CA5F0) ----------------------------------------------------
int** __fastcall sub_1403CA5F0(__int64 a1, int** a2, unsigned int a3)
{
	__int64 v5; // r13
	int* v6; // rax
	_QWORD* v7; // r14
	int* v8; // rax
	__int64 v9; // rax
	int* v10; // rdi
	__int64 v11; // r15
	int* v12; // rax
	__int64 v13; // rcx
	int* v14; // rdx
	__int64 v15; // rax
	__int64 v16; // r14
	__int64 v17; // rbx
	int* v18; // rax
	int* v19; // rdi
	unsigned __int64 v20; // rbx
	__int64 v21; // rcx
	int* v22; // rax
	int* v23; // rax
	char v25[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v26; // [rsp+28h] [rbp-D8h]
	int* v27; // [rsp+30h] [rbp-D0h]
	__int64 v28; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v29)(); // [rsp+40h] [rbp-C0h] BYREF
	char v30[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v31; // [rsp+50h] [rbp-B0h]
	_WORD* v32; // [rsp+58h] [rbp-A8h]
	__int128 v33; // [rsp+100h] [rbp+0h]
	int* v34; // [rsp+110h] [rbp+10h]

	v5 = sub_1401F1860(a3);
	if (v5 && *(_QWORD*)(a1 + 120))
	{
		v6 = sub_14018B280(88i64, 0);
		if (v6)
			v7 = sub_1400B6390(v6);
		else
			v7 = 0i64;
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*v7 + 120i64))(v7, *(unsigned int*)(*(_QWORD*)(a1 + 120) + 52i64));
		sub_1400B6F30((__int64)&v29);
		v29 = off_140B69230;
		v34 = 0i64;
		v33 = 0i64;
		v8 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v33 = v8;
		*((_QWORD*)&v33 + 1) = v8;
		v34 = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
		v9 = 0i64;
		v10 = 0i64;
		v26 = 0i64;
		v27 = 0i64;
		v28 = 0i64;
		do
			++v9;
		while (word_140B0A7C8[v9]);
		v11 = (2 * v9) >> 1;
		if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v10 = sub_14018B280(2 * (v11 + 1), 0);
			v26 = v10;
			v27 = v10;
			v28 = (__int64)v10 + 2 * v11 + 2;
		}
		sub_1407DB590(v10, (int*)word_140B0A7C8, 2 * v11);
		v12 = (int*)((char*)v10 + 2 * v11);
		v27 = v12;
		if (v12)
			*(_WORD*)v12 = 0;
		sub_1400B7480((__int64)&v29, v7);
		(*(void(__fastcall**)(_QWORD*, char*))(*v7 + 72i64))(v7, v25);
		v13 = (__int64)v26;
		if (v26)
			sub_14018B900((__int64)v26, 0);
		v14 = (int*)sub_14034BDD0(v13, *(_DWORD*)(v5 + 12));
		if (v14)
		{
			v15 = 0i64;
			if (*(_WORD*)v14)
			{
				do
					++v15;
				while (*((_WORD*)v14 + v15));
			}
			sub_14001C480((__int64)v30, v14, (int*)((char*)v14 + 2 * v15));
		}
		else if (v31 != v32)
		{
			*v31 = 0;
			v32 = v31;
		}
		v16 = sub_1400B7660(&v29);
		v17 = (__int64)(*(_QWORD*)(v16 + 16) - *(_QWORD*)(v16 + 8)) >> 1;
		v18 = sub_14018B280(2 * v17 + 18, 0);
		if (v18)
		{
			*((_QWORD*)v18 + 1) = v17;
			*(_QWORD*)v18 = off_140B55060;
		}
		else
		{
			v18 = 0i64;
		}
		v19 = v18 + 4;
		v20 = 2 * v17;
		sub_1407DB590(v18 + 4, *(int**)(v16 + 8), v20);
		*(_WORD*)((char*)v19 + v20) = 0;
		v21 = v33;
		*a2 = v19;
		if (v21)
			sub_14018B900(v21, 0);
		sub_1400B7390(&v29);
	}
	else
	{
		v22 = sub_14018B280(18i64, 0);
		if (v22)
		{
			*((_QWORD*)v22 + 1) = 0i64;
			*(_QWORD*)v22 = off_140B55060;
		}
		else
		{
			v22 = 0i64;
		}
		v23 = v22 + 4;
		*a2 = v23;
		*(_WORD*)v23 = 0;
	}
	return a2;
}
// 1403CA78B: variable 'v13' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 1403CA5F0: using guessed type char var_120[8];
// 1403CA5F0: using guessed type char var_F8[8];

