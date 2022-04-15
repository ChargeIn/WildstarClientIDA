#include "../winhttp.h"

//----- (0000000140474B80) ----------------------------------------------------
void __fastcall sub_140474B80(__int64 a1, unsigned int a2, int* a3)
{
	int* v3; // r9

	if (a3)
	{
		v3 = (int*)&word_140B7B704;
		if (*(_QWORD*)(a1 + 16))
			v3 = *(int**)(a1 + 16);
		sub_140003890((__int64*)qword_140C658A0, a2, 0i64, a3, *(_DWORD*)(a1 + 8), v3);
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C658A0: using guessed type __int64 qword_140C658A0;

