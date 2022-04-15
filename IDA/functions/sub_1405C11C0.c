//----- (00000001405C11C0) ----------------------------------------------------
__int64 __fastcall sub_1405C11C0(__int64 a1, int* a2)
{
	unsigned int v4; // esi
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rbx
	__int64 v9; // r8
	_DWORD* v10; // rcx
	__int64 v11; // rax
	int v12; // r8d
	int v13; // eax
	int v14; // r9d
	int v15; // r10d
	int v17[6]; // [rsp+20h] [rbp-59h] BYREF
	char v18[8]; // [rsp+38h] [rbp-41h] BYREF
	int* v19; // [rsp+40h] [rbp-39h]
	__int64 v20; // [rsp+48h] [rbp-31h]
	__int64 v21; // [rsp+58h] [rbp-21h] BYREF
	char v22; // [rsp+60h] [rbp-19h]
	unsigned int v23; // [rsp+68h] [rbp-11h]
	char v24[8]; // [rsp+70h] [rbp-9h] BYREF
	__int64 v25; // [rsp+78h] [rbp-1h]
	unsigned int v26; // [rsp+90h] [rbp+17h] BYREF
	char v27[8]; // [rsp+98h] [rbp+1Fh] BYREF
	__int64 v28; // [rsp+A0h] [rbp+27h]
	__int64 v29; // [rsp+E0h] [rbp+67h]
	_DWORD* v30; // [rsp+E0h] [rbp+67h]

	v4 = sub_1403E00E0(a2[4]);
	v5 = *(_QWORD*)(a1 + 40);
	v6 = *(_QWORD*)(v5 + 8);
	v7 = v5;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v4)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v5 || (v29 = v7, v4 < *(_DWORD*)(v7 + 32)))
		v29 = *(_QWORD*)(a1 + 40);
	v8 = v29;
	if (v29 == v5)
	{
		v19 = sub_14018B280(56i64, 0);
		v20 = 0i64;
		*(_BYTE*)v19 = 0;
		*((_QWORD*)v19 + 1) = 0i64;
		*((_QWORD*)v19 + 2) = v19;
		*((_QWORD*)v19 + 3) = v19;
		v23 = v4;
		sub_1405C5510((__int64)v24, (__int64)v18);
		v26 = v23;
		sub_1405C5510((__int64)v27, (__int64)v24);
		sub_1405C4B10(a1 + 32, (__int64)&v21, (int*)&v26);
		v8 = v21;
		sub_140008410((__int64)v27);
		sub_14018B900(v28, 0);
		sub_140008410((__int64)v24);
		sub_14018B900(v25, 0);
		sub_140008410((__int64)v18);
		sub_14018B900((__int64)v19, 0);
	}
	v9 = *(_QWORD*)(v8 + 48);
	v10 = (_DWORD*)v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a2[4])
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = (_DWORD*)v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == (_DWORD*)v9 || (v30 = v10, a2[4] < v10[8]))
		v30 = *(_DWORD**)(v8 + 48);
	if (v30 == (_DWORD*)v9)
	{
		v12 = a2[1];
		v13 = a2[4];
		v14 = a2[2];
		v15 = a2[3];
		v17[2] = *a2;
		v17[3] = v12;
		v17[0] = v13;
		v17[1] = v13;
		v17[4] = v14;
		v17[5] = v15;
		sub_1405C5410(v8 + 40, (__int64)&v21, v17);
		if (!v22)
			return 2147500037i64;
	}
	else
	{
		v30[10] = *a2;
		v30[11] = a2[1];
		v30[12] = a2[2];
		v30[13] = a2[3];
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PvpRatingUpdated", L"i", (unsigned int)a2[4]);
	return 0i64;
}
// 1409EEB04: using guessed type wchar_t aI_14[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405C11C0: using guessed type char var_98[8];
// 1405C11C0: using guessed type char var_60[8];
// 1405C11C0: using guessed type char var_38[8];

