#include "../winhttp.h"

//----- (0000000140005480) ----------------------------------------------------
__int64 __fastcall sub_140005480(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax
	__int64 v4; // rcx

	if (qword_140C65898)
	{
		if (*(_DWORD*)(qword_140C635F0 + 5896))
			return 2147500037i64;
		goto LABEL_5;
	}
	if (!*(_DWORD*)(qword_140C635F0 + 5896))
		LABEL_5:
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "CREDDRedeemResult", L"i", *a2);
	v4 = qword_140C66DA8;
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
				if (*(_DWORD*)(v4 + 368) != 5)
					break;
				v4 = *(_QWORD*)(v4 + 176);
			} while (v4);
		}
		sub_1400EA3E0(*(_QWORD*)(v4 + 72), "CREDDRedeemResult", byte_1409D0164, *a2);
	}
	return 0i64;
}
// 1409D0164: using guessed type _BYTE byte_1409D0164[2];
// 1409EF79C: using guessed type wchar_t aI_41[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

