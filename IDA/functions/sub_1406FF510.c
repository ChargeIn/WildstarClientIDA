//----- (00000001406FF510) ----------------------------------------------------
__int64 __fastcall sub_1406FF510(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // edx
	__int64 v9; // r10
	__int64 v10; // rax
	__int64 v11; // r8
	__int64 v12; // rcx
	_DWORD* v13; // rcx
	__int64 v14; // r8
	__int64 v15; // rcx
	__int64 v16; // rax
	_DWORD* v17; // rdx
	int v18; // eax
	_DWORD* v19; // rcx
	_DWORD* v20; // rax
	__int64 v22; // [rsp+38h] [rbp+10h]
	__int64 v23; // [rsp+38h] [rbp+10h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = *(_QWORD*)(qword_140C65898 + 32144);
	v10 = *(_QWORD*)(v9 + 72);
	v11 = v10;
	v12 = *(_QWORD*)(v10 + 8);
	while (v12)
	{
		if (*(_DWORD*)(v12 + 32) < v8)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v11 = v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	}
	if (v11 == v10 || (v22 = v11, v8 < *(_DWORD*)(v11 + 32)))
		v22 = *(_QWORD*)(v9 + 72);
	if (v22 == v10)
	{
		v13 = *(_DWORD**)(a1 + 16);
		*v13 = 0;
		v13[2] = 1;
	}
	else
	{
		v14 = *(_QWORD*)(v9 + 40);
		v15 = v14;
		v16 = *(_QWORD*)(v14 + 8);
		while (v16)
		{
			if (*(_DWORD*)(v16 + 32) < v8)
			{
				v16 = *(_QWORD*)(v16 + 24);
			}
			else
			{
				v15 = v16;
				v16 = *(_QWORD*)(v16 + 16);
			}
		}
		if (v15 == v14 || (v23 = v15, v8 < *(_DWORD*)(v15 + 32)))
			v23 = *(_QWORD*)(v9 + 40);
		if (v23 == v14 || v23 == -40 || (v17 = *(_DWORD**)(v23 + 56)) == 0i64)
		{
			v20 = *(_DWORD**)(a1 + 16);
			v20[2] = 1;
			*v20 = 0;
		}
		else
		{
			v18 = sub_14070CCE0(v15, v17);
			v19 = *(_DWORD**)(a1 + 16);
			v19[2] = 1;
			LOBYTE(v1) = v18 != 0;
			*v19 = v1;
		}
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

