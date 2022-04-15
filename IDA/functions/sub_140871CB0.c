#include "../winhttp.h"

//----- (0000000140871CB0) ----------------------------------------------------
__int64 __fastcall sub_140871CB0(__int64 a1, int a2, char a3)
{
	int v3; // r8d
	unsigned int v5; // r8d
	int* v6; // rax

	*(_BYTE*)(a1 + 204) = a3;
	v3 = 0;
	*(_WORD*)(a1 + 202) = a2;
	*(_WORD*)(a1 + 205) = 257;
	*(_WORD*)(a1 + 200) = 8;
	for (*(_BYTE*)(a1 + 207) = 1; a2; a2 &= a2 - 1)
		++v3;
	v5 = 16 * v3;
	*(_DWORD*)(a1 + 184) = v5;
	v6 = (int*)sub_1408819F0(dword_140C10F28, v5);
	*(_QWORD*)(a1 + 176) = v6;
	if (!v6)
		return 52i64;
	sub_1407E4830(v6, 0i64, *(unsigned int*)(a1 + 184));
	return 1i64;
}
// 140C10F28: using guessed type int dword_140C10F28;

