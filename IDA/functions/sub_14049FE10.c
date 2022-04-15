#include "../winhttp.h"

//----- (000000014049FE10) ----------------------------------------------------
__int64 __fastcall sub_14049FE10(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned int v4; // edi
	unsigned int v6; // edx
	__int64 v7; // rax
	int v8; // ebx

	v4 = 0;
	v6 = 0;
	if (qword_140C65970)
	{
		v7 = sub_1403D7BC0(qword_140C65970, a4);
		if (v7)
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 56i64))(v7);
		else
			v6 = 0;
	}
	v8 = a3 - 1;
	if (!v8)
		return v6;
	if (v8 == 1)
		LOBYTE(v4) = v6 == 0;
	return v4;
}
// 140C65970: using guessed type __int64 qword_140C65970;

