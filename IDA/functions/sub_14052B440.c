//----- (000000014052B440) ----------------------------------------------------
int* __fastcall sub_14052B440(__int64 a1, int* a2)
{
	int v2; // r14d
	int v3; // r15d
	int v4; // edi
	int v5; // ebp
	int v8; // eax
	_DWORD* v9; // rax
	int v10; // r8d
	int v11; // ecx
	_DWORD* v12; // rax
	float v13; // xmm0_4
	float v14; // xmm1_4
	float v15; // xmm5_4
	int* result; // rax
	int v17[4]; // [rsp+20h] [rbp-38h] BYREF
	int v18; // [rsp+60h] [rbp+8h]
	int v19; // [rsp+64h] [rbp+Ch]

	v2 = *(_DWORD*)(a1 + 716);
	v3 = *(_DWORD*)(a1 + 724);
	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 728);
	if (v2 >= v3
		|| v4 >= v5
		|| *(float*)(a1 + 1296) <= *(float*)(a1 + 1280)
		|| *(float*)(a1 + 1300) <= *(float*)(a1 + 1284))
	{
		goto LABEL_26;
	}
	v8 = *(_DWORD*)(a1 + 1264);
	if (v8 != 4)
	{
		if (v8 > 3)
		{
			v11 = v19;
			v10 = v18;
			goto LABEL_13;
		}
		if (*(_QWORD*)(a1 + 1152))
		{
			v12 = sub_14052B810(a1, v17);
			v10 = v12[2] - *v12;
			v11 = v12[3] - v12[1];
			goto LABEL_13;
		}
	LABEL_26:
		*a2 = v2;
		a2[1] = v4;
		a2[3] = v5;
		a2[2] = v3;
		return a2;
	}
	v9 = *(_DWORD**)(a1 + 1192);
	if (!v9 || !v9[8])
		goto LABEL_26;
	v10 = v9[16];
	v11 = v9[17];
LABEL_13:
	if (*(int*)(a1 + 1264) <= 2 || v3 - v2 >= v10 && v5 - v4 >= v11)
	{
		if (v3 - v2 >= v10)
		{
			v2 += (v3 - v2 - v10) / 2;
			v3 = v2 + v10;
		}
		if (v5 - v4 >= v11)
		{
			v4 += (v5 - v4 - v11) / 2;
			v5 = v4 + v11;
		}
		*a2 = v2;
		a2[1] = v4;
		result = a2;
		a2[2] = v3;
		a2[3] = v5;
	}
	else
	{
		v13 = (float)(v3 - v2);
		v14 = (float)(v5 - v4);
		v15 = (float)v10;
		if ((float)(v13 / v14) <= (float)((float)(1.0 / (float)v11) * (float)v10))
		{
			if ((float)((float)(1.0 / (float)v11) * (float)v10) > (float)(v13 / v14))
			{
				v4 = (int)(float)((float)(v14 - (float)((float)(v13 / v15) * (float)v11)) * 0.5);
				v5 -= v4;
			}
		}
		else
		{
			v2 = (int)(float)((float)(v13 - (float)((float)((float)(1.0 / (float)v11) * v14) * v15)) * 0.5);
			v3 -= v2;
		}
		*a2 = v2;
		a2[1] = v4;
		a2[2] = v3;
		a2[3] = v5;
		return a2;
	}
	return result;
}
// 14052B440: using guessed type int var_38[4];

