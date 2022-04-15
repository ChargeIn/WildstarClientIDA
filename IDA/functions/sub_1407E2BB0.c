#include "../winhttp.h"

//----- (00000001407E2BB0) ----------------------------------------------------
LPVOID __fastcall sub_1407E2BB0(unsigned __int64 a1, unsigned __int64 a2)
{
	DWORD v2; // ebx
	LPVOID v5; // rdi

	v2 = 0;
	do
	{
		v5 = sub_1407F0680(a1, a2, 0i64);
		if (v5 || !dword_140C603B0)
			break;
		Sleep(v2);
		v2 += 1000;
		if (v2 > dword_140C603B0)
			v2 = -1;
	} while (v2 != -1);
	return v5;
}
// 140C603B0: using guessed type int dword_140C603B0;

