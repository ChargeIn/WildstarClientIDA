#include "../winhttp.h"

//----- (00000001407E1B40) ----------------------------------------------------
void __fastcall sub_1407E1B40(__int64 a1, char* a2)
{
	__int64 v4; // rdi
	_BYTE* v5; // rax

	if (a2)
	{
		v4 = sub_1407E1990((__int64)a2);
		v5 = sub_1407E1500(v4 + 1);
		*(_QWORD*)(a1 + 8) = v5;
		if (v5)
		{
			sub_1407EA194(v5, v4 + 1, a2);
			*(_BYTE*)(a1 + 16) = 1;
		}
	}
}

