#include "../winhttp.h"

//----- (00000001404A0B70) ----------------------------------------------------
__int64 __fastcall sub_1404A0B70(__int64 a1, int a2, unsigned int a3)
{
	unsigned int v5; // ebx
	unsigned int v6; // esi
	__int64 v7; // rax
	int v8; // edi

	if (!qword_140C65980)
		return 0i64;
	v5 = 0;
	v6 = 0;
	v7 = sub_140498A40(qword_140C65980, a3, 0);
	if (v7)
		LOBYTE(v6) = *(_DWORD*)(v7 + 464) == 1;
	v8 = a2 - 1;
	if (v8)
	{
		if (v8 == 1)
		{
			LOBYTE(v5) = v6 == 0;
			return v5;
		}
	}
	else
	{
		return v6;
	}
	return v5;
}
// 140C65980: using guessed type __int64 qword_140C65980;

