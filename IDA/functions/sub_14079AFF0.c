//----- (000000014079AFF0) ----------------------------------------------------
_QWORD* __fastcall sub_14079AFF0(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rsi
	_QWORD* v4; // rax
	_QWORD* v5; // rdi
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	_QWORD* v8; // r14
	__int64 v9; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v12; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v15; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	_QWORD* result; // rax
	_QWORD* v19; // rdi
	_QWORD* v20; // rax
	_QWORD* v21; // rbx
	_QWORD* v22; // rsi
	__int64 v23; // rax
	_QWORD* jj; // rax
	__int64 kk; // rax
	__int64 v26; // rax
	__int64 v27; // r14
	__int64 v28; // rbp
	__int64 v29; // r15
	__int64 v30; // rsi
	__int64 v31; // rbx

	v1 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = (_QWORD*)v3[6];
			v5 = (_QWORD*)v4[2];
			if (v5 != v4)
			{
				do
				{
					v6 = (_QWORD*)v5[6];
					v7 = (_QWORD*)v6[2];
					if (v7 != v6)
					{
						do
						{
							v8 = (_QWORD*)v7[5];
							if (v8)
							{
								if (*v8)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v8 - 16i64) + 8i64))(*v8 - 16i64);
								sub_14018B900((__int64)v8, 0);
							}
							v9 = v7[3];
							if (v9)
							{
								v7 = (_QWORD*)v7[3];
								for (i = *(_QWORD**)(v9 + 16); i; i = (_QWORD*)i[2])
									v7 = i;
							}
							else
							{
								for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
									v7 = (_QWORD*)j;
								if (v7[3] != j)
									v7 = (_QWORD*)j;
							}
						} while (v7 != (_QWORD*)v5[6]);
					}
					v12 = v5[3];
					if (v12)
					{
						v5 = (_QWORD*)v5[3];
						for (k = *(_QWORD**)(v12 + 16); k; k = (_QWORD*)k[2])
							v5 = k;
					}
					else
					{
						for (m = v5[1]; v5 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
							v5 = (_QWORD*)m;
						if (v5[3] != m)
							v5 = (_QWORD*)m;
					}
				} while (v5 != (_QWORD*)v3[6]);
			}
			v15 = v3[3];
			if (v15)
			{
				v3 = (_QWORD*)v3[3];
				for (n = *(_QWORD**)(v15 + 16); n; n = (_QWORD*)n[2])
					v3 = n;
			}
			else
			{
				for (ii = v3[1]; v3 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v3 = (_QWORD*)ii;
				if (v3[3] != ii)
					v3 = (_QWORD*)ii;
			}
		} while (v3 != (_QWORD*)a1[2]);
	}
	if (a1[3])
	{
		sub_14079B3E0((__int64)(a1 + 1), *(_QWORD**)(a1[2] + 8i64));
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	result = (_QWORD*)a1[6];
	v19 = (_QWORD*)result[2];
	if (v19 != result)
	{
		do
		{
			v20 = (_QWORD*)v19[6];
			v21 = (_QWORD*)v20[2];
			if (v21 != v20)
			{
				do
				{
					v22 = (_QWORD*)v21[5];
					if (v22)
					{
						if (*v22)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v22 - 16i64) + 8i64))(*v22 - 16i64);
						sub_14018B900((__int64)v22, 0);
					}
					v23 = v21[3];
					if (v23)
					{
						v21 = (_QWORD*)v21[3];
						for (jj = *(_QWORD**)(v23 + 16); jj; jj = (_QWORD*)jj[2])
							v21 = jj;
					}
					else
					{
						for (kk = v21[1]; v21 == *(_QWORD**)(kk + 24); kk = *(_QWORD*)(kk + 8))
							v21 = (_QWORD*)kk;
						if (v21[3] != kk)
							v21 = (_QWORD*)kk;
					}
				} while (v21 != (_QWORD*)v19[6]);
			}
			v26 = v19[3];
			if (v26)
			{
				v19 = (_QWORD*)v19[3];
				for (result = *(_QWORD**)(v26 + 16); result; result = (_QWORD*)result[2])
					v19 = result;
			}
			else
			{
				for (result = (_QWORD*)v19[1]; v19 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v19 = result;
				if ((_QWORD*)v19[3] != result)
					v19 = result;
			}
		} while (v19 != (_QWORD*)a1[6]);
	}
	v27 = (__int64)(a1 + 5);
	if (a1[7])
	{
		v28 = *(_QWORD*)(a1[6] + 8i64);
		if (v28)
		{
			do
			{
				sub_140032150(v27, *(_QWORD**)(v28 + 24));
				v29 = *(_QWORD*)(v28 + 16);
				if (*(_QWORD*)(v28 + 56))
				{
					v30 = *(_QWORD*)(*(_QWORD*)(v28 + 48) + 8i64);
					if (v30)
					{
						do
						{
							sub_1400083B0(v28 + 40, *(_QWORD*)(v30 + 24));
							v31 = *(_QWORD*)(v30 + 16);
							sub_14018B900(v30, 0);
							v30 = v31;
						} while (v31);
					}
					*(_QWORD*)(*(_QWORD*)(v28 + 48) + 16i64) = *(_QWORD*)(v28 + 48);
					*(_QWORD*)(*(_QWORD*)(v28 + 48) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v28 + 48) + 24i64) = *(_QWORD*)(v28 + 48);
					*(_QWORD*)(v28 + 56) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v28 + 48), 0);
				sub_14018B900(v28, 0);
				v28 = v29;
			} while (v29);
		}
		*(_QWORD*)(*(_QWORD*)(v27 + 8) + 16i64) = *(_QWORD*)(v27 + 8);
		*(_QWORD*)(*(_QWORD*)(v27 + 8) + 8i64) = 0i64;
		result = *(_QWORD**)(v27 + 8);
		result[3] = result;
		*(_QWORD*)(v27 + 16) = 0i64;
	}
	return result;
}

