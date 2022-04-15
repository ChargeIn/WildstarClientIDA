//----- (0000000140850410) ----------------------------------------------------
__int64 __fastcall sub_140850410(__int64 a1, unsigned int** a2)
{
	char v4; // r8
	__int64 v5; // rax
	char v6; // cl
	unsigned int* v7; // rax
	char v8; // dl
	char v9; // cl
	__int64 result; // rax
	unsigned int v11; // r8d
	__int64 v12; // rdx
	int v13; // ecx
	int v14; // ecx
	unsigned int* v15; // rax
	char v16; // cl
	unsigned int v17; // ecx
	int v18; // ecx
	unsigned int v19; // esi
	int* v20; // rdx
	unsigned int v21; // r10d
	__int64 v22; // rcx
	unsigned int v23; // ebp
	__int64 v24; // r14
	unsigned int* v25; // r9
	__int64 v26; // rcx
	__int64 v27; // r10
	__int64 v28; // rdx
	__int64 v29; // rax
	int v30; // xmm0_4
	int v31; // xmm1_4
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34; // rcx
	int v35; // xmm1_4
	__int64 v36; // rax
	int v37; // xmm0_4
	int v38; // xmm1_4
	__int64 v39; // rax
	__int64 v40; // rax
	__int64 v41; // rcx
	int v42; // xmm1_4
	__int64 v43; // rdx
	__int64 v44; // rax
	int v45; // xmm0_4
	int v46; // xmm1_4
	__int64 v47; // rax

	v4 = *(_BYTE*)*a2;
	*a2 = (unsigned int*)((char*)*a2 + 1);
	*(_BYTE*)(a1 + 91) &= ~0x10u;
	*(_BYTE*)(a1 + 91) |= 16 * (v4 != 0);
	if ((*(_BYTE*)(a1 + 91) & 0x10) == 0)
		return 1i64;
	v5 = (__int64)*a2 + 1;
	v6 = *(_BYTE*)*a2;
	*a2 = (unsigned int*)v5;
	v7 = (unsigned int*)(v5 + 1);
	v8 = *((_BYTE*)v7 - 1);
	*a2 = v7;
	if (v6)
	{
		v9 = *(_BYTE*)v7;
		*a2 = (unsigned int*)((char*)v7 + 1);
		*(_BYTE*)(a1 + 91) &= ~0x20u;
		*(_BYTE*)(a1 + 91) |= 32 * (v9 != 0);
		*(_BYTE*)(a1 + 160) &= 0xFCu;
	}
	if (!v8)
		return 1i64;
	result = sub_14084D430(a1);
	*(_BYTE*)(a1 + 160) &= ~2u;
	*(_BYTE*)(a1 + 160) |= 1u;
	v11 = result;
	if ((_DWORD)result == 1)
	{
		v12 = *(_QWORD*)(a1 + 120);
		v13 = *(*a2)++;
		*(_BYTE*)(a1 + 160) &= 0xF3u;
		*(_BYTE*)(a1 + 160) |= 4 * (v13 & 3);
		v14 = *(*a2)++;
		*(_DWORD*)(v12 + 12) = v14;
		LOBYTE(v14) = *(_BYTE*)*a2;
		*a2 = (unsigned int*)((char*)*a2 + 1);
		*(_BYTE*)(v12 + 76) &= ~1u;
		*(_BYTE*)(v12 + 76) |= (_BYTE)v14 != 0;
		v15 = *a2;
		if ((*(_BYTE*)(a1 + 160) & 0xC) == 4)
		{
			v16 = *(_BYTE*)v15;
			*a2 = (unsigned int*)((char*)v15 + 1);
			*(_BYTE*)(v12 + 76) &= ~8u;
			*(_BYTE*)(v12 + 76) |= 8 * (v16 != 0);
			return 1i64;
		}
		else
		{
			v17 = *v15;
			*a2 = v15 + 1;
			*(_DWORD*)(v12 + 36) = v17;
			LOBYTE(v17) = *(_BYTE*)*a2;
			*a2 = (unsigned int*)((char*)*a2 + 1);
			*(_BYTE*)(v12 + 76) &= ~0x20u;
			*(_BYTE*)(v12 + 76) |= 32 * ((_BYTE)v17 != 0);
			v18 = *(*a2)++;
			*(_DWORD*)(v12 + 40) = v18;
			LOBYTE(v18) = *(_BYTE*)*a2;
			*a2 = (unsigned int*)((char*)*a2 + 1);
			*(_BYTE*)(v12 + 76) &= ~0x10u;
			v19 = 0;
			*(_BYTE*)(v12 + 76) |= 16 * ((_BYTE)v18 != 0);
			v20 = 0i64;
			v21 = **a2;
			v22 = (__int64)(*a2 + 1);
			*a2 = (unsigned int*)v22;
			if (v21)
			{
				v20 = (int*)v22;
				*a2 = (unsigned int*)(v22 + 16i64 * v21);
			}
			v23 = 2;
			v24 = **a2;
			v25 = *a2 + 1;
			*a2 = v25;
			if ((_DWORD)v24)
			{
				*a2 = &v25[2 * v24];
				if (v21)
				{
					v26 = *(_QWORD*)(a1 + 120);
					if (v26)
						v11 = sub_140873C60(v26, v20, v21, v25, v24);
					else
						v11 = 2;
				}
			}
			v27 = 0i64;
			if ((int)v24 >= 4)
			{
				v28 = 0i64;
				v27 = 4i64 * (((unsigned int)(v24 - 4) >> 2) + 1);
				do
				{
					v29 = (__int64)(*a2 + 2);
					*a2 = (unsigned int*)v29;
					v30 = *(_DWORD*)(v29 - 8);
					v31 = *(_DWORD*)(v29 - 4);
					v32 = *(_QWORD*)(a1 + 120);
					if (v32 && v19 < *(_DWORD*)(v32 + 72))
					{
						*(_DWORD*)(*(_QWORD*)(v32 + 64) + v28 + 12) = v30;
						*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 64i64) + v28 + 16) = v31;
					}
					v33 = (__int64)(*a2 + 2);
					*a2 = (unsigned int*)v33;
					v34 = *(_QWORD*)(a1 + 120);
					v35 = *(_DWORD*)(v33 - 4);
					if (v34 && v23 - 1 < *(_DWORD*)(v34 + 72))
					{
						*(_DWORD*)(*(_QWORD*)(v34 + 64) + v28 + 36) = *(_DWORD*)(v33 - 8);
						*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 64i64) + v28 + 40) = v35;
					}
					v36 = (__int64)(*a2 + 2);
					*a2 = (unsigned int*)v36;
					v37 = *(_DWORD*)(v36 - 8);
					v38 = *(_DWORD*)(v36 - 4);
					v39 = *(_QWORD*)(a1 + 120);
					if (v39 && v23 < *(_DWORD*)(v39 + 72))
					{
						*(_DWORD*)(*(_QWORD*)(v39 + 64) + v28 + 60) = v37;
						*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 64i64) + v28 + 64) = v38;
					}
					v40 = (__int64)(*a2 + 2);
					*a2 = (unsigned int*)v40;
					v41 = *(_QWORD*)(a1 + 120);
					v42 = *(_DWORD*)(v40 - 4);
					if (v41 && v23 + 1 < *(_DWORD*)(v41 + 72))
					{
						*(_DWORD*)(*(_QWORD*)(v41 + 64) + v28 + 84) = *(_DWORD*)(v40 - 8);
						*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 64i64) + v28 + 88) = v42;
					}
					v19 += 4;
					v28 += 96i64;
					v23 += 4;
				} while (v19 < (int)v24 - 3);
			}
			if (v19 < (unsigned int)v24)
			{
				v43 = 24 * v27;
				do
				{
					v44 = (__int64)(*a2 + 2);
					*a2 = (unsigned int*)v44;
					v45 = *(_DWORD*)(v44 - 8);
					v46 = *(_DWORD*)(v44 - 4);
					v47 = *(_QWORD*)(a1 + 120);
					if (v47)
					{
						if (v19 < *(_DWORD*)(v47 + 72))
						{
							*(_DWORD*)(*(_QWORD*)(v47 + 64) + v43 + 12) = v45;
							*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 64i64) + v43 + 16) = v46;
						}
					}
					++v19;
					v43 += 24i64;
				} while (v19 < (unsigned int)v24);
			}
			return v11;
		}
	}
	return result;
}

