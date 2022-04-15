//----- (00000001404BACA0) ----------------------------------------------------
__int64 __fastcall sub_1404BACA0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rbx
	unsigned int i; // edi
	int* v5; // rax
	int* v6; // r8
	_QWORD* v7; // rdx
	int* v8; // rdx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v10 = a1;
	v3 = (_QWORD*)(qword_140C659F0 + 504);
	sub_1404B4890(qword_140C659F0 + 504);
	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v5 = sub_14018B280(32i64, 0);
		v6 = v5;
		if (v5)
		{
			*v5 = 0;
			*((_QWORD*)v5 + 1) = 0i64;
			v10 = (__int64)v5;
		}
		else
		{
			v6 = 0i64;
			v10 = 0i64;
		}
		v7 = (_QWORD*)(*(_QWORD*)(a2 + 8) + 32i64 * i);
		*(_QWORD*)v6 = *v7;
		*((_QWORD*)v6 + 1) = v7[1];
		*((_QWORD*)v6 + 2) = v7[2];
		*((_QWORD*)v6 + 3) = v7[3];
		v8 = (int*)v3[2];
		if (v8 == (int*)v3[3])
		{
			sub_14010A1C0(v3, v8, &v10);
		}
		else
		{
			if (v8)
				*(_QWORD*)v8 = v6;
			v3[2] += 8i64;
		}
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingRandomResidenceListRecieved", &unk_1409D1036);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

