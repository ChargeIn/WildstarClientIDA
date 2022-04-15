//----- (00000001404BA4F0) ----------------------------------------------------
__int64 __fastcall sub_1404BA4F0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rbp
	__int64 i; // r14
	int* v5; // rax
	__int64 v6; // rdx
	int* v7; // r15
	_QWORD* v8; // rdx
	int* v9; // rsi
	__int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	unsigned __int64 v13; // kr00_8
	int* v14; // rbx
	int* v15; // rdx
	__int64 v17; // [rsp+50h] [rbp+8h] BYREF

	v17 = a1;
	v3 = (_QWORD*)(qword_140C659F0 + 272);
	sub_1404B4800(qword_140C659F0 + 272);
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a2 + 4); i = (unsigned int)(i + 1))
	{
		v5 = sub_14018B280(48i64, 0);
		v6 = *(_QWORD*)(a2 + 8);
		v7 = v5;
		v17 = (__int64)v5;
		v8 = (_QWORD*)(48 * i + v6);
		*(_QWORD*)v5 = *v8;
		*((_QWORD*)v5 + 1) = v8[1];
		*((_QWORD*)v5 + 2) = v8[2];
		*((_QWORD*)v5 + 3) = v8[3];
		*((_QWORD*)v5 + 4) = v8[4];
		*((_QWORD*)v5 + 5) = v8[5];
		v9 = *(int**)(*(_QWORD*)(a2 + 8) + 48 * i + 24);
		v10 = 0i64;
		if (*(_WORD*)v9)
		{
			do
				++v10;
			while (*((_WORD*)v9 + v10));
		}
		v11 = v10 + 1;
		v13 = v10 + 1;
		v12 = 2 * (v10 + 1);
		if (!is_mul_ok(v13, 2ui64))
			v12 = -1i64;
		v14 = sub_14018B280(v12, 0);
		sub_1407DB590(v14, v9, 2 * v11);
		*((_QWORD*)v7 + 3) = v14;
		v15 = (int*)v3[2];
		if (v15 == (int*)v3[3])
		{
			sub_14010A1C0(v3, v15, &v17);
		}
		else
		{
			if (v15)
				*(_QWORD*)v15 = v7;
			v3[2] += 8i64;
		}
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingNeighborhoodRecieved", &unk_1409D0F86);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

