#include "../winhttp.h"

//----- (00000001408599E0) ----------------------------------------------------
void __fastcall sub_1408599E0(__int64 a1, __int16 a2, __int64 a3, __int64 a4, char a5)
{
	__int64 v5; // r8

	if (!a3 && (!a5 || *(_WORD*)(a1 + 88)))
	{
		v5 = *(_QWORD*)(a1 + 56);
		if (v5)
			*(_WORD*)(v5 + 56) = a2;
		if (!a5)
			*(_WORD*)(a1 + 88) = a2;
	}
}

