#include "../winhttp.h"

//----- (0000000140831D90) ----------------------------------------------------
void __fastcall sub_140831D90(int a1, char a2, char a3)
{
	__int64 i; // rbx
	__int64 v7; // rdi

	for (i = qword_140C61CC8; i != qword_140C61CD0; i += 8i64)
	{
		v7 = *(_QWORD*)i;
		if ((unsigned int)sub_14085CF90((__int64*)(*(_QWORD*)i + 1088i64)) == a1)
			sub_1408637A0((_BYTE*)(v7 + 32), a2, a3);
	}
}
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

