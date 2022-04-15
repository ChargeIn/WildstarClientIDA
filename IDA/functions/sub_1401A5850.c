#include "../winhttp.h"

//----- (00000001401A5850) ----------------------------------------------------
__int64 __fastcall sub_1401A5850(__int64 a1, __int64 a2)
{
	_QWORD* i; // rbx

	if ((*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1))
	{
		for (i = *(_QWORD**)(a1 + 48); i; i = (_QWORD*)i[9])
		{
			if (!(*(unsigned __int8(__fastcall**)(_QWORD*, __int64))(*i + 112i64))(i, a2))
				break;
		}
	}
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 32i64))(a2, a1);
}

