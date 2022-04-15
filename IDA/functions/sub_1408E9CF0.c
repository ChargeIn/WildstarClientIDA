#include "../winhttp.h"

//----- (00000001408E9CF0) ----------------------------------------------------
__int64 __fastcall sub_1408E9CF0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx

	result = sub_1408819F0(dword_140C10F28, 368i64);
	v3 = result;
	if (result)
	{
		sub_14087FF30(result, a1);
		*(_QWORD*)v3 = off_1409B44C0;
		*(_QWORD*)(v3 + 352) = 0i64;
		*(_QWORD*)(v3 + 360) = 0i64;
		sub_1407E4830((int*)(v3 + 88), 0i64, 0x108ui64);
		return v3;
	}
	return result;
}
// 1409B44C0: using guessed type __int64 (__fastcall *off_1409B44C0[21])();
// 140C10F28: using guessed type int dword_140C10F28;

