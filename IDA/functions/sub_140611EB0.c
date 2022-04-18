#include "../winhttp.h"

//----- (0000000140611EB0) ----------------------------------------------------
__int64 __fastcall sub_140611EB0(__int64 a1, unsigned int* a2)
{
	_DWORD* v4; // rax

	if (qword_140C65960)
	{
		if (a2)
		{
			v4 = (_DWORD*)sub_140432960(qword_140C65960, *a2);
			if (v4)
			{
				v4[24] = a2[1];
				v4[25] = a2[2];
				v4[26] = a2[3];
			}
		}
	}
	Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "SettlerHubUpdated", byte_1409D1147);
	return 0i64;
}
// 1409D1147: using guessed type _BYTE byte_1409D1147[22];
// 140C65960: using guessed type __int64 qword_140C65960;

