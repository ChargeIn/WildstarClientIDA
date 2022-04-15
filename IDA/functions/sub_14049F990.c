#include "../winhttp.h"

//----- (000000014049F990) ----------------------------------------------------
char __fastcall sub_14049F990(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	int v4; // eax
	int v5; // edx
	int v6; // r10d
	int v7; // r10d

	if (qword_140C65948)
	{
		v4 = sub_14048D530(a1, a4);
		v5 = v4;
		v7 = v6 - 1;
		if (v7)
		{
			LOBYTE(v4) = 0;
			if (v7 == 1)
				LOBYTE(v4) = v5 == 0;
		}
	}
	else
	{
		LOBYTE(v4) = 0;
	}
	return v4;
}
// 14049F9B2: variable 'v6' is possibly undefined
// 140C65948: using guessed type __int64 qword_140C65948;

