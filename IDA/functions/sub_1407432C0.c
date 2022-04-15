//----- (00000001407432C0) ----------------------------------------------------
__int64 __fastcall sub_1407432C0(__int64 a1)
{
	int v1; // ebx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	_DWORD* v9; // rdx
	int v10; // eax
	BOOL v11; // eax
	_QWORD* v12; // r8
	__int64 v13; // rdx
	int v14; // ecx
	unsigned int v15; // ecx
	int v16; // eax
	_DWORD* v17; // rcx
	bool v18; // zf
	__int64 result; // rax
	__int64 v20; // [rsp+20h] [rbp-28h] BYREF
	__int64 v21; // [rsp+28h] [rbp-20h]
	__int64 v22; // [rsp+30h] [rbp-18h]
	__int64 v23; // [rsp+38h] [rbp-10h]

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
	v8 = *(_QWORD*)(v7 + 400);
	v9 = dword_140A12138;
	if (*(_QWORD*)(v8 + 24) < *(_QWORD*)(v8 + 16))
		v9 = *(_DWORD**)(v8 + 24);
	v10 = v9[2];
	v11 = v10 && (v10 != 1 || *v9);
	v12 = *(_QWORD**)(qword_140C65898 + 27728);
	if (v12 && v12[12] && (v13 = *(_QWORD*)(v12[11] + 8i64 * v12[13])) != 0)
	{
		v20 = 0i64;
		v21 = 0i64;
		v22 = 0i64;
		v23 = 0i64;
		v20 = v12[9];
		v21 = *(_QWORD*)(v13 + 16);
		v22 = *(_QWORD*)(v13 + 24);
		v14 = *(_DWORD*)(v13 + 8);
		if (v11)
			v15 = v14 | 0x800;
		else
			v15 = v14 & 0xFFFFF7FF;
		LODWORD(v23) = v15 | 0x4000;
		HIDWORD(v23) = (v15 | 0x4000) ^ *(_DWORD*)(v13 + 8);
		sub_1403F4740(qword_140C65898, 0x408u, (__int64)&v20);
		v16 = 1;
	}
	else
	{
		v16 = 0;
	}
	v17 = *(_DWORD**)(a1 + 16);
	v18 = v16 == 0;
	result = 1i64;
	LOBYTE(v1) = !v18;
	v17[2] = 1;
	*v17 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

