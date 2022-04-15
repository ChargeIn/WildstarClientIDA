#include "../winhttp.h"

//----- (00000001406D9120) ----------------------------------------------------
__int64 __fastcall sub_1406D9120(__int64 a1, int* a2)
{
	int v4; // eax
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rbx
	int v8; // ecx
	int v9; // eax
	__int64 v10; // rdx
	_DWORD* v11; // rax
	__int64 v12; // r9
	int v13; // ecx
	_DWORD* v14; // r8
	const __m128i* v15; // r8
	__int64 v16; // rax
	const __m128i* v17; // rax

	if (*a2 >= *(_DWORD*)(a1 + 716) && *a2 < *(_DWORD*)(a1 + 724))
	{
		v4 = a2[1];
		if (v4 >= *(_DWORD*)(a1 + 720) && v4 < *(_DWORD*)(a1 + 728))
		{
			v5 = *(_QWORD*)a1;
			v6 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 1028));
			(*(void(__fastcall**)(__int64, const char*, __int64, __int64, _QWORD))(v5 + 120))(
				a1,
				"iOi",
				3i64,
				v6,
				*(_QWORD*)(a1 + 1028));
		}
	}
	if (*(_BYTE*)(a1 + 1024))
	{
		v7 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 1028));
		if (v7)
		{
			v8 = a2[1] - *(_DWORD*)(a1 + 908);
			if ((*a2 - *(_DWORD*)(a1 + 904)) * (*a2 - *(_DWORD*)(a1 + 904)) + v8 * v8 >= 49
				&& !*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64)
				&& (unsigned int)sub_14018CDF0() - *(_DWORD*)(a1 + 932) > 0x7D)
			{
				v9 = *(_DWORD*)(v7 + 32);
				if (v9 < 300)
					v10 = *(unsigned __int8*)(v7 + 36) | ((unsigned __int64)(unsigned __int8)v9 << 8);
				else
					v10 = -1i64;
				v11 = *(_DWORD**)(v7 + 72);
				v12 = *(_QWORD*)(v7 + 64);
				v13 = *(_DWORD*)(v12 + 344);
				v14 = v11;
				if (!v11)
					v14 = (_DWORD*)(v12 + 8);
				if (v14)
				{
					if (!v11)
						v11 = (_DWORD*)(v12 + 8);
					v13 = *v11;
				}
				v15 = 0i64;
				if ((unsigned int)(v13 - 1) <= 6)
				{
					v16 = *(_QWORD*)(a1 + 48i64 * v13 + 2192);
					if (v16)
					{
						v17 = *(const __m128i**)(v16 + 32);
						v15 = (const __m128i*) & word_140B7B704;
						if (v17)
							v15 = v17;
					}
				}
				sub_1400E9500(*(_QWORD**)(a1 + 32), a1, (int*)&qword_140B3CBA0, *(__m128i**)(v12 + 488), v10, v15);
			}
		}
	}
	return sub_1400D23B0(a1, a2);
}
// 140B3CBA0: using guessed type __int64 qword_140B3CBA0;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

