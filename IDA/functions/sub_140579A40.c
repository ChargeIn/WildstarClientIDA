#include "../winhttp.h"

//----- (0000000140579A40) ----------------------------------------------------
void __fastcall sub_140579A40(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v3; // rax
	__int64 v4; // rax

	if (!a2[3])
	{
		a2[3] = a1;
		a2[4] = *a1;
		*a1 = a2;
		v3 = a2[4];
		if (v3)
			*(_QWORD*)(v3 + 24) = a2 + 4;
	}
	if (a3 && !a2[1])
	{
		a2[1] = a3;
		a2[2] = *a3;
		*a3 = a2;
		v4 = a2[2];
		if (v4)
			*(_QWORD*)(v4 + 8) = a2 + 2;
	}
}

