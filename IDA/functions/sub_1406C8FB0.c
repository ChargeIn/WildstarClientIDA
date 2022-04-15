#include "../winhttp.h"

//----- (00000001406C8FB0) ----------------------------------------------------
char __fastcall sub_1406C8FB0(__int64 a1, int a2)
{
	void(__fastcall * **v5)(_QWORD, __int64); // rax
	void(__fastcall * **v6)(_QWORD, __int64); // rdi
	__int64 v7; // rcx
	__int64 v8; // rax
	__m128i* v9; // r9
	__m128i* v10; // rax
	__m128i* v11; // r9
	__m128i* v12; // rax
	unsigned __int64 i; // rcx
	__int64 v14; // r10
	__int64 v15; // rdx
	__int64 v16; // r10
	__int64 v17; // rsi
	__int64 v18; // rbp
	__int64 v19; // rcx
	_DWORD* v20; // r14
	__int64 v21; // rcx
	void(__fastcall * **v22)(_QWORD, __int64); // rcx
	__int64 v23; // rcx
	int v24; // [rsp+30h] [rbp-28h] BYREF
	__int64 v25; // [rsp+34h] [rbp-24h]
	int v26; // [rsp+3Ch] [rbp-1Ch]

	*(_BYTE*)(a1 + 1436) &= 0x1Fu;
	if ((*(_DWORD*)(a1 + 664) & 0x1000i64) != 0)
		return 0;
	v5 = sub_1406C5440(a1);
	v6 = v5;
	if (!v5 || !((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v5)[1])(v5))
		return 0;
	v7 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v6)[4])(v6);
	v8 = *(_QWORD*)(a1 + 1800);
	if (a2)
	{
		if (v8)
		{
			v10 = *(__m128i**)(v8 + 32);
			v9 = (__m128i*) & word_140B7B704;
			if (v10)
				v9 = v10;
		}
		else
		{
			v9 = 0i64;
		}
		sub_1400E9780(*(_QWORD**)(a1 + 32), a1, (int*)&qword_140B397D0, v9, v7, 0i64);
	}
	else
	{
		if (v8)
		{
			v12 = *(__m128i**)(v8 + 32);
			v11 = (__m128i*) & word_140B7B704;
			if (v12)
				v11 = v12;
		}
		else
		{
			v11 = 0i64;
		}
		sub_1400E9500(*(_QWORD**)(a1 + 32), a1, (int*)&qword_140B397D0, v11, v7, 0i64);
	}
	for (i = 0i64; aAbar[i]; ++i)
		;
	v14 = *(_QWORD*)(a1 + 1472);
	if ((*(_QWORD*)(a1 + 1480) - v14) >> 1 == i)
	{
		v15 = 0i64;
		if (i)
		{
			v16 = v14 - (_QWORD)L"ABar";
			while (*(wchar_t*)((char*)&aAbar[v15] + v16) == aAbar[v15])
			{
				if (++v15 >= i)
					goto LABEL_26;
			}
		}
		else
		{
		LABEL_26:
			v17 = qword_140C65898;
			v18 = *(unsigned int*)(a1 + 1496);
			if (*(_QWORD*)(qword_140C65898 + 120))
			{
				if ((unsigned int)v18 < 0x30)
				{
					v19 = v18 + 48i64 * *(unsigned int*)(qword_140C65898 + 28140);
					v20 = *(_DWORD**)(qword_140C65898 + 8 * v19 + 2752);
					if (!v20
						|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)v20 + 8i64))(
							*(_QWORD*)(qword_140C65898 + 8 * v19 + 2752),
							v15)
						|| v20[69])
					{
						v21 = *(_QWORD*)(v17 + 8 * (v18 + 48i64 * *(unsigned int*)(v17 + 28140)) + 2752);
						if (v21)
						{
							if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v21 + 16i64))(v21, v15))
							{
								v22 = *(void(__fastcall****)(_QWORD, __int64))(v17
									+ 8 * (v18 + 48i64 * *(unsigned int*)(v17 + 28140))
									+ 2752);
								if (v22)
									(**v22)(v22, 1i64);
							}
						}
						*(_QWORD*)(v17 + 8 * (v18 + 48i64 * *(unsigned int*)(v17 + 28140)) + 2752) = 0i64;
						v24 = 0;
						v26 = 0;
						v25 = 0i64;
						LOBYTE(v26) = *(_BYTE*)(v17 + 28140);
						LOBYTE(v24) = v18;
						sub_1403F4900(v17, 0x16Au, (__int64)&v24);
					}
				}
			}
		}
	}
	v23 = *(_QWORD*)(a1 + 1800);
	if (v23)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
		*(_QWORD*)(a1 + 1800) = 0i64;
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 488i64))(a1, 0i64);
	*(_BYTE*)(a1 + 3104) = 0;
	return 1;
}
// 1406C911F: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C91AE: variable 'v15' is possibly undefined
// 140B39778: using guessed type wchar_t aAbar[5];
// 140B397D0: using guessed type __int64 qword_140B397D0;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

