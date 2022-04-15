#include "../winhttp.h"

//----- (00000001400F9810) ----------------------------------------------------
_WORD* __fastcall sub_1400F9810(_WORD* a1, __int64 a2, _WORD** a3, char a4)
{
	_WORD* v6; // rbx
	__int64 v7; // rsi
	_WORD* v8; // rbp
	_WORD* v9; // rdi
	bool v10; // zf
	_WORD* result; // rax
	int v12; // [rsp+20h] [rbp-38h]
	int v13; // [rsp+60h] [rbp+8h]
	int v14; // [rsp+68h] [rbp+10h]
	int v15; // [rsp+78h] [rbp+20h]

	LOBYTE(v15) = a4;
	v6 = a1;
	v7 = (a2 - (__int64)a1) >> 3;
	if (v7 > 0)
	{
		v8 = *a3;
		v9 = a3[1];
		do
		{
			HIWORD(v15) = *v6;
			if (sub_1400F9780(v8, (__int64)v9, v15) == v9)
				return v6;
			HIWORD(v13) = v6[1];
			if (sub_1400F9780(v8, (__int64)v9, v13) == v9)
				return v6 + 1;
			HIWORD(v14) = v6[2];
			if (sub_1400F9780(v8, (__int64)v9, v14) == v9)
				return v6 + 2;
			HIWORD(v12) = v6[3];
			if (sub_1400F9780(v8, (__int64)v9, v12) == v9)
				return v6 + 3;
			--v7;
			v6 += 4;
		} while (v7 > 0);
	}
	switch ((a2 - (__int64)v6) >> 1)
	{
	case 1i64:
	LABEL_15:
		HIWORD(v15) = *v6;
		v10 = sub_1400F9780(*a3, (__int64)a3[1], v15) == a3[1];
		result = v6;
		if (v10)
			return result;
		return (_WORD*)a2;
	case 2i64:
		goto LABEL_13;
	case 3i64:
		HIWORD(v15) = *v6;
		if (sub_1400F9780(*a3, (__int64)a3[1], v15) == a3[1])
			return v6;
		++v6;
	LABEL_13:
		HIWORD(v15) = *v6;
		if (sub_1400F9780(*a3, (__int64)a3[1], v15) != a3[1])
		{
			++v6;
			goto LABEL_15;
		}
		return v6;
	}
	return (_WORD*)a2;
}
// 1400F98C9: variable 'v12' is possibly undefined

