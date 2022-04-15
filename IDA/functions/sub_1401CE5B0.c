#include "../winhttp.h"

//----- (00000001401CE5B0) ----------------------------------------------------
__int64 __fastcall sub_1401CE5B0(_WORD* a1, unsigned __int16* a2)
{
	__int16 v2; // ax
	_WORD* i; // r15
	unsigned __int16 v5; // r8
	__int64 v6; // rbx
	_WORD* v7; // rsi
	bool v8; // zf
	unsigned __int16* v9; // rdi
	unsigned __int16* v10; // r14
	unsigned __int64 v11; // r12
	unsigned __int64 v12; // r13
	__int64 v13; // r8
	__int64 result; // rax
	unsigned __int64 v15; // rbx
	unsigned __int64 v16; // rdi
	BOOL v17; // r13d
	BOOL v18; // r12d
	unsigned __int64 v19; // r8

	v2 = *a1;
	for (i = a1; ; v2 = *i)
	{
		if (!v2)
			goto LABEL_48;
		v5 = *a2;
		if (!*a2)
			break;
		v6 = 0i64;
		v7 = i;
		do
		{
			if (v2 == 92)
				break;
			v8 = v2 == 46;
			v2 = v7[1];
			if (v8)
				v6 = (__int64)v7;
			++v7;
		} while (v2);
		if (!v6)
			v6 = (__int64)v7;
		v9 = 0i64;
		v10 = a2;
		do
		{
			if (v5 == 92)
				break;
			v8 = v5 == 46;
			v5 = v10[1];
			if (v8)
				v9 = v10;
			++v10;
		} while (v5);
		if (!v9)
			v9 = v10;
		v11 = ((__int64)v7 - v6) >> 1;
		v12 = v10 - v9;
		v13 = v11;
		if (v12 < v11)
			v13 = v10 - v9;
		result = sub_14018E3E0(v6, v9, v13);
		if ((_DWORD)result)
			return result;
		if (v11 < v12)
			return 0xFFFFFFFFi64;
		if (v11 > v12)
			return 1i64;
		v15 = (v6 - (__int64)i) >> 1;
		v16 = v9 - a2;
		v17 = v15 == 8 && i[6] == 126 && (unsigned __int16)(i[7] - 48) <= 9u;
		v18 = v16 == 8 && a2[6] == 126 && (unsigned __int16)(a2[7] - 48) <= 9u;
		if (v17)
			v15 = 2i64;
		if (v18)
			v16 = 2i64;
		v19 = v15;
		if (v16 < v15)
			v19 = v16;
		result = sub_14018E3E0((__int64)i, a2, v19);
		if ((_DWORD)result)
			return result;
		if (!v17 && v15 < v16)
			return 0xFFFFFFFFi64;
		if (!v18 && v15 > v16)
			return 1i64;
		i = &v7[*v7 != 0];
		a2 = &v10[*v10 != 0];
	}
	if (*i)
		return !*a2;
LABEL_48:
	if (*a2)
		return 0xFFFFFFFFi64;
	if (*i)
		return !*a2;
	return 0i64;
}
// 1401CE5FA: conditional instruction was optimized away because ax.2!=0

