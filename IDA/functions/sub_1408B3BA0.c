#include "../winhttp.h"

//----- (00000001408B3BA0) ----------------------------------------------------
__int64 __fastcall sub_1408B3BA0(__int64 a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	__int64 result; // rax

	v2 = (_QWORD*)(a1 + 272);
	v3 = 4i64;
	do
	{
		if (*v2)
		{
			result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 16i64))(*(_QWORD*)(a1 + 24));
			*v2 = 0i64;
		}
		++v2;
		--v3;
	} while (v3);
	if (*(_QWORD*)(a1 + 40))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 16i64))(*(_QWORD*)(a1 + 24));
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	return result;
}

