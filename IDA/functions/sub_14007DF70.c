#include "../winhttp.h"

//----- (000000014007DF70) ----------------------------------------------------
__int64 __fastcall sub_14007DF70(__int64 a1, __int64* a2, _QWORD* a3)
{
	_WORD* v6; // rax
	__int64 v7; // r9
	__int64 v8; // r10
	_WORD* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // r8
	_WORD* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdx

	if (a1)
	{
		v6 = (_WORD*)a1;
		v7 = 251i64;
		while (*v6)
		{
			++v6;
			if (!--v7)
				goto LABEL_5;
		}
		v8 = 251 - v7;
	}
	else
	{
	LABEL_5:
		v8 = 0i64;
	}
	v9 = (_WORD*)(a1 + 502);
	*a2 += 16 * (v8 + 1) + 16;
	if (a1 == -502)
	{
	LABEL_10:
		v11 = 0i64;
	}
	else
	{
		v10 = 100i64;
		while (*v9)
		{
			++v9;
			if (!--v10)
				goto LABEL_10;
		}
		v11 = 100 - v10;
	}
	v12 = 16 * (v11 + 4) + *a2;
	v13 = (_WORD*)(a1 + 708);
	*a2 = v12;
	if (a1 == -708)
	{
	LABEL_15:
		v15 = 0i64;
	}
	else
	{
		v14 = 100i64;
		while (*v13)
		{
			++v13;
			if (!--v14)
				goto LABEL_15;
		}
		v15 = 100 - v14;
	}
	*a2 = v12 + 16 * (v15 + 2);
	return sub_14007DC10((_QWORD*)(a1 + 912), a2, a3);
}
// 14007E03E: conditional instruction was optimized away because r9.8!=0
// 14007E04F: conditional instruction was optimized away because rcx.8!=0
// 14007E05C: conditional instruction was optimized away because rcx.8!=0

