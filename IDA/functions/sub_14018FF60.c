#include "../winhttp.h"

//----- (000000014018FF60) ----------------------------------------------------
__int64 __fastcall sub_14018FF60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	_WORD* v3; // r10
	__int64 v4; // rbx
	_WORD* v5; // r9
	_WORD* v6; // rcx
	_WORD* v7; // rdx
	_WORD* v8; // rax

	v3 = *(_WORD**)(a1 + 16);
	v4 = *(_QWORD*)(a1 + 8);
	v5 = *(_WORD**)(a2 + 8);
	if (a3 >= ((__int64)v3 - v4) >> 1)
		return -1i64;
	v6 = (_WORD*)(v4 + 2 * a3);
	if (v6 == v3)
	{
	LABEL_8:
		v6 = v3;
	}
	else
	{
		v7 = &v5[(__int64)(*(_QWORD*)(a2 + 16) - (_QWORD)v5) >> 1];
		while (1)
		{
			v8 = v5;
			if (v5 != v7)
				break;
		LABEL_7:
			if (++v6 == v3)
				goto LABEL_8;
		}
		while (*v6 != *v8)
		{
			if (++v8 == v7)
				goto LABEL_7;
		}
	}
	if (v6 == v3)
		return -1i64;
	else
		return ((__int64)v6 - v4) >> 1;
}

