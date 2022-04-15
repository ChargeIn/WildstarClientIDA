#include "../winhttp.h"

//----- (00000001407EE870) ----------------------------------------------------
void __fastcall sub_1407EE870(unsigned __int8 a1, __int64 a2, _DWORD* a3)
{
	int v5; // eax

	if ((*(_BYTE*)(a2 + 24) & 0x40) == 0 || *(_QWORD*)(a2 + 16))
	{
		if (-- * (_DWORD*)(a2 + 8) < 0)
		{
			v5 = sub_1407E88EC((char)a1, a2);
		}
		else
		{
			*(_BYTE*)(*(_QWORD*)a2)++ = a1;
			v5 = a1;
		}
		if (v5 == -1)
			*a3 = -1;
		else
			++* a3;
	}
	else
	{
		++* a3;
	}
}

