#include "../winhttp.h"

//----- (00000001404A0540) ----------------------------------------------------
char __fastcall sub_1404A0540(__int64 a1, int a2, unsigned int a3)
{
	int v4; // eax
	int v5; // edx
	int v6; // ebx

	if (qword_140C65980)
	{
		v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 72i64))(
			qword_140C65980,
			a3,
			0i64);
		v5 = v4;
		v6 = a2 - 1;
		if (v6)
		{
			LOBYTE(v4) = 0;
			if (v6 == 1)
				LOBYTE(v4) = v5 == 0;
		}
	}
	else
	{
		LOBYTE(v4) = 0;
	}
	return v4;
}
// 140C65980: using guessed type __int64 qword_140C65980;

