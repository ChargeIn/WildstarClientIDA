#include "../winhttp.h"

//----- (000000014085B140) ----------------------------------------------------
void __fastcall sub_14085B140(__int64 a1, char a2, char a3)
{
	if (a1 == qword_140C62458)
	{
		if (qword_140C61CC0)
			sub_1408637A0((_BYTE*)qword_140C61CC0, a2, a3);
	}
	else
	{
		sub_140831D90(*(_DWORD*)(a1 + 24), a2, a3);
	}
}
// 140C61CC0: using guessed type __int64 qword_140C61CC0;
// 140C62458: using guessed type __int64 qword_140C62458;

