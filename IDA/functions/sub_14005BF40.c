//----- (000000014005BF40) ----------------------------------------------------
void* __fastcall sub_14005BF40(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // esi
	int v4; // ebx
	int v6; // r9d
	int* v7; // rdi
	__int64 v8; // rcx
	int v11; // r14d
	int v12; // r11d
	__int64 v13; // rbp
	int v14; // r8d
	__int64 v15; // r10
	int v16; // edi
	int v17; // eax
	__int64 v18; // rdx
	_DWORD* v19; // rax
	__int64 v20; // rdx
	int v21; // r10d
	__int64 v22; // rax
	int v23; // r11d
	int v24; // r8d
	__int64 v25; // rdi
	__int64 v26; // rdx
	int v27; // ecx
	__int64 v28; // rax
	int i; // ecx
	__int64 v30; // rax
	int v31; // eax
	int v32; // r8d
	int v33; // r11d
	int v34; // ecx
	__int64 j; // rax
	__int64 v36; // rax
	int v37; // eax
	int v38; // r8d
	int v39; // r11d
	int v40; // ecx
	int v41; // r10d
	int* v42; // rdi
	int v44[28]; // [rsp+20h] [rbp-B8h] BYREF

	v3 = *(_DWORD*)(a2 + 56);
	v4 = 1;
	v6 = 0;
	v7 = v44;
	v8 = 27i64;
	v11 = 0;
	v12 = 1;
	v13 = 1i64;
	v14 = 1;
	v15 = 0i64;
	while (v8)
	{
		*v7++ = 0;
		--v8;
	}
	do
	{
		v16 = 0;
		v17 = v14;
		if (v14 <= v3)
		{
			if (v12 > v14)
				goto LABEL_12;
		}
		else
		{
			v17 = v3;
			if (v12 > v3)
				break;
		}
		v18 = v17;
		v19 = (_DWORD*)(16 * v13 + *(_QWORD*)(a2 + 24) - 8i64);
		v20 = v18 - v13 + 1;
		v12 += v20;
		v13 += v20;
		do
		{
			if (*v19)
				++v16;
			v19 += 4;
			--v20;
		} while (v20);
	LABEL_12:
		v44[v15++] += v16;
		v11 += v16;
		v14 *= 2;
	} while (v15 <= 26);
	v21 = -1;
	v22 = 1i64 << *(_BYTE*)(a2 + 11);
	v23 = 0;
	v24 = 0;
	v25 = (int)v22;
	if ((_DWORD)v22)
	{
		v26 = *(_QWORD*)(a2 + 32) + 8 * ((int)v22 + 4i64 * (int)v22 + 1);
		do
		{
			v26 -= 40i64;
			--v25;
			if (*(_DWORD*)v26)
			{
				if (*(_DWORD*)(v26 + 16) == 3
					&& (v27 = (int)*(double*)(v26 + 8), (double)v27 == *(double*)(v26 + 8))
					&& (unsigned int)(v27 - 1) <= 0x3FFFFFF)
				{
					v28 = (unsigned int)(v27 - 1);
					for (i = -1; (unsigned int)v28 >= 0x100; i += 8)
						v28 = (unsigned int)v28 >> 8;
					v30 = i + byte_140A122B0[v28] + 1;
					++v44[v30];
					v31 = 1;
				}
				else
				{
					v31 = 0;
				}
				v24 += v31;
				++v23;
			}
		} while (v25);
	}
	v32 = v11 + v24;
	v33 = v23 + 1;
	if (*(_DWORD*)(a3 + 8) == 3
		&& (v34 = (int)*(double*)a3, (double)v34 == *(double*)a3)
		&& (unsigned int)(v34 - 1) <= 0x3FFFFFF)
	{
		for (j = (unsigned int)(v34 - 1); (unsigned int)j >= 0x100; v21 += 8)
			j = (unsigned int)j >> 8;
		v36 = v21 + byte_140A122B0[j] + 1;
		++v44[v36];
		v37 = 1;
	}
	else
	{
		v37 = 0;
	}
	v38 = v37 + v32;
	v39 = v11 + v33;
	v40 = 0;
	v41 = 0;
	if (v38 > 0)
	{
		v42 = v44;
		do
		{
			if (*v42 > 0)
			{
				v6 += *v42;
				if (v6 > v4 / 2)
				{
					v41 = v4;
					v40 = v6;
				}
			}
			if (v6 == v38)
				break;
			++v42;
			v4 *= 2;
		} while (v4 / 2 < v38);
	}
	return sub_14005BD50(a1, a2, v41, v39 - v40);
}
// 140A122B0: using guessed type unsigned __int8 byte_140A122B0[256];
// 14005BF40: using guessed type int var_B8[28];

