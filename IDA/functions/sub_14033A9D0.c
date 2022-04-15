//----- (000000014033A9D0) ----------------------------------------------------
int* __fastcall sub_14033A9D0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v3; // r9
	__int64 v7; // rax
	__int64 v8; // r8
	_QWORD* v9; // r9
	unsigned __int64 v10; // rdx
	__int64 j; // rdx
	__int64 v12; // rax
	int* result; // rax
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // r14
	int* v17; // rax
	_QWORD* v18; // r8
	int* v19; // rbp
	int* i; // rcx
	_QWORD* v21; // rdx
	_QWORD* v22; // rbx
	_QWORD* v23; // rcx
	__int64 v24; // rcx

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v14 = ((__int64)v3 - a1[1]) / 24;
		if (v14)
			v15 = 2 * v14;
		else
			v15 = 1i64;
		v16 = 6 * (sub_14018A3E0(24 * v15) / 0x18ui64);
		v17 = sub_14018B280(v16 * 4, 0);
		v18 = (_QWORD*)a1[1];
		v19 = v17;
		for (i = v17; v18 != a2; i += 6)
		{
			if (i)
			{
				*(_QWORD*)i = *v18;
				*((_QWORD*)i + 1) = v18[1];
				*((_QWORD*)i + 2) = v18[2];
			}
			v18 += 3;
		}
		if (i)
		{
			*(_QWORD*)i = *a3;
			*((_QWORD*)i + 1) = a3[1];
			*((_QWORD*)i + 2) = a3[2];
		}
		v21 = (_QWORD*)a1[2];
		v22 = i + 6;
		if (a2 != v21)
		{
			v23 = a2;
			do
			{
				if (v22)
				{
					*v22 = *v23;
					v22[1] = v23[1];
					v22[2] = v23[2];
				}
				v23 += 3;
				v22 += 3;
			} while (v23 != v21);
		}
		v24 = a1[1];
		if (v24)
			sub_14018B900(v24, 0);
		result = &v19[v16];
		a1[1] = v19;
		a1[2] = v22;
		a1[3] = &v19[v16];
	}
	else
	{
		if (v3)
		{
			*v3 = *(v3 - 3);
			v3[1] = *(v3 - 2);
			v3[2] = *(v3 - 1);
		}
		a1[2] += 24i64;
		v7 = a1[2];
		v8 = v7 - 48;
		v9 = (_QWORD*)(v7 - 24);
		v10 = (__int64)((unsigned __int128)((v7 - 48 - (__int64)a2) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 2;
		for (j = (v10 >> 63) + v10; j > 0; v9[2] = *(_QWORD*)(v8 + 16))
		{
			v12 = *(_QWORD*)(v8 - 24);
			v8 -= 24i64;
			v9 -= 3;
			*v9 = v12;
			--j;
			v9[1] = *(_QWORD*)(v8 + 8);
		}
		*a2 = *a3;
		a2[1] = a3[1];
		result = (int*)a3[2];
		a2[2] = result;
	}
	return result;
}

