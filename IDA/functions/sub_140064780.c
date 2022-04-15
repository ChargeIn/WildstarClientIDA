#include "../winhttp.h"

//----- (0000000140064780) ----------------------------------------------------
__int64 __fastcall sub_140064780(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rdi
	__int64 result; // rax

	v4 = *(_QWORD*)(a1 + 32);
	result = (*(__int64(__fastcall**)(_QWORD))(v4 + 16))(*(_QWORD*)(v4 + 24));
	if (!result && a4)
		sub_140061040(a1, 4);
	*(_QWORD*)(v4 + 120) += a4 - a3;
	return result;
}

