#include "../winhttp.h"

//----- (00000001400CB660) ----------------------------------------------------
void __fastcall sub_1400CB660(__int64 a1)
{
	__int64* v1; // rcx
	__int64 v2; // rax

	*(_BYTE*)(a1 + 30) &= ~1u;
	v1 = (__int64*)(a1 + 16);
	if (*v1)
	{
		do
		{
			v2 = *v1;
			if ((*(_BYTE*)(*v1 + 30) & 1) == 0)
				break;
			*(_BYTE*)(v2 + 30) &= ~1u;
			v1 = (__int64*)(v2 + 16);
		} while (*(_QWORD*)(v2 + 16));
	}
}

