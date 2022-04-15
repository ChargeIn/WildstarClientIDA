#include "../winhttp.h"

//----- (00000001401B0BD0) ----------------------------------------------------
__int64 __fastcall sub_1401B0BD0(__int64 a1, __int64 a2, _WORD* a3)
{
	int v3; // r9d
	__int64 v4; // r10
	int v7; // eax
	unsigned __int16* v8; // r9
	__int64 v9; // r8
	int v10; // edx
	int v11; // eax

	v3 = (unsigned __int16)*a3;
	v4 = 0i64;
	if (v3 == 42)
	{
		while ((_WORD)v3)
		{
			v3 = (unsigned __int16)a3[v4 + 1];
			v7 = word_140B5F018[++v4];
			if (v3 != v7)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2))
			v8 = 0i64;
		else
			v8 = (unsigned __int16*)sub_1401A4F40(a2 + 24);
		v9 = 0i64;
		if ((unsigned __int16)*a3 != *v8)
			return 0i64;
		LOWORD(v10) = *a3;
		while ((_WORD)v10)
		{
			v10 = (unsigned __int16)a3[v9 + 1];
			v11 = v8[++v9];
			if (v10 != v11)
				return 0i64;
		}
	}
	return 1i64;
}
// 140B5F018: using guessed type unsigned __int16 word_140B5F018[4];

