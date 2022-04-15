#include "../winhttp.h"

//----- (00000001406C69B0) ----------------------------------------------------
__int64 __fastcall sub_1406C69B0(__int64 a1)
{
	__int64 v1; // r8
	__int64 v3; // rbx
	unsigned __int64 i; // rdx
	__int64 v5; // r14
	__int64 v6; // rsi
	__int64 v7; // rcx
	unsigned int v8; // r8d
	unsigned int v9; // r9d
	__int64 result; // rax
	unsigned __int64 j; // rcx
	__int64 v12; // rdx
	unsigned __int64 k; // rcx
	__int64 v14; // rdx
	unsigned __int64 m; // rcx
	__int64 v16; // r14
	__int16 v17; // dx
	wchar_t v18; // ax

	v1 = 0i64;
	v3 = a1 + 1464;
	for (i = 0i64; aSbar[i]; ++i)
		;
	v5 = *(_QWORD*)(a1 + 1472);
	v6 = (*(_QWORD*)(a1 + 1480) - v5) >> 1;
	if (v6 != i)
		goto LABEL_20;
	v7 = 0i64;
	if (i)
	{
		while (*(_WORD*)(v5 + 2 * v7) == aSbar[v7])
		{
			if (++v7 >= i)
				goto LABEL_9;
		}
	LABEL_20:
		for (j = 0i64; aLasbar[j]; ++j)
			;
		if (v6 == j)
		{
			v12 = 0i64;
			if (!j)
				return *(_DWORD*)(a1 + 1496) % 0xCu + 49;
			while (*(_WORD*)(v5 + 2 * v12) == aLasbar[v12])
			{
				if (++v12 >= j)
					return *(_DWORD*)(a1 + 1496) % 0xCu + 49;
			}
		}
		for (k = 0i64; aRmsbar[k]; ++k)
			;
		if (v6 != k)
		{
		LABEL_36:
			for (m = 0i64; aAbar[m]; ++m)
				;
			if (v6 == m)
			{
				if (!m)
					return (unsigned int)(*(_DWORD*)(a1 + 1496) + 49);
				v16 = v5 - (_QWORD)L"ABar";
				while (1)
				{
					v17 = *(wchar_t*)((char*)&aAbar[v1] + v16);
					v18 = aAbar[v1];
					if (v17 != v18)
						break;
					if (++v1 >= m)
						return (unsigned int)(*(_DWORD*)(a1 + 1496) + 49);
				}
			}
			if (!sub_14002C740(v3, L"TSQBar")
				&& !sub_14002C740(v3, L"TSQOBar")
				&& !sub_14002C740(v3, L"TSPEOBar")
				&& !sub_14002C740(v3, L"TSCBar"))
			{
				if (sub_14002C740(v3, L"TSMBar"))
					return 35i64;
				if (sub_14002C740(v3, L"GCBar") && *(_DWORD*)(a1 + 1496) == 5)
					return 33i64;
				if (sub_14002C740(v3, L"GCBar") && *(_DWORD*)(a1 + 1496) == 2)
					return 123i64;
				if (sub_14002C740(v3, L"GCBar") && *(_DWORD*)(a1 + 1496) == 26)
					return 197i64;
				if (sub_14002C740(v3, L"GCBar") && *(_DWORD*)(a1 + 1496) == 27)
					return 198i64;
				return 0xFFFFFFFFi64;
			}
			return 48i64;
		}
		v14 = 0i64;
		if (k)
		{
			while (*(_WORD*)(v5 + 2 * v14) == aRmsbar[v14])
			{
				if (++v14 >= k)
					return *(_DWORD*)(a1 + 1496) % 0xCu + 49;
			}
			goto LABEL_36;
		}
		return *(_DWORD*)(a1 + 1496) % 0xCu + 49;
	}
LABEL_9:
	v8 = *(_DWORD*)(a1 + 1496);
	v9 = v8 % 0xC;
	if (v8 / 0xC == 1)
		return v9 + 190;
	if (v8 / 0xC != 7)
		return 0xFFFFFFFFi64;
	switch (v9)
	{
	case 0u:
		result = 134i64;
		break;
	case 1u:
		result = 135i64;
		break;
	case 2u:
		result = 136i64;
		break;
	case 3u:
		result = 137i64;
		break;
	case 4u:
		result = 138i64;
		break;
	case 5u:
		result = 139i64;
		break;
	case 6u:
		result = 218i64;
		break;
	default:
		return 0xFFFFFFFFi64;
	}
	return result;
}
// 1406C6A5A: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C6B6B: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C6BCA: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C6C4F: conditional instruction was optimized away because ebp.4 is in (==1|==FFFFFFFF)
// 140B39730: using guessed type wchar_t aGcbar[6];
// 140B39758: using guessed type wchar_t aRmsbar[7];
// 140B39778: using guessed type wchar_t aAbar[5];
// 140B39788: using guessed type wchar_t aSbar[5];
// 140B397A8: using guessed type wchar_t aLasbar[7];
// 140B399F0: using guessed type wchar_t aTscbar[7];
// 140B39A10: using guessed type wchar_t aTspeobar[9];
// 140B39A28: using guessed type wchar_t aTsmbar[7];
// 140B39A38: using guessed type wchar_t aTsqbar[7];
// 140B39A48: using guessed type wchar_t aTsqobar[8];

