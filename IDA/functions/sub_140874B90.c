#include "../winhttp.h"

//----- (0000000140874B90) ----------------------------------------------------
__int64 __fastcall sub_140874B90(__int16 a1, int a2)
{
	__int64 result; // rax
	__int64 v5; // rbx

	result = sub_1408819F0(dword_140C10F20, 104i64);
	v5 = result;
	if (result)
	{
		sub_140876CB0(result, a1, a2);
		*(_QWORD*)v5 = off_1409A64C0;
		*(_BYTE*)(v5 + 96) = 1;
		sub_140855760(v5);
		return v5;
	}
	return result;
}
// 1409A64C0: using guessed type __int64 (__fastcall *off_1409A64C0[6])();
// 140C10F20: using guessed type int dword_140C10F20;

