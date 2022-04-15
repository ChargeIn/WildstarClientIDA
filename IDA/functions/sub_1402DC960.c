#include "../winhttp.h"

//----- (00000001402DC960) ----------------------------------------------------
__int64 __fastcall sub_1402DC960(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 1656);
	if (!v1)
		return 0i64;
	while (1)
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD*))(*v1 + 64i64))(v1))
		{
			result = (*(__int64(__fastcall**)(_QWORD*))(*v1 + 40i64))(v1);
			if ((int)result < 0)
				break;
		}
		v1 = (_QWORD*)v1[684];
		if (!v1)
			return 0i64;
	}
	return result;
}

