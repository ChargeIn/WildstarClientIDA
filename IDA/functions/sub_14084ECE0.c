#include "../winhttp.h"

//----- (000000014084ECE0) ----------------------------------------------------
__int64 __fastcall sub_14084ECE0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rax

	if ((*(_BYTE*)(a1 + 90) & 4) == 0)
	{
		do
		{
			v2 = *(_QWORD*)(a1 + 64);
			if (!v2)
				break;
			a1 = *(_QWORD*)(a1 + 64);
		} while ((*(_BYTE*)(v2 + 90) & 4) == 0);
	}
	*a2 = *(unsigned __int16*)(a1 + 136);
	return *(unsigned __int16*)(a1 + 138);
}

