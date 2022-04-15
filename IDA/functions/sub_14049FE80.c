#include "../winhttp.h"

//----- (000000014049FE80) ----------------------------------------------------
char __fastcall sub_14049FE80(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	__int64 v6; // rax
	int v7; // eax
	int v8; // edx
	int v9; // ebx

	if (!a2 || !qword_140C65970)
		goto LABEL_9;
	v6 = sub_1403D7BC0(qword_140C65970, a4);
	if (!v6)
	{
		if (a3 == 2)
		{
			LOBYTE(v7) = 1;
			return v7;
		}
	LABEL_9:
		LOBYTE(v7) = 0;
		return v7;
	}
	v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 80i64))(v6, a5);
	v8 = v7;
	v9 = a3 - 1;
	if (v9)
	{
		LOBYTE(v7) = 0;
		if (v9 == 1)
			LOBYTE(v7) = v8 == 0;
	}
	return v7;
}
// 140C65970: using guessed type __int64 qword_140C65970;

