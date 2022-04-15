#include "../winhttp.h"

//----- (00000001400F94D0) ----------------------------------------------------
_QWORD* __fastcall sub_1400F94D0(_QWORD* a1, __int64* a2, __int64* a3, _WORD** a4, int a5)
{
	__int64* v6; // r12
	__int64 v9; // rbp
	_WORD* v10; // r15
	_WORD* v11; // r12
	__int64 v12; // r13
	_WORD* v13; // r15
	__int64 v14; // rbp
	__int64 v15; // rax
	_WORD* v16; // r15
	_WORD* v17; // r15
	int v19; // [rsp+20h] [rbp-48h]
	int v20; // [rsp+24h] [rbp-44h]
	int v21; // [rsp+78h] [rbp+10h]

	v6 = a3;
	v9 = (*a2 - *a3) >> 3;
	if (v9 > 0)
	{
		while (1)
		{
			v10 = (_WORD*)(*a2 - 2);
			HIWORD(a5) = *v10;
			if (sub_1400F9780(*a4, (__int64)a4[1], a5) == a4[1])
				break;
			*a2 = (__int64)v10;
			HIWORD(v21) = *(v10 - 1);
			v11 = v10 - 1;
			if (sub_1400F9780(*a4, (__int64)a4[1], v21) == a4[1])
			{
				*a1 = v10;
				return a1;
			}
			*a2 = (__int64)v11;
			HIWORD(v19) = *(v10 - 2);
			if (sub_1400F9780(*a4, (__int64)a4[1], v19) == a4[1])
			{
				*a1 = v11;
				return a1;
			}
			*a2 -= 2i64;
			v12 = *a2;
			v13 = (_WORD*)(*a2 - 2);
			HIWORD(v20) = *v13;
			if (sub_1400F9780(*a4, (__int64)a4[1], v20) == a4[1])
			{
				*a1 = v12;
				return a1;
			}
			--v9;
			*a2 = (__int64)v13;
			if (v9 <= 0)
			{
				v6 = a3;
				goto LABEL_8;
			}
		}
		v15 = *a2;
		goto LABEL_23;
	}
LABEL_8:
	v14 = *a2;
	if ((*a2 - *v6) >> 1 == 1)
	{
	LABEL_20:
		v14 = *a2;
		v17 = (_WORD*)(*a2 - 2);
		HIWORD(a5) = *v17;
		if (sub_1400F9780(*a4, (__int64)a4[1], a5) == a4[1])
			goto LABEL_12;
		*a2 = (__int64)v17;
	LABEL_22:
		v15 = *v6;
	LABEL_23:
		*a1 = v15;
		return a1;
	}
	if ((*a2 - *v6) >> 1 == 2)
	{
	LABEL_18:
		v14 = *a2;
		v16 = (_WORD*)(*a2 - 2);
		HIWORD(a5) = *v16;
		if (sub_1400F9780(*a4, (__int64)a4[1], a5) == a4[1])
			goto LABEL_12;
		*a2 = (__int64)v16;
		goto LABEL_20;
	}
	if ((*a2 - *v6) >> 1 != 3)
		goto LABEL_22;
	HIWORD(a5) = *(_WORD*)(v14 - 2);
	if (sub_1400F9780(*a4, (__int64)a4[1], a5) != a4[1])
	{
		*a2 = v14 - 2;
		goto LABEL_18;
	}
LABEL_12:
	*a1 = v14;
	return a1;
}
// 1400F9588: variable 'v19' is possibly undefined
// 1400F95B8: variable 'v20' is possibly undefined

