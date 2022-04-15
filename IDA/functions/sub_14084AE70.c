//----- (000000014084AE70) ----------------------------------------------------
void __fastcall sub_14084AE70(__int64 a1, float* a2, float a3, float* a4, int* a5, int* a6, int* a7)
{
	unsigned __int8 v10; // al
	_DWORD* v11; // rdi
	float v12; // xmm7_4
	_DWORD* v13; // rbx
	int v14; // xmm6_4
	float* v15; // rbp
	unsigned __int8 v16; // al
	_DWORD* v17; // rcx
	float v18; // xmm0_4
	unsigned __int8 v19; // al
	float v20; // xmm0_4
	int* v21; // rax
	int v22; // [rsp+80h] [rbp+8h] BYREF

	if (!a1)
	{
		v21 = a5;
		*a4 = 1.0;
		*v21 = 1065353216;
		*a6 = 1065353216;
		*a7 = 1065353216;
		return;
	}
	v10 = *(_BYTE*)(a1 + 128);
	v11 = 0i64;
	v12 = *a2;
	if (v10 == 0xFF)
	{
		v13 = 0i64;
		goto LABEL_6;
	}
	v13 = (_DWORD*)(a1 + 16 * (v10 + 3i64));
	if (!v13)
	{
	LABEL_6:
		v14 = 1065353216;
		goto LABEL_7;
	}
	v14 = sub_140835CA0(v13, *a2, 0, &v22);
LABEL_7:
	v15 = (float*)a5;
	*a5 = v14;
	v16 = *(_BYTE*)(a1 + 129);
	if (v16 == 0xFF)
		v17 = 0i64;
	else
		v17 = (_DWORD*)(a1 + 16 * (v16 + 3i64));
	if (v17 == v13)
	{
		*a6 = v14;
	}
	else if (v17)
	{
		v18 = sub_140835CA0(v17, v12, 0, &v22);
		*(float*)a6 = v18;
	}
	else
	{
		*a6 = 1065353216;
	}
	v19 = *(_BYTE*)(a1 + 130);
	if (v19 != 0xFF)
		v11 = (_DWORD*)(a1 + 16 * (v19 + 3i64));
	if (v11 == v13)
	{
		*a7 = v14;
	}
	else if (v11)
	{
		v20 = sub_140835CA0(v11, v12, 0, &v22);
		*(float*)a7 = v20;
	}
	else
	{
		*a7 = 1065353216;
	}
	if ((*(_BYTE*)(a1 + 133) & 1) != 0)
		*v15 = sub_140849720(*(float*)(a1 + 32), *(float*)(a1 + 36), a3, a2[3], a4) * *v15;
	else
		*a4 = 1.0;
}

