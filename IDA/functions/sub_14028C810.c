#include "../winhttp.h"

//----- (000000014028C810) ----------------------------------------------------
__int64 __fastcall sub_14028C810(__int64 a1, int a2)
{
	__int64 v2; // r10
	__int64 v4; // rcx
	int v6; // ebp
	int v7; // eax
	int v8; // edx
	__m128i* v9; // r8
	__int64 result; // rax
	int v11; // esi
	unsigned int v12; // r12d
	__int64 v13; // rax
	int* v14; // rax
	unsigned __int64 v15; // r8
	__int64* v16; // r14
	unsigned int v17; // esi
	__int64 v18; // rcx
	__int64* v19; // r14
	unsigned int v20; // esi
	unsigned int v21; // esi
	unsigned int v22; // ebp
	unsigned int v23; // r14d
	__int64 v24; // r15
	unsigned int j; // r8d
	__int64 v26; // rcx
	volatile signed __int32* v27; // rdx
	volatile signed __int32* v28; // rcx
	unsigned int i; // esi
	_QWORD* v30; // r14
	__int64 v31; // rcx
	__int64 v32; // rcx
	unsigned int v33; // edx
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rax

	v2 = *(int*)(a1 + 52);
	v4 = *(_QWORD*)(a1 + 16);
	v6 = *(_DWORD*)(4 * v2 + *(_QWORD*)(v4 + 7040));
	if (v6 || (v7 = 2, *(_QWORD*)(v4 + 6616)))
		v7 = 1;
	v8 = *(_DWORD*)(a1 + 88);
	if (v8 >= v7)
		goto LABEL_49;
	if (a2 < v7)
	{
		if (v8 < v7)
			goto LABEL_65;
	LABEL_49:
		if (a2 < v7)
		{
			if (*(_QWORD*)(a1 + 120))
			{
				v28 = (volatile signed __int32*)(48 * v2 + v4 + 724);
				_InterlockedDecrement(v28);
				_InterlockedExchangeAdd(v28 + 1, -*(_DWORD*)(a1 + 136));
				_InterlockedIncrement(v28 + 4);
				_InterlockedExchangeAdd(v28 + 5, *(_DWORD*)(a1 + 136));
			}
			if (*(_QWORD*)(a1 + 128))
			{
				for (i = 0; i < *(_DWORD*)(a1 + 44); ++i)
				{
					v30 = (_QWORD*)(*(_QWORD*)(a1 + 128) + 8i64 * i);
					if (*v30)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v30 + 16i64))(*v30);
						*v30 = 0i64;
					}
				}
				sub_14018B900(*(_QWORD*)(a1 + 128), 0);
				*(_QWORD*)(a1 + 128) = 0i64;
			}
			v31 = *(_QWORD*)(a1 + 120);
			if (v31)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
				*(_QWORD*)(a1 + 120) = 0i64;
			}
			v32 = *(_QWORD*)(a1 + 104);
			if (v32)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
				*(_QWORD*)(a1 + 104) = 0i64;
			}
			v33 = 0;
			*(_DWORD*)(a1 + 92) = -2147483638;
			*(_DWORD*)(a1 + 96) = 0;
			*(_QWORD*)(a1 + 176) = 0i64;
			if (*(_QWORD*)(a1 + 168))
			{
				v34 = 0i64;
				do
				{
					v35 = 3 * v34;
					v36 = *(_QWORD*)(a1 + 160);
					*(_DWORD*)(v36 + 8 * v35) = 0;
					*(_QWORD*)(v36 + 8 * v35 + 8) = 0i64;
					++v33;
					*(_QWORD*)(v36 + 8 * v35 + 16) = 0i64;
					v34 = v33;
				} while ((unsigned __int64)v33 < *(_QWORD*)(a1 + 168));
			}
		}
		goto LABEL_65;
	}
	v9 = *(__m128i**)(a1 + 72);
	if (v9)
	{
		result = sub_14026C360(
			v4,
			0,
			v9,
			*(_DWORD*)(a1 + 40),
			v2,
			*(_DWORD*)(a1 + 60),
			*(_DWORD*)(a1 + 80),
			(__int64*)(a1 + 104));
		if ((int)result < 0)
		{
		LABEL_8:
			*(_DWORD*)(a1 + 92) = result;
			return result;
		}
	}
	else
	{
		v11 = *(_DWORD*)(4 * v2 + *(_QWORD*)(v4 + 7032));
		if (*(char*)(a1 + 60) < 0)
			v11 |= 0x400u;
		v12 = dword_140AE7B30[*(int*)(a1 + 48)];
		if ((v11 & 1) != 0)
		{
			v13 = 8i64 * *(unsigned int*)(a1 + 44);
			if (!is_mul_ok(*(unsigned int*)(a1 + 44), 8ui64))
				v13 = -1i64;
			v14 = sub_14018B280(v13, 0);
			v15 = 8i64 * *(unsigned int*)(a1 + 44);
			*(_QWORD*)(a1 + 128) = v14;
			sub_1407E4830(v14, 0i64, v15);
			if (dword_140AE64C0[*(int*)(a1 + 48)])
			{
				v18 = *(_QWORD*)(a1 + 16);
				if (*(_DWORD*)(v18 + 216))
				{
					v19 = (__int64*)(a1 + 120);
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, __int64, _QWORD))(**(_QWORD**)(v18 + 6608) + 184i64))(
						*(_QWORD*)(v18 + 6608),
						*(unsigned int*)(a1 + 28),
						*(unsigned int*)(a1 + 32),
						*(unsigned int*)(a1 + 44),
						2,
						v12,
						v6,
						a1 + 120,
						0i64);
					if ((int)result < 0)
						goto LABEL_8;
					if (*(_DWORD*)(a1 + 52) == 5)
						sub_14026BF20(*(_QWORD*)(a1 + 16), *v19);
					v20 = 0;
					if (*(_DWORD*)(a1 + 44))
					{
						do
						{
							result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)*v19 + 144i64))(
								*v19,
								v20,
								*(_QWORD*)(a1 + 128) + 8i64 * v20);
							if ((int)result < 0)
								goto LABEL_8;
						} while (++v20 < *(_DWORD*)(a1 + 44));
					}
				}
				else
				{
					v21 = *(_DWORD*)(a1 + 28);
					v22 = *(_DWORD*)(a1 + 32);
					v23 = 0;
					if (*(_DWORD*)(a1 + 44))
					{
						do
						{
							v24 = 8i64 * v23;
							result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64) + 232i64))(
								*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
								v21,
								v22,
								v12,
								0,
								0,
								0,
								v24 + *(_QWORD*)(a1 + 128),
								0i64);
							if ((int)result < 0)
								goto LABEL_8;
							if (*(_DWORD*)(a1 + 52) == 5)
								sub_14026BF20(*(_QWORD*)(a1 + 16), *(_QWORD*)(v24 + *(_QWORD*)(a1 + 128)));
							if (v21 > 1)
								v21 >>= 1;
							if (v22 > 1)
								v22 >>= 1;
						} while (++v23 < *(_DWORD*)(a1 + 44));
					}
				}
			}
			else
			{
				v16 = (__int64*)(a1 + 120);
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64) + 184i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
					*(unsigned int*)(a1 + 28),
					*(unsigned int*)(a1 + 32),
					*(unsigned int*)(a1 + 44),
					v11,
					v12,
					v6,
					a1 + 120,
					0i64);
				if ((int)result < 0)
					goto LABEL_8;
				if (*(_DWORD*)(a1 + 52) == 5 && *(_DWORD*)(a1 + 48) != 24)
					sub_14026BF20(*(_QWORD*)(a1 + 16), *v16);
				v17 = 0;
				if (*(_DWORD*)(a1 + 44))
				{
					do
					{
						result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)*v16 + 144i64))(
							*v16,
							v17,
							*(_QWORD*)(a1 + 128) + 8i64 * v17);
						if ((int)result < 0)
							goto LABEL_8;
					} while (++v17 < *(_DWORD*)(a1 + 44));
				}
			}
			if (*(_QWORD*)(a1 + 152))
			{
				for (j = 0;
					j < *(_DWORD*)(a1 + 44);
					*(_DWORD*)(*(_QWORD*)(a1 + 152) + 4 * v26) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1)
				{
					v26 = j++;
				}
			}
		}
		else
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, __int64, _QWORD))(**(_QWORD**)(v4 + 6608) + 184i64))(
				*(_QWORD*)(v4 + 6608),
				*(unsigned int*)(a1 + 28),
				*(unsigned int*)(a1 + 32),
				*(unsigned int*)(a1 + 44),
				v11,
				v12,
				v6,
				a1 + 120,
				0i64);
			if ((int)result < 0)
				goto LABEL_8;
			if (*(_DWORD*)(a1 + 52) == 4)
				sub_14026BF20(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 120));
		}
		v27 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
		_InterlockedIncrement(v27);
		_InterlockedExchangeAdd(v27 + 1, *(_DWORD*)(a1 + 136));
		_InterlockedIncrement(v27 + 2);
		_InterlockedExchangeAdd(v27 + 3, *(_DWORD*)(a1 + 136));
		*(_DWORD*)(a1 + 92) = 0;
	}
LABEL_65:
	*(_DWORD*)(a1 + 88) = a2;
	return 0i64;
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140AE7B30: using guessed type int dword_140AE7B30[28];

