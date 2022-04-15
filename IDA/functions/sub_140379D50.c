#include "../winhttp.h"

//----- (0000000140379D50) ----------------------------------------------------
void __fastcall sub_140379D50(__int64 a1, float a2)
{
	__int64 v2; // rax

	if (a2 != *(float*)(a1 + 108))
	{
		v2 = *(_QWORD*)(a1 + 40);
		*(float*)(a1 + 108) = a2;
		if (v2)
			sub_140378A60(a1, *(float*)(v2 + 112));
		else
			sub_140378A60(a1, 1.0);
	}
}

