#include "../winhttp.h"

//----- (0000000140372EE0) ----------------------------------------------------
__int64 __fastcall sub_140372EE0(__int64 a1)
{
	__int64 result; // rax
	bool v3; // zf

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			v3 = *(_DWORD*)(a1 + 24) == 0;
			*(_QWORD*)a1 = off_140B65A70;
			if (!v3)
				sub_1400B6120(*(_QWORD*)(a1 + 16) + 1960i64, a1 + 24);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B65A70: using guessed type __int64 (__fastcall *off_140B65A70[12])();

