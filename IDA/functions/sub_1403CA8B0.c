#include "../winhttp.h"

//----- (00000001403CA8B0) ----------------------------------------------------
int** __fastcall sub_1403CA8B0(__int64 a1, int** a2, unsigned int a3, __int64 a4)
{
	__int64 v6; // r13
	int* v7; // rax
	int* v8; // rdx
	_QWORD* v9; // r14
	int* v10; // rax
	__int64 v11; // rax
	int* v12; // rdi
	__int64 v13; // r15
	int* v14; // rax
	__int64 v15; // rcx
	int* v16; // rdx
	__int64 v17; // rax
	__int64 v18; // r14
	__int64 v19; // rbx
	int* v20; // rax
	int* v21; // rdi
	unsigned __int64 v22; // rbx
	__int64 v23; // rcx
	int* v24; // rax
	int* v25; // rax
	char v27[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v28; // [rsp+28h] [rbp-D8h]
	int* v29; // [rsp+30h] [rbp-D0h]
	__int64 v30; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v31)(); // [rsp+40h] [rbp-C0h] BYREF
	char v32[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v33; // [rsp+50h] [rbp-B0h]
	_WORD* v34; // [rsp+58h] [rbp-A8h]
	__int128 v35; // [rsp+100h] [rbp+0h]
	int* v36; // [rsp+110h] [rbp+10h]

	v6 = sub_1401F1860(a3);
	if (v6 && a4)
	{
		v7 = sub_14018B280(96i64, 0);
		if (v7)
		{
			v8 = (int*)&word_140B7B704;
			if (*(_QWORD*)(a4 + 16))
				v8 = *(int**)(a4 + 16);
			v9 = (_QWORD*)sub_1404DDB40((__int64)v7, v8);
		}
		else
		{
			v9 = 0i64;
		}
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*v9 + 120i64))(v9, *(unsigned int*)(a4 + 52));
		sub_1400B6F30((__int64)&v31);
		v31 = off_140B69230;
		v36 = 0i64;
		v35 = 0i64;
		v10 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v35 = v10;
		*((_QWORD*)&v35 + 1) = v10;
		v36 = v10 + 4;
		if (v10)
			*(_WORD*)v10 = 0;
		v11 = 0i64;
		v12 = 0i64;
		v28 = 0i64;
		v29 = 0i64;
		v30 = 0i64;
		do
			++v11;
		while (word_140B0A7C8[v11]);
		v13 = (2 * v11) >> 1;
		if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v12 = sub_14018B280(2 * (v13 + 1), 0);
			v28 = v12;
			v29 = v12;
			v30 = (__int64)v12 + 2 * v13 + 2;
		}
		sub_1407DB590(v12, (int*)word_140B0A7C8, 2 * v13);
		v14 = (int*)((char*)v12 + 2 * v13);
		v29 = v14;
		if (v14)
			*(_WORD*)v14 = 0;
		sub_1400B7480((__int64)&v31, v9);
		(*(void(__fastcall**)(_QWORD*, char*))(*v9 + 72i64))(v9, v27);
		v15 = (__int64)v28;
		if (v28)
			sub_14018B900((__int64)v28, 0);
		v16 = (int*)sub_14034BDD0(v15, *(_DWORD*)(v6 + 8));
		if (v16)
		{
			v17 = 0i64;
			if (*(_WORD*)v16)
			{
				do
					++v17;
				while (*((_WORD*)v16 + v17));
			}
			sub_14001C480((__int64)v32, v16, (int*)((char*)v16 + 2 * v17));
		}
		else if (v33 != v34)
		{
			*v33 = 0;
			v34 = v33;
		}
		v18 = sub_1400B7660(&v31);
		v19 = (__int64)(*(_QWORD*)(v18 + 16) - *(_QWORD*)(v18 + 8)) >> 1;
		v20 = sub_14018B280(2 * v19 + 18, 0);
		if (v20)
		{
			*((_QWORD*)v20 + 1) = v19;
			*(_QWORD*)v20 = off_140B55060;
		}
		else
		{
			v20 = 0i64;
		}
		v21 = v20 + 4;
		v22 = 2 * v19;
		sub_1407DB590(v20 + 4, *(int**)(v18 + 8), v22);
		*(_WORD*)((char*)v21 + v22) = 0;
		v23 = v35;
		*a2 = v21;
		if (v23)
			sub_14018B900(v23, 0);
		sub_1400B7390(&v31);
	}
	else
	{
		v24 = sub_14018B280(18i64, 0);
		if (v24)
		{
			*((_QWORD*)v24 + 1) = 0i64;
			*(_QWORD*)v24 = off_140B55060;
		}
		else
		{
			v24 = 0i64;
		}
		v25 = v24 + 4;
		*a2 = v25;
		*(_WORD*)v25 = 0;
	}
	return a2;
}
// 1403CAA52: variable 'v15' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 1403CA8B0: using guessed type char var_120[8];
// 1403CA8B0: using guessed type char var_F8[8];

