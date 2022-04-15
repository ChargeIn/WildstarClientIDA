#include "../winhttp.h"

//----- (000000014044CDF0) ----------------------------------------------------
__int64 __fastcall sub_14044CDF0(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // [rsp+20h] [rbp-18h]

	if (qword_140C65898)
		sub_1400EA3E0(
			*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32736) + 96i64),
			"StoreCompleteOrderVirtualCurrencyPackageResult",
			byte_1409F0024,
			*a2,
			a2[1]);
	v3 = qword_140C66DA8;
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
				if (*(_DWORD*)(v3 + 368) != 5)
					break;
				v3 = *(_QWORD*)(v3 + 176);
			} while (v3);
		}
		LODWORD(v5) = a2[1];
		sub_1400EA3E0(*(_QWORD*)(v3 + 72), "StoreCompleteOrderVirtualCurrencyPackageResult", byte_1409EFFEC, *a2, v5);
	}
	return 0i64;
}
// 14044CE91: variable 'v5' is possibly undefined
// 1409EFFEC: using guessed type _BYTE byte_1409EFFEC[48];
// 1409F0024: using guessed type _BYTE byte_1409F0024[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

