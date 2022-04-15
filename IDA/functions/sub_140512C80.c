//----- (0000000140512C80) ----------------------------------------------------
__int64 __fastcall sub_140512C80(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	int* v4; // rdi
	int* v5; // rax
	__int64* v6; // rcx
	int v7; // eax
	int v8; // edx
	__int64 v9; // rcx
	__int16* v10; // rax
	int* v11; // rdx
	__int64 v12; // rbx
	int* v13; // rax
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	__int64 v17; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_14018B280(80i64, 0);
	v3 = 0i64;
	v4 = v2;
	if (v2)
	{
		*((_QWORD*)v2 + 5) = 0i64;
		*((_QWORD*)v2 + 6) = 0i64;
		*((_QWORD*)v2 + 7) = 0i64;
		v5 = sub_14018B280(16i64, 0);
		*((_QWORD*)v4 + 5) = v5;
		*((_QWORD*)v4 + 6) = v5;
		*((_QWORD*)v4 + 7) = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
	}
	else
	{
		v4 = 0i64;
	}
	*v4 = 5;
	sub_1400F0A10(a1, 1, (__int64)"x", (float*)v4 + 4);
	sub_1400F0A10(a1, 1, (__int64)"y", (float*)v4 + 5);
	sub_1400F0A10(a1, 1, (__int64)"z", (float*)v4 + 6);
	v6 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 16i64) < *(_QWORD*)(a1 + 16))
		v6 = (__int64*)(*(_QWORD*)(a1 + 24) + 16i64);
	v7 = *((_DWORD*)v6 + 2);
	if (v7 == 3)
		goto LABEL_11;
	if (v7 == 4 && sub_14005AC80((char*)(*v6 + 32), (unsigned __int64*)&v17))
	{
		v16 = 3;
		v6 = &v15;
		v15 = v17;
	LABEL_11:
		v8 = (int)*(double*)v6;
		goto LABEL_12;
	}
	v8 = 0;
LABEL_12:
	v4[17] = v8;
	v9 = *(_QWORD*)(sub_1405A8A40((__int64)v6, v8) + 8);
	if (v9)
		v10 = sub_14034BDD0(v9, *(_DWORD*)(v9 + 4));
	else
		v10 = (__int16*)&unk_1409F28B4;
	v11 = (int*)&unk_1409F153C;
	if (v10)
		v11 = (int*)v10;
	if (*(_WORD*)v11)
	{
		do
			++v3;
		while (*((_WORD*)v11 + v3));
	}
	sub_14001C480((__int64)(v4 + 8), v11, (int*)((char*)v11 + 2 * v3));
	v12 = qword_140C7D5E8;
	v13 = sub_14018B280(24i64, 0);
	if (v13 != (int*)-16i64)
		*((_QWORD*)v13 + 2) = v4;
	*(_QWORD*)v13 = v12;
	*((_QWORD*)v13 + 1) = *(_QWORD*)(v12 + 8);
	**(_QWORD**)(v12 + 8) = v13;
	*(_QWORD*)(v12 + 8) = v13;
	return 0i64;
}
// 140512D80: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C7D5E8: using guessed type __int64 qword_140C7D5E8;

