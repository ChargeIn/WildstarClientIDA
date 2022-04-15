#include "../winhttp.h"

//----- (00000001406E5110) ----------------------------------------------------
__int64 __fastcall sub_1406E5110(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbp
	unsigned __int64 v4; // rsi
	__int64 result; // rax
	__int64 v6; // rbx

	v2 = *a2;
	v4 = (*(__int64(__fastcall**)(_QWORD))(a1 + 2536))(*a2);
	result = v4 / *(_QWORD*)(a1 + 2520);
	v6 = *(_QWORD*)(*(_QWORD*)(a1 + 2528) + 8 * (v4 % *(_QWORD*)(a1 + 2520)));
	if (v6)
	{
		while (1)
		{
			if (v4 == *(_QWORD*)v6)
			{
				result = (*(__int64(__fastcall**)(__int64, __int64))(a1 + 2544))(v2, v6 + 16);
				if ((_DWORD)result)
					break;
			}
			v6 = *(_QWORD*)(v6 + 8);
			if (!v6)
				return result;
		}
		if (v6 != -24)
			return sub_1406E51A0(a1, *(_DWORD**)(v6 + 24));
	}
	return result;
}

