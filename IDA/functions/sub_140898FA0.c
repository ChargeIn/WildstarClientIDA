#include "../winhttp.h"

//----- (0000000140898FA0) ----------------------------------------------------
__int64 __fastcall sub_140898FA0(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 v2; // rcx
	__int64 result; // rax

	for (i = *(_QWORD**)(a1 + 160); i; i = (_QWORD*)*i)
	{
		v2 = i[1];
		if (v2)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 72i64))(v2);
	}
	return result;
}

