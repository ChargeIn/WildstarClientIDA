#include "../winhttp.h"

//----- (0000000140379D90) ----------------------------------------------------
void __fastcall sub_140379D90(__int64 a1, float a2)
{
	__int64 v2; // rax

	if (a2 != *(float*)(a1 + 116))
	{
		v2 = *(_QWORD*)(a1 + 40);
		*(float*)(a1 + 116) = a2;
		if (v2)
			sub_140378AD0(a1, *(float*)(v2 + 120));
		else
			sub_140378AD0(a1, 1.0);
	}
}

