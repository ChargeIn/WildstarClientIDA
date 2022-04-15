#include "../winhttp.h"

//----- (000000014049D1C0) ----------------------------------------------------
char __fastcall sub_14049D1C0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	int v5; // eax
	int v6; // ecx
	int v7; // ebx

	v5 = sub_1403AC590(qword_140C65898 + 160, 1, a4);
	v6 = v5;
	v7 = a3 - 1;
	if (v7)
	{
		LOBYTE(v5) = 0;
		if (v7 == 1)
			LOBYTE(v5) = v6 == 0;
	}
	return v5;
}
// 140C65898: using guessed type __int64 qword_140C65898;

