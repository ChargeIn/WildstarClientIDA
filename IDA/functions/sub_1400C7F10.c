#include "../winhttp.h"

//----- (00000001400C7F10) ----------------------------------------------------
char __fastcall sub_1400C7F10(__int64 a1)
{
	unsigned __int64 v2; // rax

	do
	{
		v2 = (unsigned __int64)*(unsigned int*)(a1 + 656) >> 20;
		if ((*(_DWORD*)(a1 + 656) & 0x100000i64) != 0)
			LOBYTE(v2) = sub_1400E8B00(*(_QWORD*)(a1 + 32), a1);
		a1 = *(_QWORD*)(a1 + 16);
	} while (a1);
	return v2;
}

