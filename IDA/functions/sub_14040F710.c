//----- (000000014040F710) ----------------------------------------------------
__int64 __fastcall sub_14040F710(__int64 a1, float* a2, unsigned int* a3, unsigned int a4, int* a5, int a6)
{
	int v10; // esi
	unsigned int v11; // ebx
	BOOL v12; // edx
	__int64 v13; // rax
	int v14; // eax
	unsigned int v15; // eax
	float v16; // xmm6_4
	int v17; // ebx
	unsigned __int64 v18; // rcx
	float v19; // xmm1_4
	unsigned int v20; // eax
	float v21; // xmm6_4
	__int64 v22; // rcx
	unsigned int v23; // eax
	float v24; // xmm6_4
	int v25; // ecx
	float v26; // xmm8_4
	unsigned int v27; // eax
	float v28; // xmm0_4
	int v29; // eax
	unsigned int v30; // ebx
	__int64 v31; // rax
	unsigned int v32; // eax
	unsigned int v33; // eax
	float v34; // xmm7_4
	int v35; // ecx
	BOOL v37; // [rsp+98h] [rbp+10h]

	if (!a2 || !a3)
		return 0i64;
	*a2 = 1.0;
	v10 = 0;
	*a3 = a4;
	v11 = a5[1];
	if (v11 && *a5 != v11)
	{
		v12 = v11 > *a5;
		v37 = v12;
		if (dword_140C7B30C)
		{
			v14 = dword_140C7B308;
		}
		else
		{
			dword_140C7B30C = 1;
			v13 = sub_140200220(0x402u);
			v12 = v37;
			if (v13)
			{
				v14 = *(_DWORD*)(v13 + 4);
				dword_140C7B308 = v14;
			}
			else
			{
				v14 = 0;
				dword_140C7B308 = 0;
			}
		}
		v15 = v11 + v14;
		if ((int)v15 < 1)
			v15 = 1;
		if (*(_QWORD*)(a1 + 64) <= (unsigned __int64)v15)
			v16 = 0.0;
		else
			v16 = *(float*)(*(_QWORD*)(a1 + 56) + 4i64 * v15);
		v17 = !v12;
		v18 = (unsigned int)sub_14040F380(v15, *a5, v17);
		if (*(_QWORD*)(a1 + 64) <= v18)
			v19 = 0.0;
		else
			v19 = *(float*)(*(_QWORD*)(a1 + 56) + 4 * v18);
		*a2 = fmaxf(v16 / v19, 0.0);
		v20 = sub_14040F380(v18, a5[1], 1);
		v21 = sub_14040F660(a1, v20, a6, a5[2]);
		v23 = sub_14040F380(v22, *a5, v17);
		v24 = v21 / sub_14040F660(a1, v23, a6, a5[2]);
		v25 = 1065353216;
		v26 = fmaxf(v24, 0.0);
		if (v26 < 0.0)
			v25 = 1082130432;
		if ((int)abs32(v25 - LODWORD(v26)) > 84)
		{
			v28 = sub_14040F570(a1, a4);
			v27 = sub_14040F470(a1, v28 * v26, a4);
		}
		else
		{
			v27 = a4;
		}
		*a3 = v27;
	}
	v29 = a5[2];
	v30 = *a3;
	if (v29)
		v30 = a5[2];
	if (a5[7] && !v29)
	{
		if (dword_140C7CB74)
		{
			v10 = dword_140C7CB70;
		}
		else
		{
			dword_140C7CB74 = 1;
			v31 = sub_140200220(0x402u);
			if (v31)
				v10 = *(_DWORD*)(v31 + 8);
			dword_140C7CB70 = v10;
		}
		v30 += v10;
	}
	v32 = a5[5];
	if (v32 && v30 < v32)
		v30 = a5[5];
	v33 = a5[6];
	if (v33 && v33 < v30)
		v30 = a5[6];
	if (v30 != *a3 && !a6)
	{
		*a3 = v30;
		v34 = fmaxf(sub_14040F660(a1, a4, 0, a5[2]), 0.0);
		v35 = LODWORD(v34);
		if (v34 < 0.0)
			v35 = 0x80000000 - LODWORD(v34);
		if ((int)abs32(v35) > 84)
			*a2 = fmaxf(sub_14040F660(a1, *a3, 0, a5[2]) / v34, 0.0);
	}
	return 1i64;
}
// 14040F85F: variable 'v22' is possibly undefined
// 140C7B308: using guessed type int dword_140C7B308;
// 140C7B30C: using guessed type int dword_140C7B30C;
// 140C7CB70: using guessed type int dword_140C7CB70;
// 140C7CB74: using guessed type int dword_140C7CB74;

