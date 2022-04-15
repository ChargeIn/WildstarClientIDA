//----- (00000001401AA580) ----------------------------------------------------
__int64 __fastcall sub_1401AA580(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	int v3; // r9d
	unsigned int v4; // esi
	__int64 v5; // r10
	int v6; // r12d
	__int64 v8; // rdx
	_BYTE* v10; // rax
	unsigned int v11; // edi
	__int64 v12; // r13
	char v13; // bp
	char v14; // r15
	_BYTE* v15; // r8
	unsigned int v16; // r9d
	_BYTE* v17; // rdx
	_BYTE* v18; // rax
	_BYTE* v19; // rdx
	char v20; // cl
	__int64 v21; // rcx

	v2 = *(unsigned int*)(a1 + 148);
	v3 = *(_DWORD*)(a1 + 68);
	v4 = *(_DWORD*)(a1 + 164);
	v5 = *(int*)(a1 + 160);
	v6 = *(_DWORD*)(a1 + 184);
	v8 = *(_QWORD*)(a1 + 80);
	v10 = (_BYTE*)(v2 + v8);
	if ((unsigned int)v2 <= v3 - 262)
		v11 = 0;
	else
		v11 = v2 - v3 + 262;
	v12 = *(_QWORD*)(a1 + 96);
	v13 = v10[v5 - 1];
	v14 = v10[v5];
	v15 = v10 + 258;
	if ((unsigned int)v5 >= *(_DWORD*)(a1 + 180))
		v4 >>= 2;
	v16 = *(_DWORD*)(a1 + 156);
	if (v6 > v16)
		v6 = *(_DWORD*)(a1 + 156);
	do
	{
		v17 = (_BYTE*)(a2 + v8);
		if (v17[(int)v5] == v14 && v17[(int)v5 - 1] == v13 && *v17 == *v10 && v17[1] == v10[1])
		{
			v18 = v10 + 2;
			v19 = v17 + 2;
			do
			{
				if (*++v18 != v19[1])
					break;
				if (*++v18 != v19[2])
					break;
				if (*++v18 != v19[3])
					break;
				if (*++v18 != v19[4])
					break;
				if (*++v18 != v19[5])
					break;
				if (*++v18 != v19[6])
					break;
				if (*++v18 != v19[7])
					break;
				v20 = v19[8];
				v19 += 8;
				if (*++v18 != v20)
					break;
			} while (v18 < v15);
			v21 = (int)v18 - (int)v15 + 258;
			v10 = v15 - 258;
			if ((int)v21 > (int)v5)
			{
				*(_DWORD*)(a1 + 152) = a2;
				LODWORD(v5) = v21;
				if ((int)v21 >= v6)
					break;
				v13 = v10[v21 - 1];
				v14 = v10[v21];
			}
		}
		a2 = *(unsigned __int16*)(v12 + 2i64 * (a2 & *(_DWORD*)(a1 + 76)));
		if (a2 <= v11)
			break;
		v8 = *(_QWORD*)(a1 + 80);
		--v4;
	} while (v4);
	if ((unsigned int)v5 <= v16)
		return (unsigned int)v5;
	return v16;
}

