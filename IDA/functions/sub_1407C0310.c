//----- (00000001407C0310) ----------------------------------------------------
int __fastcall sub_1407C0310(__int64 a1, const __m128i* a2, __int64 a3)
{
	int result; // eax
	__int64 v6; // rdx
	__int64 v7; // rbx
	_QWORD* i; // rax
	_QWORD* v9; // rdx
	_QWORD* v10; // rbx
	__int64 j; // rdi
	_QWORD* k; // rdx
	_QWORD* v13; // r8
	__int64 v14; // [rsp+48h] [rbp+10h] BYREF

	if (!a2 || !a3)
		return -2147024809;
	result = sub_1401B5B50(*(__int64*)&qword_140C63788, a2, 2i64, 0, &v14);
	if (result >= 0)
	{
		v7 = sub_1407C04B0((_QWORD**)a1, v6, a3);
		sub_1407C0770((_QWORD**)a1, v7, (unsigned int*)(a3 + 8));
		sub_1407C0830((_QWORD**)a1, v7, *(char**)(a3 + 64), *(unsigned int*)(a3 + 56), a3 + 64);
		sub_1407C0970((_QWORD**)a1, v7, *(int**)(a3 + 80), 4i64 * *(unsigned int*)(a3 + 72), a3 + 80);
		for (i = *(_QWORD**)(a1 + 8); i; i = (_QWORD*)i[5])
		{
			v9 = (_QWORD*)i[3];
			if (v9)
			{
				i[4] = *v9;
				*v9 = i[2];
			}
		}
		v10 = *(_QWORD**)(a1 + 8);
		for (j = v14; v10; v10 = (_QWORD*)v10[5])
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)j + 112i64))(
				j,
				*v10,
				v10[1],
				0i64,
				0i64);
			(*(void(__fastcall**)(__int64, __int64*, unsigned __int64, _QWORD, _QWORD))(*(_QWORD*)j + 112i64))(
				j,
				&qword_140B720B8,
				((v10[1] + 15i64) & 0xFFFFFFFFFFFFFFF0ui64) - v10[1],
				0i64,
				0i64);
		}
		for (k = *(_QWORD**)(a1 + 8); k; k = (_QWORD*)k[5])
		{
			v13 = (_QWORD*)k[3];
			if (v13)
				*v13 = k[4];
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)j + 136i64))(j);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)j + 8i64))(j);
		return 0;
	}
	return result;
}
// 1407C0362: variable 'v6' is possibly undefined
// 140B720B8: using guessed type __int64 qword_140B720B8;

