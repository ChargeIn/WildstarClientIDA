#include "../winhttp.h"

//----- (000000014014A230) ----------------------------------------------------
__int64 __fastcall sub_14014A230(_QWORD* a1)
{
	_OWORD* v2; // rsi
	char* v3; // rax
	int v4; // r8d
	const char* v5; // rdx
	char v6; // r9
	const char* v7; // rdx
	__int128 v8; // xmm0
	__int64 result; // rax
	__int128 v10; // xmm0

	v2 = (_OWORD*)sub_140056AB0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v4 = *v3;
	if (v4 == 109)
	{
		v5 = "min";
		v6 = 109;
		while (v6)
		{
			v6 = (v5++)[v3 - "min" + 1];
			if (v6 != *v5)
				goto LABEL_5;
		}
		v8 = *(_OWORD*)sub_140056AB0(a1, 3u);
		result = 0i64;
		*v2 = v8;
	}
	else
	{
	LABEL_5:
		if (v4 != 108)
			LABEL_9 :
			sub_140056570(a1, 2u, "no such index");
		v7 = "lim";
		while ((_BYTE)v4)
		{
			LOBYTE(v4) = (v7++)[v3 - "lim" + 1];
			if ((_BYTE)v4 != *v7)
				goto LABEL_9;
		}
		v10 = *(_OWORD*)sub_140056AB0(a1, 3u);
		result = 0i64;
		v2[1] = v10;
	}
	return result;
}

