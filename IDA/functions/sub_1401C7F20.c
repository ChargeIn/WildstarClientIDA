#include "../winhttp.h"

//----- (00000001401C7F20) ----------------------------------------------------
__int64 __fastcall sub_1401C7F20(__int64 a1, unsigned int* a2)
{
	__int64 v4; // rbx
	__int64 v5; // rdx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 48i64))(*(_QWORD*)(a1 + 104));
	v4 = *(_QWORD*)(a1 + 32);
	if (*a2)
		v5 = (unsigned int)sub_14001C520(a2);
	else
		v5 = 0i64;
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 32i64))(v4, v5);
}

