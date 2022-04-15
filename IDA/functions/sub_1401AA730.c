//----- (00000001401AA730) ----------------------------------------------------
void __fastcall sub_1401AA730(__int64 a1)
{
	unsigned __int64 v1; // rdi
	unsigned int v3; // edx
	unsigned int v4; // esi
	__int64 v5; // r8
	__int64 v6; // rax
	_WORD* v7; // rdx
	unsigned int v8; // eax
	__int16 v9; // ax
	int v10; // edx
	_WORD* v11; // rcx
	unsigned int v12; // eax
	__int16 v13; // ax
	int v14; // eax
	int v15; // r9d
	__int64 v16; // rdx
	int v17; // ecx
	__int64 v18; // r10
	int v19; // r8d
	__int64 v20; // r11
	__int64 v21; // rdx
	unsigned int v22; // r9d
	__int64 v23; // rcx
	__int64 v24; // r9
	__int64 v25; // r8
	int v26; // edx
	__int64 v27; // rcx
	unsigned int v28; // esi
	unsigned int v29; // edi
	unsigned int v30; // esi
	unsigned int v31; // esi
	unsigned int v32; // edi

	v1 = *(unsigned int*)(a1 + 68);
	do
	{
		v3 = *(_DWORD*)(a1 + 148);
		v4 = *(_DWORD*)(a1 + 88) - *(_DWORD*)(a1 + 156) - v3;
		if (v3 >= (int)v1 + *(_DWORD*)(a1 + 68) - 262)
		{
			sub_1407DB590(*(int**)(a1 + 80), (int*)(*(_QWORD*)(a1 + 80) + v1), v1);
			v5 = *(unsigned int*)(a1 + 116);
			v6 = *(_QWORD*)(a1 + 104);
			*(_DWORD*)(a1 + 152) -= v1;
			*(_DWORD*)(a1 + 148) -= v1;
			*(_DWORD*)(a1 + 132) -= v1;
			v7 = (_WORD*)(v6 + 2 * v5);
			do
			{
				v8 = (unsigned __int16)*--v7;
				if (v8 < (unsigned int)v1)
					v9 = 0;
				else
					v9 = v8 - v1;
				*v7 = v9;
				LODWORD(v5) = v5 - 1;
			} while ((_DWORD)v5);
			v10 = v1;
			v11 = (_WORD*)(*(_QWORD*)(a1 + 96) + 2 * v1);
			do
			{
				v12 = (unsigned __int16)*--v11;
				if (v12 < (unsigned int)v1)
					v13 = 0;
				else
					v13 = v12 - v1;
				*v11 = v13;
				--v10;
			} while (v10);
			v4 += v1;
		}
		if (!*(_DWORD*)(*(_QWORD*)a1 + 8i64))
			break;
		v14 = sub_1401AA420(
			*(_QWORD*)a1,
			(int*)(*(_QWORD*)(a1 + 80) + *(unsigned int*)(a1 + 148) + (unsigned __int64)*(unsigned int*)(a1 + 156)),
			v4);
		v15 = *(_DWORD*)(a1 + 5900);
		*(_DWORD*)(a1 + 156) += v14;
		if ((unsigned int)(v15 + *(_DWORD*)(a1 + 156)) >= 3)
		{
			v16 = *(_QWORD*)(a1 + 80);
			v17 = *(_DWORD*)(a1 + 128);
			v18 = (unsigned int)(*(_DWORD*)(a1 + 148) - v15);
			v19 = *(unsigned __int8*)(v18 + v16);
			*(_DWORD*)(a1 + 112) = v19;
			*(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 124) & ((v19 << v17) ^ *(unsigned __int8*)((unsigned int)(v18 + 1) + v16));
			if (v15)
			{
				v20 = (unsigned int)(v18 + 2);
				do
				{
					v21 = *(_QWORD*)(a1 + 104);
					v22 = *(unsigned __int8*)(v20 + *(_QWORD*)(a1 + 80));
					v23 = *(_QWORD*)(a1 + 96);
					v20 = (unsigned int)(v20 + 1);
					v24 = *(_DWORD*)(a1 + 124) & ((*(_DWORD*)(a1 + 112) << *(_DWORD*)(a1 + 128)) ^ v22);
					v25 = *(_DWORD*)(a1 + 76) & (unsigned int)v18;
					*(_DWORD*)(a1 + 112) = v24;
					*(_WORD*)(v23 + 2 * v25) = *(_WORD*)(v21 + 2 * v24);
					*(_WORD*)(*(_QWORD*)(a1 + 104) + 2i64 * *(unsigned int*)(a1 + 112)) = v18;
					v26 = -- * (_DWORD*)(a1 + 5900);
					LODWORD(v18) = v18 + 1;
				} while ((unsigned int)(v26 + *(_DWORD*)(a1 + 156)) >= 3 && v26);
			}
		}
	} while (*(_DWORD*)(a1 + 156) < 0x106u && *(_DWORD*)(*(_QWORD*)a1 + 8i64));
	v27 = *(unsigned int*)(a1 + 5912);
	v28 = *(_DWORD*)(a1 + 88);
	if ((unsigned int)v27 < v28)
	{
		v29 = *(_DWORD*)(a1 + 148) + *(_DWORD*)(a1 + 156);
		if ((unsigned int)v27 >= v29)
		{
			if ((unsigned int)v27 < v29 + 258)
			{
				v31 = v28 - v27;
				v32 = v29 - v27 + 258;
				if (v32 > v31)
					v32 = v31;
				sub_1407E4830((int*)(*(_QWORD*)(a1 + 80) + v27), 0i64, v32);
				*(_DWORD*)(a1 + 5912) += v32;
			}
		}
		else
		{
			v30 = v28 - v29;
			if (v30 > 0x102)
				v30 = 258;
			sub_1407E4830((int*)(*(_QWORD*)(a1 + 80) + v29), 0i64, v30);
			*(_DWORD*)(a1 + 5912) = v30 + v29;
		}
	}
}

