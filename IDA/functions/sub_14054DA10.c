//----- (000000014054DA10) ----------------------------------------------------
float __fastcall sub_14054DA10(__int64 a1, unsigned int a2, float a3)
{
	__int64 v4; // rdi
	float v6; // xmm6_4
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // r9
	unsigned int v11; // r8d
	unsigned int v12; // ecx
	float v13; // xmm2_4
	unsigned int v14; // edx
	int v15; // eax
	float v16; // xmm0_4
	float v17; // xmm1_4
	int v18; // xmm2_4
	unsigned int v19; // r8d
	__int64 v20; // rcx
	int v22[6]; // [rsp+20h] [rbp-68h]
	int v23[6]; // [rsp+38h] [rbp-50h]

	v4 = a2;
	v6 = 0.0;
	if ((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64) & 0x200) != 0)
		a3 = 0.0;
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	if (v7)
	{
		v8 = *(_QWORD*)(v7 + 3336);
		if (v8)
		{
			v6 = *(float*)(v8 + 140);
		}
		else
		{
			v9 = sub_14022D500(*(_DWORD*)(v7 + 216));
			if (v9)
				v6 = *(float*)(v9 + 40);
		}
		v6 = v6 * a3;
	}
	v10 = *(_QWORD*)(a1 + 48);
	v11 = *(_DWORD*)(v10 + 44);
	v12 = v11 / 0x14;
	if (v11 / 0x14 >= 0x21)
	{
		if (v12 > 0xC8)
			v12 = 200;
	}
	else
	{
		v12 = 33;
	}
	v13 = *(float*)(v10 + 4 * v4 + 12);
	v14 = 0;
	v22[1] = *(_DWORD*)(v10 + 44);
	v22[2] = v11 + v12;
	v15 = v11 + 2 * v12;
	v16 = v13;
	v17 = v13;
	*(float*)&v18 = v13 + v6;
	v23[3] = v18;
	v23[4] = v18;
	v22[0] = 0;
	v22[4] = -1;
	*(float*)&v23[1] = (float)(v16 * 1.0700001) + v6;
	*(float*)&v23[2] = (float)(v17 * 0.98000002) + v6;
	v19 = dword_140C636A8 - *(_DWORD*)(a1 + 72);
	v22[3] = v15;
	v23[0] = 0;
	while (1)
	{
		v20 = v14 + 1;
		if (v22[v20] > v19)
			break;
		++v14;
		if ((unsigned int)v20 >= 4)
			return *(float*)&v18;
	}
	if (v14 < 4)
		return (float)((float)((float)(int)(v19 - v22[v14]) / (float)(v22[v14 + 1] - v22[v14]))
			* (float)(*(float*)&v23[v14 + 1] - *(float*)&v23[v14]))
		+ *(float*)&v23[v14];
	else
		return *(float*)&v18;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

