//----- (0000000140450CE0) ----------------------------------------------------
__int64 __fastcall sub_140450CE0(__int64 a1, __int64 a2, unsigned int* a3)
{
	__int64 v6; // rdi
	__int64 v7; // rax
	int v8; // r8d
	int v9; // ecx
	_BOOL8 v10; // rdx
	float v11; // xmm1_4
	float v12; // xmm0_4
	__int64 result; // rax
	unsigned int v14; // ecx
	unsigned int v15; // ecx
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64 v18; // rax
	unsigned int v19; // r10d
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64 v22; // rax
	unsigned int v23; // r9d
	bool v24; // cc
	__int64 v25; // [rsp+30h] [rbp+8h]
	__int64 v26; // [rsp+30h] [rbp+8h]

	v6 = sub_14044FA30(**(_QWORD**)(*(_QWORD*)a1 + 64i64), a3[2]);
	v7 = sub_14044FA30(**(_QWORD**)(*(_QWORD*)a2 + 64i64), a3[2]);
	v8 = *(_DWORD*)(qword_140C635F0 + 5896);
	if (v8)
	{
		if (v8 == 1)
			v9 = 8;
		else
			v9 = 19;
	}
	else
	{
		v9 = 6;
	}
	v10 = a3[2] == v9;
	if (v6)
		v11 = *(float*)(v6 + 4);
	else
		v11 = *(float*)(**(_QWORD**)(*(_QWORD*)a1 + 64i64) + 4 * v10 + 24i64);
	if (v7)
		v12 = *(float*)(v7 + 4);
	else
		v12 = *(float*)(**(_QWORD**)(*(_QWORD*)a2 + 64i64) + 4 * v10 + 24i64);
	if (v11 == 0.0)
	{
		if (v12 != 0.0)
			return 1i64;
	}
	else if (v12 == 0.0)
	{
		return 0xFFFFFFFFi64;
	}
	if (v11 < v12)
	{
		v14 = 1;
		if (a3[3])
			return (unsigned int)-1;
		return v14;
	}
	if (v11 <= v12)
	{
		v15 = *a3;
		if (!*a3)
			return 0i64;
		v16 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
		v17 = v16;
		v18 = *(_QWORD*)(v16 + 8);
		while (v18)
		{
			if (*(_DWORD*)(v18 + 32) < v15)
			{
				v18 = *(_QWORD*)(v18 + 24);
			}
			else
			{
				v17 = v18;
				v18 = *(_QWORD*)(v18 + 16);
			}
		}
		if (v17 == v16 || (v25 = v17, v15 < *(_DWORD*)(v17 + 32)))
			v25 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
		if (v25 == v16)
			v19 = 0;
		else
			v19 = *(_DWORD*)(v25 + 36);
		v20 = *(_QWORD*)(*(_QWORD*)a2 + 24i64);
		v21 = v20;
		v22 = *(_QWORD*)(v20 + 8);
		while (v22)
		{
			if (*(_DWORD*)(v22 + 32) < v15)
			{
				v22 = *(_QWORD*)(v22 + 24);
			}
			else
			{
				v21 = v22;
				v22 = *(_QWORD*)(v22 + 16);
			}
		}
		if (v21 == v20 || (v26 = v21, v15 < *(_DWORD*)(v21 + 32)))
			v26 = *(_QWORD*)(*(_QWORD*)a2 + 24i64);
		if (v26 == *(_QWORD*)(*(_QWORD*)a1 + 24i64))
		{
			v24 = v19 == 0;
		}
		else
		{
			v23 = *(_DWORD*)(v26 + 36);
			v24 = v19 <= v23;
			if (v19 < v23)
				return 0xFFFFFFFFi64;
		}
		return !v24;
	}
	result = 0xFFFFFFFFi64;
	if (a3[3])
		return 1i64;
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

