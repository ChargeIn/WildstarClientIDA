#include "../winhttp.h"

//----- (000000014033F490) ----------------------------------------------------
__int64 __fastcall sub_14033F490(__int64 a1, char a2)
{
	__int64 v3; // rcx
	__int64 result; // rax

	if (qword_140C65850)
	{
		if (*(_BYTE*)(qword_140C65850 + 72))
			v3 = *(_QWORD*)(qword_140C65850 + 96);
		else
			v3 = *(_QWORD*)(qword_140C65850 + 104);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 384i64))(v3);
		result = qword_140C65850;
		*(_DWORD*)(qword_140C65850 + 40) = a2 != 0;
	}
	return result;
}
// 140C65850: using guessed type __int64 qword_140C65850;

