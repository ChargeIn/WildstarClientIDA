#include "../winhttp.h"

//----- (0000000140856330) ----------------------------------------------------
__int64 __fastcall sub_140856330(_QWORD* a1)
{
	__int64 result; // rax

	result = sub_1408819F0(dword_140C10F20, 40i64);
	if (result)
	{
		*(_DWORD*)(result + 32) = -1;
		*(_QWORD*)(result + 24) = 0i64;
		*(_DWORD*)(result + 16) &= 0xFFFFF800;
		*(_DWORD*)result = 0;
		*(_QWORD*)(result + 8) = 0i64;
		*(_DWORD*)(result + 4) = -1;
		*(_QWORD*)result = *a1;
		*(_QWORD*)(result + 8) = a1[1];
		*(_QWORD*)(result + 16) = a1[2];
		*(_QWORD*)(result + 24) = a1[3];
		*(_QWORD*)(result + 32) = a1[4];
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

