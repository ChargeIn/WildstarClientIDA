//----- (00000001403F5E40) ----------------------------------------------------
void __fastcall sub_1403F5E40(__int64 a1, int a2, int* a3, __int128* a4, int a5, int a6, int a7, __int128* a8, int a9)
{
	__int64 v9; // rdi
	__int64 v11; // rax
	__int128 v12; // xmm9
	__int128 v13; // xmm10
	__int128 v14; // xmm11
	__int64 v15; // rbx
	int* v16; // rax
	int* v17; // rdi
	int* v18; // rsi
	__int64 v19; // r8
	int* v20; // rdx
	__int64 v22; // [rsp+28h] [rbp-D0h] BYREF
	__int128 v23; // [rsp+30h] [rbp-C8h]
	__int64 v24; // [rsp+40h] [rbp-B8h]

	v9 = qword_140C65898;
	v24 = 0i64;
	v23 = 0i64;
	v11 = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v11;
		while (*((_WORD*)a3 + v11));
	}
	sub_14001C1B0(&v22, a3, (__int64)a3 + 2 * v11);
	v12 = *a4;
	v13 = a4[1];
	v14 = *a8;
	v15 = *(_QWORD*)(v9 + 31896);
	v16 = sub_14018B280(128i64, 0);
	v17 = v16;
	v18 = v16 + 4;
	if (v16 != (int*)-16i64)
	{
		v19 = *((_QWORD*)&v23 + 1);
		v20 = (int*)v23;
		*v18 = a2;
		*((_QWORD*)v16 + 4) = 0i64;
		*((_QWORD*)v16 + 5) = 0i64;
		*((_QWORD*)v16 + 6) = 0i64;
		sub_14001C1B0((_QWORD*)v16 + 3, v20, v19);
		v18[13] = a9;
		v18[10] = a5;
		v18[11] = a6;
		v18[12] = a7;
		*((_OWORD*)v18 + 4) = v12;
		*((_OWORD*)v18 + 5) = v13;
		*((_OWORD*)v18 + 6) = v14;
	}
	*(_QWORD*)v17 = v15;
	*((_QWORD*)v17 + 1) = *(_QWORD*)(v15 + 8);
	**(_QWORD**)(v15 + 8) = v17;
	*(_QWORD*)(v15 + 8) = v17;
	if ((_QWORD)v23)
		sub_14018B900(v23, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;

