//----- (00000001402F96A0) ----------------------------------------------------
__int64 __fastcall sub_1402F96A0(__int64 a1, unsigned int* a2)
{
	unsigned int v3; // r15d
	int v5; // edi
	__int64 result; // rax
	__int64 v7; // rbp
	int* v8; // rax
	int* v9; // rbx
	int v10; // xmm1_4
	__int64* v11; // rdi
	__int64 v12; // rcx
	int v13; // r10d
	unsigned int v14; // r9d
	int v15; // edx
	int v16; // eax
	__int64 v17; // rcx

	v3 = dword_140B63948[*a2];
	if ((*(_BYTE*)(a1 + 40) & 0x10) != 0)
		v5 = 0;
	else
		v5 = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
	result = sub_1402F7130((__int64*)a1, v3, v5);
	v7 = (unsigned int)result;
	if ((unsigned int)result < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 128i64))
	{
		v8 = sub_14018B280(96i64, 0);
		v9 = v8;
		if (v8)
		{
			*((_QWORD*)v8 + 10) = 0i64;
			*((_QWORD*)v8 + 11) = 0i64;
		}
		else
		{
			v9 = 0i64;
		}
		v9[10] = v7;
		v10 = v5;
		v11 = (__int64*)(a2 + 4);
		*v9 = v3;
		v9[1] = v10;
		v9[2] = 1065353216;
		v9[3] = 0;
		v9[4] = 1065353216;
		v9[5] = 4;
		v9[6] = 0;
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 136i64) + 48 * v7;
		*(_QWORD*)(v9 + 11) = 0i64;
		*((_QWORD*)v9 + 4) = v12;
		if (*((_QWORD*)a2 + 2))
			v13 = *(unsigned __int16*)(v12 + 6);
		else
			v13 = 0;
		v14 = *(_DWORD*)(v12 + 12) - *(_DWORD*)(v12 + 8);
		if (!v14 || *(float*)(v12 + 16) != 0.0)
			v9[5] &= ~4u;
		if (v14 && !*v11)
			v9[3] = v9[1] % v14;
		v15 = v9[3];
		v9[13] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
		v9[14] = v14 + *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) - v15;
		v9[15] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
		v16 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
		v9[17] = v15;
		v9[16] = v13 + v16;
		if (v12)
			v9[17] = v15 + *(_DWORD*)(v12 + 8);
		v9[18] = 0;
		result = *v11;
		if (*v11)
		{
			v17 = *(_QWORD*)(result + 88);
			if (v17)
				result = sub_1402F1AC0(v17);
		}
		if (!*((_QWORD*)v9 + 10))
		{
			*((_QWORD*)v9 + 10) = v11;
			*((_QWORD*)v9 + 11) = *v11;
			*v11 = (__int64)v9;
			result = *((_QWORD*)v9 + 11);
			if (result)
				*(_QWORD*)(result + 80) = v9 + 22;
		}
	}
	return result;
}
// 140B63948: using guessed type _DWORD dword_140B63948[4];
// 140C77890: using guessed type __int64 qword_140C77890;

