//----- (00000001408801C0) ----------------------------------------------------
__int64 __fastcall sub_1408801C0(__int64 a1)
{
	__int64 v1; // r9
	double v3; // xmm0_8
	float v4; // xmm1_4
	bool v5; // r10
	unsigned int v6; // edi
	unsigned int v7; // eax
	unsigned __int16 v8; // r11
	unsigned int v9; // r8d
	unsigned int v10; // r9d
	__int16 v11; // si
	unsigned int v12; // r8d
	unsigned int v13; // eax
	__int16 v14; // cx
	__int64 v15; // rax
	unsigned __int16 v16; // r9
	unsigned int v17; // r8d
	unsigned int v18; // r10d
	unsigned int v19; // ecx
	unsigned int v20; // r8d
	unsigned int v21; // eax

	v1 = *(_QWORD*)(a1 + 24);
	if ((*(_BYTE*)(v1 + 383) & 4) != 0)
	{
		if (*(_WORD*)(v1 + 376))
		{
			v3 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
			v4 = *(float*)&v3;
		}
		else
		{
			v4 = (float)((float)*(int*)(a1 + 40) * 1000.0) / (float)*(int*)(v1 + 192);
		}
		v1 = *(_QWORD*)(a1 + 24);
		v5 = (*(_BYTE*)(v1 + 383) & 8) != 0;
		v6 = (int)(float)((float)((float)(v4 * *(float*)(v1 + 372)) * (float)*(int*)(v1 + 192)) * 0.001);
	}
	else
	{
		v7 = dword_140C110B4;
		v5 = (*(_BYTE*)(v1 + 383) & 8) != 0;
		if (*(char*)(v1 + 382) < 0)
			v7 = 375;
		v6 = *(unsigned int*)(v1 + 192) * (unsigned __int64)*(unsigned int*)(v1 + 372) / v7;
	}
	v8 = *(_WORD*)(v1 + 376);
	v9 = *(_DWORD*)(a1 + 60);
	v10 = *(_DWORD*)(a1 + 56);
	v11 = 0;
	*(_WORD*)(a1 + 84) = v8;
	if (v8 != 1 && v6 > v9 && v9 > v10)
	{
		v12 = v9 - v10 + 1;
		v13 = (v6 - v10) / v12;
		if (v13 < v8)
		{
			if (v8)
			{
				v14 = v8 - v13;
				goto LABEL_18;
			}
		}
		else if (v8)
		{
			*(_WORD*)(a1 + 84) = 1;
			v6 -= v12 * (v8 - 1);
			goto LABEL_19;
		}
		v14 = 0;
	LABEL_18:
		*(_WORD*)(a1 + 84) = v14;
		v6 = (v6 - v10) % v12 + v10;
	}
LABEL_19:
	if (!v5)
		return v6;
	v15 = sub_140881570((unsigned int*)(a1 + 64), v6);
	if (!v15)
		return v6;
	v16 = *(_WORD*)(a1 + 84);
	v17 = *(_DWORD*)(a1 + 60);
	v18 = *(_DWORD*)(a1 + 56);
	v19 = *(_DWORD*)(v15 + 4);
	*(_WORD*)(a1 + 84) = v16;
	if (v16 == 1 || v19 <= v17 || v17 <= v18)
		return v19;
	v20 = v17 - v18 + 1;
	v21 = (v19 - v18) / v20;
	if (v21 < v16)
	{
		if (v16)
			v11 = v16 - v21;
	}
	else if (v16)
	{
		*(_WORD*)(a1 + 84) = 1;
		v19 -= v20 * (v16 - 1);
		return v19;
	}
	*(_WORD*)(a1 + 84) = v11;
	return (v19 - v18) % v20 + v18;
}
// 140C110B4: using guessed type int dword_140C110B4;

