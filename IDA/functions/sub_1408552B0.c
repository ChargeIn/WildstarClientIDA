#include "../winhttp.h"

//----- (00000001408552B0) ----------------------------------------------------
__int64 __fastcall sub_1408552B0(unsigned int a1)
{
	__int64 result; // rax
	__int64 v2; // rbx

	result = sub_140830F00(qword_140C61BA8, a1, 0);
	v2 = result;
	if (result)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)result + 328i64))(result);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
	}
	return result;
}

