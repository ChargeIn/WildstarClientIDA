#include "../winhttp.h"

//----- (000000014071E1C0) ----------------------------------------------------
__int64 __fastcall sub_14071E1C0(unsigned int* a1)
{
	__int64 result; // rax
	__int64 v3; // rdx

	result = (*(__int64(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 136i64))(a1);
	if (result)
	{
		v3 = a1[141];
		if ((_DWORD)v3)
			return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)result + 112i64))(result, v3, a1[142]);
		else
			return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)result + 280i64))(result, 0i64);
	}
	return result;
}

