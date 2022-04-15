#include "../winhttp.h"

//----- (0000000140498BD0) ----------------------------------------------------
__int64 __fastcall sub_140498BD0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
	if (result)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 48i64))(result);
	return result;
}

