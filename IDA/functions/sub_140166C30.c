//----- (0000000140166C30) ----------------------------------------------------
__int64 __fastcall sub_140166C30(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // r15
	char* v4; // rax
	_DWORD* v5; // rax
	char* v6; // rax
	_DWORD* v7; // rax
	int v8; // ebx
	_DWORD* v9; // rax
	char* v10; // rax
	int* v11; // rsi
	unsigned __int64 v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // r8
	__int64 v15; // rdx
	int v16; // r9d
	int v17; // eax
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // [rsp+20h] [rbp-C8h] BYREF
	int* v21; // [rsp+28h] [rbp-C0h]
	int* v22; // [rsp+30h] [rbp-B8h]
	__int64 v23; // [rsp+40h] [rbp-A8h] BYREF
	unsigned __int16* v24; // [rsp+48h] [rbp-A0h]
	char v25[8]; // [rsp+60h] [rbp-88h] BYREF
	__int64 v26; // [rsp+68h] [rbp-80h]
	char v27[8]; // [rsp+80h] [rbp-68h] BYREF
	__int64 v28; // [rsp+88h] [rbp-60h]
	int v29; // [rsp+A0h] [rbp-48h]
	unsigned int v30; // [rsp+B4h] [rbp-34h]
	__int64 v31; // [rsp+C0h] [rbp-28h] BYREF
	int* v32; // [rsp+C8h] [rbp-20h]
	int* v33; // [rsp+D0h] [rbp-18h]

	result = sub_1401657E0(a1);
	v3 = (_QWORD*)result;
	if (result)
	{
		v4 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v31, v4);
		v5 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v6 = (char*)&unk_1409D05AE;
		else
			v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v20, v6);
		v7 = (_DWORD*)(a1[3] + 48i64);
		if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
			v8 = 10;
		else
			v8 = sub_140056D60(a1, 4u);
		v9 = (_DWORD*)(a1[3] + 64i64);
		if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
			v10 = (char*)&unk_1409D05DF;
		else
			v10 = (char*)sub_140056BB0(a1, 5u, 0i64);
		sub_14018F2D0(&v23, v10);
		sub_14015CBE0((__int64)v25);
		v11 = v32;
		sub_14001C480((__int64)v25, v32, v33);
		sub_14001C480((__int64)v27, v21, v22);
		v29 = v8;
		v12 = (unsigned int)sub_140142170(qword_140C63678, v24);
		sub_1401429A0(qword_140C63678, v30);
		v13 = qword_140C63678;
		v30 = v12;
		if (v12 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v14 = *(_QWORD*)(qword_140C63678 + 40);
			v15 = 32i64 * (unsigned int)v12;
			v16 = *(_DWORD*)(v15 + v14 + 16);
			if ((unsigned int)(v16 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v15 + v14 + 16) = v16 + 1;
		}
		sub_1401429A0(v13, v12);
		v17 = sub_14015F870(v3, (__int64)v25);
		v18 = a1[2];
		*(_DWORD*)(v18 + 8) = 3;
		*(double*)v18 = (double)v17;
		v19 = qword_140C63678;
		a1[2] += 16i64;
		sub_1401429A0(v19, v12);
		if (v28)
			sub_14018B900(v28, 0);
		if (v26)
			sub_14018B900(v26, 0);
		if (v24)
			sub_14018B900((__int64)v24, 0);
		if (v21)
			sub_14018B900((__int64)v21, 0);
		if (v11)
			sub_14018B900((__int64)v11, 0);
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140166C30: using guessed type char var_88[8];
// 140166C30: using guessed type char var_68[8];

