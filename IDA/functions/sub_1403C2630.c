//----- (00000001403C2630) ----------------------------------------------------
__int64 __fastcall sub_1403C2630(__int64 a1, int* a2, unsigned int a3)
{
	__m128* v7; // rbp
	__int64 v8; // rcx
	__int64 v9; // r8
	__int64 v10; // r15
	unsigned int* v11; // rbx
	__int64 v12; // rcx
	_QWORD* v13; // rax
	__int64 v14; // r14
	__int64 v15; // rcx
	__int64 v16; // rbx
	unsigned int* v17; // rdi
	__int64 v18; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned int v21; // ebx
	__int64 v22; // rax
	unsigned int v23; // eax
	__int64 v24; // [rsp+30h] [rbp-28h] BYREF
	unsigned int v25; // [rsp+38h] [rbp-20h]

	if (*(_DWORD*)(a1 + 26180) != 49)
		return 2147500037i64;
	v7 = (__m128*)sub_1403D90D0(a1, *(_DWORD*)(a1 + 26176));
	if (!v7)
		return 2147500037i64;
	v10 = sub_1403AC780(a1 + 160, a2);
	if (!v10)
		return 2147500037i64;
	v11 = (unsigned int*)v7[1].m128_u64[1];
	if (!v11)
		goto LABEL_31;
	if (v11[29] || v11[82] || v11[30] || sub_1403D3950(v8, *v11, *(_QWORD*)(a1 + 120)))
		return 2147500037i64;
	if (!v11[28])
	{
	LABEL_31:
		v23 = sub_1403D3A60(*(__m128**)(a1 + 120), v7, v9, v10, a3);
		if (!v23)
		{
			v24 = 0i64;
			v25 = 0;
			v24 = *(_QWORD*)a2;
			v25 = a3;
			sub_1403F4900(a1, 0x166u, (__int64)&v24);
			return 0i64;
		}
		sub_1403CC530(a1, v23);
		return 2147500037i64;
	}
	v13 = (_QWORD*)sub_1403AC530(v12, *(_DWORD*)(v7[1].m128_u64[1] + 112));
	v14 = (__int64)v13;
	if (!v13)
		return 2147500037i64;
	if ((*(_BYTE*)(*v13 + 4i64) & 4) == 0)
		return 2147500037i64;
	v15 = v13[2];
	v16 = *(_QWORD*)(v15 + 16);
	if (v16 == v15)
		return 2147500037i64;
	while (1)
	{
		v17 = **(unsigned int***)(v16 + 40);
		if (v17)
		{
			if (v17[1] == 2 && sub_14049BF90(v15, *(_QWORD*)(a1 + 120), v17[2], v10))
				break;
		}
		v18 = *(_QWORD*)(v16 + 24);
		if (v18)
		{
			v16 = *(_QWORD*)(v16 + 24);
			for (i = *(_QWORD*)(v18 + 16); i; i = *(_QWORD*)(i + 16))
				v16 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v16 + 8); v16 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v16 = j;
			if (*(_QWORD*)(v16 + 24) != j)
				v16 = j;
		}
		if (v16 == *(_QWORD*)(v14 + 16))
			return 2147500037i64;
	}
	v21 = *v17;
	if (!*v17)
		return 2147500037i64;
	v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 48i64))(v10);
	return sub_1404AB040(v14, (__int64)v7, v21, a3, v22);
}
// 1403C26E3: variable 'v8' is possibly undefined
// 1403C2706: variable 'v12' is possibly undefined
// 1403C274E: variable 'v15' is possibly undefined
// 1403C2803: variable 'v9' is possibly undefined

