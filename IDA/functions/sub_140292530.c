#include "../winhttp.h"

//----- (0000000140292530) ----------------------------------------------------
__int64 __fastcall sub_140292530(__int64 a1, int a2)
{
	__int64 v3; // rcx
	int v4; // r15d
	__int64 v5; // r10
	int v6; // ebp
	int v7; // eax
	int v8; // edx
	__m128i* v9; // r8
	__int64 result; // rax
	unsigned int v11; // esi
	unsigned int v12; // r13d
	__int64 v13; // rax
	int* v14; // rax
	int v15; // edx
	__int64* v16; // r12
	unsigned int v17; // ebp
	int v18; // r15d
	unsigned int v19; // esi
	int* v20; // r14
	__int64 v21; // rcx
	__int64* v22; // r12
	unsigned int v23; // ebp
	int v24; // r15d
	unsigned int v25; // esi
	int* v26; // r14
	unsigned int v27; // ebp
	int v28; // r15d
	unsigned int v29; // r12d
	unsigned int v30; // esi
	__int64 v31; // r14
	unsigned int i; // r9d
	int v33; // ecx
	unsigned int v34; // eax
	volatile signed __int32* v35; // rdx
	volatile signed __int32* v36; // rcx
	unsigned int v37; // ecx
	__int64 v38; // rsi
	__int64 v39; // rbp
	__int64 v40; // r14
	__int64 v41; // rcx
	__int64 v42; // rcx
	__int64 v43; // rcx
	_QWORD* v44; // r8
	__int64 v45; // r9
	unsigned int v46; // edx
	__int64 v47; // rax
	__int64 v48; // rcx
	__int64 v49; // rax
	int v50; // [rsp+90h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 16);
	v4 = a2;
	v5 = *(int*)(a1 + 52);
	v6 = *(_DWORD*)(4 * v5 + *(_QWORD*)(v3 + 7040));
	if (v6 || (v7 = 2, *(_QWORD*)(v3 + 6616)))
		v7 = 1;
	v8 = *(_DWORD*)(a1 + 88);
	if (v8 >= v7)
		goto LABEL_55;
	if (v4 < v7)
	{
		if (v8 < v7)
			goto LABEL_74;
	LABEL_55:
		if (v4 < v7)
		{
			if (*(_QWORD*)(a1 + 120))
			{
				v36 = (volatile signed __int32*)(48 * v5 + v3 + 724);
				_InterlockedDecrement(v36);
				_InterlockedExchangeAdd(v36 + 1, -*(_DWORD*)(a1 + 136));
				_InterlockedIncrement(v36 + 4);
				_InterlockedExchangeAdd(v36 + 5, *(_DWORD*)(a1 + 136));
			}
			if (*(_QWORD*)(a1 + 128))
			{
				v37 = 6 * *(_DWORD*)(a1 + 44);
				if (v37)
				{
					v38 = 0i64;
					v39 = v37;
					do
					{
						v40 = *(_QWORD*)(a1 + 128);
						v41 = *(_QWORD*)(v40 + v38);
						if (v41)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 16i64))(v41);
							*(_QWORD*)(v40 + v38) = 0i64;
						}
						v38 += 8i64;
						--v39;
					} while (v39);
				}
				sub_14018B900(*(_QWORD*)(a1 + 128), 0);
				*(_QWORD*)(a1 + 128) = 0i64;
			}
			v42 = *(_QWORD*)(a1 + 120);
			if (v42)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v42 + 16i64))(v42);
				*(_QWORD*)(a1 + 120) = 0i64;
			}
			v43 = *(_QWORD*)(a1 + 104);
			if (v43)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v43 + 8i64))(v43);
				*(_QWORD*)(a1 + 104) = 0i64;
			}
			*(_DWORD*)(a1 + 92) = -2147483638;
			*(_DWORD*)(a1 + 96) = 0;
			*(_QWORD*)(a1 + 256) = 0i64;
			*(_QWORD*)(a1 + 264) = 0i64;
			*(_QWORD*)(a1 + 272) = 0i64;
			*(_QWORD*)(a1 + 280) = 0i64;
			*(_QWORD*)(a1 + 288) = 0i64;
			v44 = (_QWORD*)(a1 + 168);
			*(_QWORD*)(a1 + 296) = 0i64;
			v45 = 6i64;
			do
			{
				v46 = 0;
				if (*v44)
				{
					v47 = 0i64;
					do
					{
						v48 = 3 * v47;
						v49 = *(v44 - 1);
						*(_DWORD*)(v49 + 8 * v48) = 0;
						*(_QWORD*)(v49 + 8 * v48 + 8) = 0i64;
						++v46;
						*(_QWORD*)(v49 + 8 * v48 + 16) = 0i64;
						v47 = v46;
					} while ((unsigned __int64)v46 < *v44);
				}
				v44 += 2;
				--v45;
			} while (v45);
		}
		goto LABEL_74;
	}
	v9 = *(__m128i**)(a1 + 72);
	if (v9)
	{
		result = sub_14026C360(v3, 2, v9, *(_DWORD*)(a1 + 40), v5, *(_DWORD*)(a1 + 60), 0, (__int64*)(a1 + 104));
		if ((int)result < 0)
		{
		LABEL_8:
			*(_DWORD*)(a1 + 92) = result;
			return result;
		}
	}
	else
	{
		v11 = *(_DWORD*)(4 * v5 + *(_QWORD*)(v3 + 7032));
		if (*(char*)(a1 + 60) < 0)
			v11 |= 0x400u;
		v12 = dword_140AE7B30[*(int*)(a1 + 48)];
		if ((v11 & 1) != 0)
		{
			v13 = 8i64 * (unsigned int)(6 * *(_DWORD*)(a1 + 44));
			if (!is_mul_ok((unsigned int)(6 * *(_DWORD*)(a1 + 44)), 8ui64))
				v13 = -1i64;
			v14 = sub_14018B280(v13, 0);
			v15 = 3 * *(_DWORD*)(a1 + 44);
			*(_QWORD*)(a1 + 128) = v14;
			sub_1407E4830(v14, 0i64, 8i64 * (unsigned int)(2 * v15));
			if (dword_140AE64C0[*(int*)(a1 + 48)])
			{
				v21 = *(_QWORD*)(a1 + 16);
				if (*(_DWORD*)(v21 + 216))
				{
					v22 = (__int64*)(a1 + 120);
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, unsigned int, int, __int64, _QWORD))(**(_QWORD**)(v21 + 6608) + 200i64))(
						*(_QWORD*)(v21 + 6608),
						*(unsigned int*)(a1 + 28),
						*(unsigned int*)(a1 + 44),
						2i64,
						v12,
						v6,
						a1 + 120,
						0i64);
					if ((int)result < 0)
						goto LABEL_8;
					if (*(_DWORD*)(a1 + 52) == 5)
						sub_14026BF20(*(_QWORD*)(a1 + 16), *v22);
					v23 = 0;
					if (*(_DWORD*)(a1 + 44))
					{
						v24 = 0;
					LABEL_32:
						v25 = 0;
						v26 = &dword_140AE7B00;
						while (1)
						{
							result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)*v22 + 144i64))(
								*v22,
								(unsigned int)*v26,
								v23,
								*(_QWORD*)(a1 + 128) + 8i64 * (v24 + v25));
							if ((int)result < 0)
								goto LABEL_8;
							++v25;
							++v26;
							if (v25 >= 6)
							{
								++v23;
								v24 += 6;
								if (v23 < *(_DWORD*)(a1 + 44))
									goto LABEL_32;
								goto LABEL_45;
							}
						}
					}
				}
				else
				{
					v27 = *(_DWORD*)(a1 + 28);
					v50 = 0;
					if (*(_DWORD*)(a1 + 44))
					{
						v28 = 0;
						v29 = 0;
					LABEL_39:
						v30 = v29;
						while (1)
						{
							v31 = 8i64 * v30;
							result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64) + 232i64))(
								*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
								v27,
								v27,
								v12,
								0,
								0,
								0,
								v31 + *(_QWORD*)(a1 + 128),
								0i64);
							if ((int)result < 0)
								goto LABEL_8;
							if (*(_DWORD*)(a1 + 52) == 5)
								sub_14026BF20(*(_QWORD*)(a1 + 16), *(_QWORD*)(v31 + *(_QWORD*)(a1 + 128)));
							++v30;
							if (v28 + v30 >= 6)
							{
								v27 >>= 1;
								v29 += 6;
								v28 -= 6;
								if ((unsigned int)++v50 < *(_DWORD*)(a1 + 44))
									goto LABEL_39;
							LABEL_45:
								v4 = a2;
								break;
							}
						}
					}
				}
			}
			else
			{
				v16 = (__int64*)(a1 + 120);
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, int, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64) + 200i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
					*(unsigned int*)(a1 + 28),
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
					v18 = 0;
				LABEL_21:
					v19 = 0;
					v20 = &dword_140AE7B00;
					while (1)
					{
						result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)*v16 + 144i64))(
							*v16,
							(unsigned int)*v20,
							v17,
							*(_QWORD*)(a1 + 128) + 8i64 * (v18 + v19));
						if ((int)result < 0)
							goto LABEL_8;
						++v19;
						++v20;
						if (v19 >= 6)
						{
							++v17;
							v18 += 6;
							if (v17 < *(_DWORD*)(a1 + 44))
								goto LABEL_21;
							goto LABEL_45;
						}
					}
				}
			}
			if (*(_QWORD*)(a1 + 152))
			{
				for (i = 0;
					i < *(_DWORD*)(a1 + 44);
					*(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64 * (v34 + v33)) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1)
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64 * i) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1;
					*(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64 * (i + *(_DWORD*)(a1 + 44))) = *(_DWORD*)(*(_QWORD*)(a1 + 16)
						+ 240i64)
						- 1;
					*(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64 * (i + 2 * *(_DWORD*)(a1 + 44))) = *(_DWORD*)(*(_QWORD*)(a1 + 16)
						+ 240i64)
						- 1;
					*(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64 * (i + 2 * *(_DWORD*)(a1 + 44) + *(_DWORD*)(a1 + 44))) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1;
					*(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64 * (i + 4 * *(_DWORD*)(a1 + 44))) = *(_DWORD*)(*(_QWORD*)(a1 + 16)
						+ 240i64)
						- 1;
					v33 = *(_DWORD*)(a1 + 44);
					v34 = i + 4 * v33;
					++i;
				}
			}
		}
		else
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, int, __int64, _QWORD))(**(_QWORD**)(v3 + 6608) + 200i64))(
				*(_QWORD*)(v3 + 6608),
				*(unsigned int*)(a1 + 28),
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
		v35 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
		_InterlockedIncrement(v35);
		_InterlockedExchangeAdd(v35 + 1, *(_DWORD*)(a1 + 136));
		_InterlockedIncrement(v35 + 2);
		_InterlockedExchangeAdd(v35 + 3, *(_DWORD*)(a1 + 136));
		*(_DWORD*)(a1 + 92) = 0;
	}
LABEL_74:
	*(_DWORD*)(a1 + 88) = v4;
	return 0i64;
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140AE7B00: using guessed type int dword_140AE7B00;
// 140AE7B30: using guessed type int dword_140AE7B30[28];

