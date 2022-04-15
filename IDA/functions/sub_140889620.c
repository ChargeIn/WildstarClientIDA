#include "../winhttp.h"

//----- (0000000140889620) ----------------------------------------------------
__int64 __fastcall sub_140889620(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rcx

	result = sub_1408819F0(dword_140C111C0, 40i64);
	*(_QWORD*)a3 = result;
	if (result)
	{
		v6 = *(_QWORD*)(a2 + 8);
		*(_DWORD*)(result + 28) = -1;
		*(_QWORD*)result = 0i64;
		*(_QWORD*)(result + 16) = 0i64;
		*(_DWORD*)(result + 24) = 0;
		*(_QWORD*)(result + 8) = v6;
		*(_WORD*)(result + 32) = 0;
		*(_DWORD*)(*(_QWORD*)a3 + 24i64) = *(_DWORD*)(a2 + 24);
		result = *(_QWORD*)a2;
		**(_QWORD**)a3 = *(_QWORD*)a2;
	}
	return result;
}
// 140C111C0: using guessed type int dword_140C111C0;

