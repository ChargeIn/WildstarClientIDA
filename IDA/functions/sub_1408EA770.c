#include "../winhttp.h"

//----- (00000001408EA770) ----------------------------------------------------
__int64 __fastcall sub_1408EA770(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx

	result = sub_1408819F0(dword_140C10F28, 424i64);
	v3 = result;
	if (result)
	{
		sub_1408805B0(result, a1);
		*(_QWORD*)v3 = &off_1409B4570;
		*(_QWORD*)(v3 + 392) = 0i64;
		*(_QWORD*)(v3 + 400) = 0i64;
		*(_QWORD*)(v3 + 408) = 0i64;
		*(_QWORD*)(v3 + 416) = 0i64;
		sub_1407E4830((int*)(v3 + 128), 0i64, 0x108ui64);
		return v3;
	}
	return result;
}
// 1409B4570: using guessed type __int64 (__fastcall *off_1409B4570)();
// 140C10F28: using guessed type int dword_140C10F28;

