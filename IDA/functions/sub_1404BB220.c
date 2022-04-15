//----- (00000001404BB220) ----------------------------------------------------
__int64 __fastcall sub_1404BB220(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rbx
	__int64 i; // rdi
	int* v5; // rax
	_QWORD* v6; // r8
	int* v7; // rdx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v9 = a1;
	if (!*(_DWORD*)(a2 + 16))
	{
		v3 = (_QWORD*)(qword_140C659F0 + 240);
		sub_1404B4890(qword_140C659F0 + 240);
		for (i = 0i64; (unsigned int)i < *(_DWORD*)a2; i = (unsigned int)(i + 1))
		{
			v5 = sub_14018B280(24i64, 0);
			v6 = (_QWORD*)(*(_QWORD*)(a2 + 8) + 24 * i);
			v9 = (__int64)v5;
			*(_QWORD*)v5 = *v6;
			*((_QWORD*)v5 + 1) = v6[1];
			*((_QWORD*)v5 + 2) = v6[2];
			v7 = (int*)v3[2];
			if (v7 == (int*)v3[3])
			{
				sub_14010A1C0(v3, v7, &v9);
			}
			else
			{
				if (v7)
					*(_QWORD*)v7 = v5;
				v3[2] += 8i64;
			}
		}
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingVendorListRecieved", byte_1409D0FBE);
	}
	return 0i64;
}
// 1409D0FBE: using guessed type _BYTE byte_1409D0FBE[21];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

