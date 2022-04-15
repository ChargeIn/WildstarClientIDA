//----- (0000000140450BC0) ----------------------------------------------------
__int64 __fastcall sub_140450BC0(__int64* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // r10
	unsigned int v4; // ecx
	unsigned int v7; // ecx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned int v11; // r9d
	__int64 v12; // r10
	__int64 v13; // rdx
	__int64 v14; // rax
	unsigned int v15; // r8d
	bool v16; // cc
	__int64 v17; // [rsp+10h] [rbp+8h]
	__int64 v18; // [rsp+10h] [rbp+8h]

	v3 = *a1;
	v4 = a3[1];
	if ((v4 & *(_DWORD*)(v3 + 8)) != 0 && (v4 & *(_DWORD*)(*(_QWORD*)a2 + 8i64)) == 0)
		return 0xFFFFFFFFi64;
	if ((v4 & *(_DWORD*)(v3 + 8)) == 0 && (v4 & *(_DWORD*)(*(_QWORD*)a2 + 8i64)) != 0)
		return 1i64;
	v7 = *a3;
	if (*a3)
	{
		v8 = *(_QWORD*)(v3 + 24);
		v9 = *(_QWORD*)(v8 + 8);
		v10 = v8;
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < v7)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v10 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v10 == v8 || (v17 = v10, v7 < *(_DWORD*)(v10 + 32)))
			v17 = *(_QWORD*)(v3 + 24);
		if (v17 == v8)
			v11 = 0;
		else
			v11 = *(_DWORD*)(v17 + 36);
		v12 = *(_QWORD*)(*(_QWORD*)a2 + 24i64);
		v13 = v12;
		v14 = *(_QWORD*)(v12 + 8);
		while (v14)
		{
			if (*(_DWORD*)(v14 + 32) < v7)
			{
				v14 = *(_QWORD*)(v14 + 24);
			}
			else
			{
				v13 = v14;
				v14 = *(_QWORD*)(v14 + 16);
			}
		}
		if (v13 == v12 || (v18 = v13, v7 < *(_DWORD*)(v13 + 32)))
			v18 = *(_QWORD*)(*(_QWORD*)a2 + 24i64);
		if (v18 == v8)
		{
			v16 = v11 == 0;
		}
		else
		{
			v15 = *(_DWORD*)(v18 + 36);
			v16 = v11 <= v15;
			if (v11 < v15)
				return 0xFFFFFFFFi64;
		}
		if (!v16)
			return 1i64;
	}
	return 0i64;
}

