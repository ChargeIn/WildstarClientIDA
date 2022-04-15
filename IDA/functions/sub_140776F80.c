//----- (0000000140776F80) ----------------------------------------------------
__int64 __fastcall sub_140776F80(__int64 a1, int a2, int* a3, int* a4, int* a5, _QWORD* a6)
{
	unsigned __int64 v6; // rdi
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rdx
	__int64 v15; // rax
	int* v16; // rax
	int* v17; // rsi
	__int64 v18; // rbp
	__int64 v19; // rax
	int* v20; // rcx
	__int64 v21; // r10
	unsigned __int64 v22; // rcx
	int* v23; // rax
	char v24; // dl
	__int64 v26; // [rsp+30h] [rbp-38h] BYREF
	int* v27; // [rsp+38h] [rbp-30h]
	int* v28; // [rsp+40h] [rbp-28h]
	int* v29; // [rsp+48h] [rbp-20h]

	v6 = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v11 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 16) = v11;
	*(_QWORD*)(a1 + 24) = v11;
	*(_QWORD*)(a1 + 32) = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	v12 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 48) = v12;
	*(_QWORD*)(a1 + 56) = v12;
	*(_QWORD*)(a1 + 64) = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	v13 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 80) = v13;
	*(_QWORD*)(a1 + 88) = v13;
	*(_QWORD*)(a1 + 96) = v13 + 4;
	if (v13)
		*(_WORD*)v13 = 0;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	v14 = (int*)&unk_1409F9C34;
	v15 = 0i64;
	*(_DWORD*)a1 = a2;
	if (a3)
		v14 = a3;
	if (*(_WORD*)v14)
	{
		do
			++v15;
		while (*((_WORD*)v14 + v15));
	}
	sub_14001C480(a1 + 72, v14, (int*)((char*)v14 + 2 * v15));
	v16 = sub_14018B280(16i64, 0);
	v17 = v16;
	v27 = v16;
	v18 = (__int64)v16;
	v28 = v16;
	v29 = v16 + 4;
	if (v16)
		*(_WORD*)v16 = 0;
	v19 = 0i64;
	v20 = (int*)&unk_1409F9C0C;
	if (*(_QWORD*)(qword_140C65898 + 136))
		v20 = *(int**)(qword_140C65898 + 136);
	if (*(_WORD*)v20)
	{
		do
			++v19;
		while (*((_WORD*)v20 + v19));
	}
	if ((2 * v19) >> 1)
	{
		sub_14001C310(&v26, v20, (int*)((char*)v20 + 2 * v19));
		v18 = (__int64)v28;
		v17 = v27;
	}
	else
	{
		sub_1407DB590(v17, v20, 0i64);
	}
	v21 = *(_QWORD*)(a1 + 80);
	v22 = (*(_QWORD*)(a1 + 88) - v21) >> 1;
	if (v22 == (v18 - (__int64)v17) >> 1)
	{
		if (!v22)
		{
		LABEL_25:
			v24 = 1;
			goto LABEL_26;
		}
		v23 = v17;
		while (*(_WORD*)((char*)v23 + v21 - (_QWORD)v17) == *(_WORD*)v23)
		{
			++v6;
			v23 = (int*)((char*)v23 + 2);
			if (v6 >= v22)
				goto LABEL_25;
		}
	}
	if (v21 == *(_QWORD*)(a1 + 88))
		goto LABEL_25;
	v24 = 0;
LABEL_26:
	sub_1407771F0(a1, v24, a4, a5, a6);
	if (v17)
		sub_14018B900((__int64)v17, 0);
	return a1;
}
// 1407771DF: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140C65898: using guessed type __int64 qword_140C65898;

