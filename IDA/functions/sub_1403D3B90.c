//----- (00000001403D3B90) ----------------------------------------------------
__int64 __fastcall sub_1403D3B90(_QWORD* a1, _OWORD* a2, _OWORD* a3)
{
	_OWORD* v3; // rax
	__int64 v7; // rax
	__int128 v8; // xmm1
	__int64 v9; // rcx
	_OWORD* v10; // rdx
	__int64 result; // rax
	__int128 v12; // xmm0
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // r14
	int* v16; // rax
	_OWORD* v17; // rdx
	int* v18; // rbp
	int* i; // rcx
	_OWORD* v20; // rdx
	_OWORD* v21; // rbx
	_OWORD* v22; // rcx
	__int64 v23; // rcx

	v3 = (_OWORD*)a1[2];
	if (v3 == (_OWORD*)a1[3])
	{
		v13 = ((__int64)v3 - a1[1]) >> 4;
		v14 = 2 * v13;
		if (!v13)
			v14 = 1i64;
		v15 = sub_14018A3E0(16 * v14) & 0xFFFFFFFFFFFFFFF0ui64;
		v16 = sub_14018B280(v15, 0);
		v17 = (_OWORD*)a1[1];
		v18 = v16;
		for (i = v16; v17 != a2; i += 4)
		{
			if (i)
				*(_OWORD*)i = *v17;
			++v17;
		}
		if (i)
			*(_OWORD*)i = *a3;
		v20 = (_OWORD*)a1[2];
		v21 = i + 4;
		if (a2 != v20)
		{
			v22 = a2;
			do
			{
				if (v21)
					*v21 = *v22;
				++v22;
				++v21;
			} while (v22 != v20);
		}
		v23 = a1[1];
		if (v23)
			sub_14018B900(v23, 0);
		result = (__int64)v18 + v15;
		a1[1] = v18;
		a1[2] = v21;
		a1[3] = (char*)v18 + v15;
	}
	else
	{
		if (v3)
			*v3 = *(v3 - 1);
		a1[2] += 16i64;
		v7 = a1[2];
		v8 = *a3;
		v9 = v7 - 32;
		v10 = (_OWORD*)(v7 - 16);
		for (result = (v7 - 32 - (__int64)a2) >> 4; result > 0; *v10 = v12)
		{
			v12 = *(_OWORD*)(v9 - 16);
			v9 -= 16i64;
			--v10;
			--result;
		}
		*a2 = v8;
	}
	return result;
}

