//----- (0000000140524160) ----------------------------------------------------
void __fastcall sub_140524160(__int64 a1)
{
	__int16* v2; // rax
	__int64 v3; // rdx
	int* v4; // rdi
	int* v5; // r14
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	__int64 v8; // rcx
	__int16* v9; // rax
	__int64 v10; // rcx
	int* v11; // rbp
	int* v12; // rdi
	__int64 v13; // rbx
	unsigned __int64 v14; // rbx
	__int64 v15; // rcx
	__int16* v16; // rax
	__int64 v17; // rcx
	int* v18; // rsi
	int* v19; // rdi
	__int64 v20; // rbx
	unsigned __int64 v21; // rbx
	__int64 v22; // rcx
	__int128 v23[3]; // [rsp+40h] [rbp-58h] BYREF

	v2 = sub_14034BDD0(a1, 240575);
	v3 = 0i64;
	v4 = (int*)v2;
	v5 = 0i64;
	if (*v2)
	{
		do
			++v3;
		while (v2[v3]);
	}
	v6 = (2 * v3) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v6 + 1), 0);
	v7 = 2 * v6;
	sub_1407DB590(v5, v4, v7);
	if ((int*)((char*)v5 + v7))
		*(_WORD*)((char*)v5 + v7) = 0;
	v9 = sub_14034BDD0(v8, 240576);
	v10 = 0i64;
	v11 = 0i64;
	v12 = (int*)v9;
	if (*v9)
	{
		do
			++v10;
		while (v9[v10]);
	}
	v13 = (2 * v10) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v11 = sub_14018B280(2 * (v13 + 1), 0);
	v14 = 2 * v13;
	sub_1407DB590(v11, v12, v14);
	if ((int*)((char*)v11 + v14))
		*(_WORD*)((char*)v11 + v14) = 0;
	v16 = sub_14034BDD0(v15, 240577);
	v17 = 0i64;
	v18 = 0i64;
	v19 = (int*)v16;
	if (*v16)
	{
		do
			++v17;
		while (v16[v17]);
	}
	v20 = (2 * v17) >> 1;
	if ((unsigned __int64)(v20 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v18 = sub_14018B280(2 * (v20 + 1), 0);
	v21 = 2 * v20;
	sub_1407DB590(v18, v19, v21);
	if ((int*)((char*)v18 + v21))
		*(_WORD*)((char*)v18 + v21) = 0;
	sub_1407E4830((int*)v23, 0i64, 0x30ui64);
	sub_140584490(v22, 7, v23, *(_WORD**)(a1 + 16), (__int64)v5, (__int64)v11, (__int64)v18, *(_DWORD*)(a1 + 24));
	if (v18)
		sub_14018B900((__int64)v18, 0);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v5)
		sub_14018B900((__int64)v5, 0);
}
// 1405241F7: variable 'v8' is possibly undefined
// 14052425C: variable 'v15' is possibly undefined
// 1405242EC: variable 'v22' is possibly undefined
// 140524160: using guessed type __int128 var_58[3];

