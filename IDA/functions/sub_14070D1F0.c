//----- (000000014070D1F0) ----------------------------------------------------
__int64 __fastcall sub_14070D1F0(_QWORD* a1)
{
	unsigned int v2; // edi
	char* v3; // rax
	char* v4; // rax
	_DWORD* v5; // rcx
	char* v6; // rdx
	_DWORD* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx
	void* v10; // rsi
	unsigned int v11; // r9d
	__int64 v12; // rdi
	__int64 v14; // [rsp+30h] [rbp-88h] BYREF
	__int64 v15; // [rsp+38h] [rbp-80h]
	__int64 v16; // [rsp+50h] [rbp-68h] BYREF
	void* lpv; // [rsp+58h] [rbp-60h]
	__int64 v18; // [rsp+70h] [rbp-48h] BYREF
	__int64 v19[3]; // [rsp+78h] [rbp-40h]
	__int64 v20; // [rsp+90h] [rbp-28h] BYREF
	__int64 v21[3]; // [rsp+98h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v20, v3);
	v4 = (char*)sub_14018F0E0(&v14, word_1409F8B74)[1];
	v5 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v4 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v18, v4);
	if (v15)
		sub_14018B900(v15, 0);
	v6 = (char*)sub_14018F0E0(&v14, word_1409F8B44)[1];
	v7 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v7 < a1[2] && v7 != dword_140A12138 && *(int*)(a1[3] + 56i64) > 0)
		v6 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v16, v6);
	v8 = v15;
	if (v15)
		sub_14018B900(v15, 0);
	v9 = v21[0];
	v10 = lpv;
	v11 = v2;
	v12 = v19[0];
	sub_1405DE4D0(v8, v21[0], v19[0], v11, lpv);
	if (v10)
		sub_14018B900((__int64)v10, 0);
	if (v12)
		sub_14018B900(v12, 0);
	if (v9)
		sub_14018B900(v9, 0);
	return 0i64;
}
// 14070D30D: variable 'v8' is possibly undefined
// 1409F8B44: using guessed type unsigned __int16 word_1409F8B44[16];
// 1409F8B74: using guessed type unsigned __int16 word_1409F8B74[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 14070D1F0: using guessed type __int64 var_20[3];
// 14070D1F0: using guessed type __int64 var_40[3];

