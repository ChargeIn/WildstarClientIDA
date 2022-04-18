#include "../winhttp.h"

//----- (000000014044C780) ----------------------------------------------------
__int64 __fastcall sub_14044C780(__int64 a1, unsigned int a2, int a3)
{
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // [rsp+20h] [rbp-18h]

	if (qword_140C65898)
		Apollo_LUAEvent(
			*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32736) + 96i64),
			"StorePurchaseOfferResult",
			byte_1409F00AC,
			a2,
			a3);
	v5 = qword_140C66DA8;
	result = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(result + 368) == 5)
		{
			result = *(_QWORD*)(result + 176);
			if (!result)
				return result;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v5 + 368) != 5)
					break;
				v5 = *(_QWORD*)(v5 + 176);
			} while (v5);
		}
		LODWORD(v7) = a3;
		Apollo_LUAEvent(*(_QWORD*)(v5 + 72), "StorePurchaseOfferResult", byte_1409F007C, a2, v7);
	}
	return 0i64;
}
// 14044C823: variable 'v7' is possibly undefined
// 1409F007C: using guessed type _BYTE byte_1409F007C[40];
// 1409F00AC: using guessed type _BYTE byte_1409F00AC[104];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

