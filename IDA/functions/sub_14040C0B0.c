//----- (000000014040C0B0) ----------------------------------------------------
__int64 __fastcall sub_14040C0B0(_DWORD* a1, float* a2, float a3, unsigned int a4)
{
	__int64 v4; // r11
	unsigned int v5; // r14d
	float* v8; // rbx
	unsigned int v9; // esi
	unsigned int i; // edi
	float v11; // r8d
	__int64 v12; // rax
	_DWORD* v13; // rcx
	float v14; // xmm0_4
	int v15; // r8d
	unsigned int v16; // eax
	int* v17; // rdx
	int v18; // ecx
	__int64 v19; // r9
	int v20; // ecx
	float v21; // xmm0_4
	float v22; // xmm0_4
	float v23; // xmm1_4
	unsigned int v24; // r8d
	float v25; // xmm0_4
	int v26; // eax
	int v27; // r8d
	_DWORD* j; // rcx
	float v30; // xmm1_4
	__int64 v31; // rax

	v4 = 0i64;
	v5 = a4;
	v8 = a2;
	v9 = 0;
	for (i = 0; i < 0xF; ++i)
	{
		v11 = *v8;
		if (*(_DWORD*)v8 == 197)
			break;
		v12 = 0i64;
		v13 = a1;
		v14 = a3 * v8[15];
		while (*v13 != LODWORD(v11))
		{
			if (*v13 == 197)
			{
				*(float*)&a1[v12] = v11;
				break;
			}
			v12 = (unsigned int)(v12 + 1);
			++v13;
			if ((unsigned int)v12 >= 0xF)
			{
				v9 = 149;
				goto LABEL_10;
			}
		}
		*(float*)&a1[v12 + 15] = v14 + *(float*)&a1[v12 + 15];
	LABEL_10:
		++v8;
	}
	v15 = *((_DWORD*)a2 + 34);
	if (v15 && *((_DWORD*)a2 + 35))
	{
		v16 = 0;
		v17 = a1 + 36;
		while (1)
		{
			v18 = *v17;
			if (!*v17)
				break;
			if (v18 == v15)
			{
				if (v18)
				{
					v19 = v16;
					v20 = a1[2 * v16 + 37] * a1[2 * v16 + 53];
					v21 = (float)(int)a1[2 * v16 + 37];
					a1[2 * v16 + 53] = v20;
					v22 = v21 * *(float*)&a1[2 * v16 + 52];
					*(float*)&a1[2 * v16 + 52] = v22;
					v23 = (float)((float)*((int*)a2 + 35) * a3) + v22;
					*(float*)&a1[2 * v16 + 52] = v23;
					v24 = v20 + v5 * *((_DWORD*)a2 + 35);
					a1[2 * v16 + 53] = v24;
					a1[2 * v16 + 37] += *((_DWORD*)a2 + 35);
					v25 = (float)(int)a1[2 * v16 + 37];
					v26 = v24 / a1[2 * v16 + 37];
					*(float*)&a1[2 * v19 + 52] = v23 / v25;
					a1[2 * v19 + 53] = v26;
					goto LABEL_21;
				}
				break;
			}
			++v16;
			v17 += 2;
			if (v16 >= 8)
			{
				v9 = 148;
				goto LABEL_21;
			}
		}
		*(_QWORD*)&a1[2 * v16 + 36] = *((_QWORD*)a2 + 17);
		a1[2 * v16 + 53] = a4;
		*(float*)&a1[2 * v16 + 52] = a3;
	}
LABEL_21:
	v27 = *((_DWORD*)a2 + 33);
	if (v27)
	{
		for (j = a1 + 69; *j && *j != v27; j += 2)
		{
			v4 = (unsigned int)(v4 + 1);
			if ((unsigned int)v4 >= 8)
				return 148i64;
		}
		if (a1[2 * v4 + 69])
		{
			v30 = fmaxf(a3, *(float*)&a1[2 * v4 + 84]);
			if (v5 < a1[2 * v4 + 85])
				v5 = a1[2 * v4 + 85];
			*(float*)&a1[2 * v4 + 84] = v30;
		}
		else
		{
			v31 = *((_QWORD*)a2 + 16);
			*(float*)&a1[2 * v4 + 84] = a3;
			*(_QWORD*)&a1[2 * v4 + 68] = v31;
		}
		a1[2 * v4 + 85] = v5;
	}
	return v9;
}

