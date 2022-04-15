#include "../winhttp.h"

//----- (00000001407E2D30) ----------------------------------------------------
char* __fastcall sub_1407E2D30(LPVOID lpMem, unsigned __int64 a2, unsigned __int64 a3)
{
	DWORD v3; // edi
	char* v7; // rbx

	v3 = 0;
	do
	{
		v7 = sub_1407F05F8(lpMem, a2, a3);
		if (v7 || !a3 || !dword_140C603B0)
			break;
		Sleep(v3);
		v3 += 1000;
		if (v3 > dword_140C603B0)
			v3 = -1;
	} while (v3 != -1);
	return v7;
}
// 140C603B0: using guessed type int dword_140C603B0;

