#include "../winhttp.h"

//----- (000000014088B770) ----------------------------------------------------
__int64 __fastcall sub_14088B770(__int64 a1, int a2, float a3, char a4)
{
	char v4; // bl
	__int64 v7; // rax
	__int64 result; // rax
	__int64 v9; // rax

	v4 = 0;
	switch (a2)
	{
	case 0x1000000:
	LABEL_11:
		v9 = *(_QWORD*)(a1 - 40);
		*(float*)(a1 + 44) = a3;
		result = (*(__int64(__fastcall**)(__int64))(v9 + 24))(a1 - 40);
		if (a4)
		{
			*(_QWORD*)(a1 + 16) = 0i64;
			if (v4)
				return (**(__int64(__fastcall***)(__int64, __int64))(a1 - 40))(a1 - 40, 0xFFFFFFFFi64);
		}
		return result;
	case 0x2000000:
		v4 = 1;
		goto LABEL_11;
	case 0x4000000:
		v4 = 1;
		break;
	case 0x8000000:
		break;
	default:
		return result;
	}
	v7 = *(_QWORD*)(a1 - 40);
	*(float*)(a1 + 48) = a3;
	result = (*(__int64(__fastcall**)(__int64))(v7 + 24))(a1 - 40);
	if (a4)
	{
		*(_QWORD*)(a1 + 24) = 0i64;
		if (v4)
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 - 40) + 8i64))(a1 - 40);
	}
	return result;
}

