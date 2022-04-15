#include "../winhttp.h"

//----- (0000000140378FF0) ----------------------------------------------------
__int64 __fastcall sub_140378FF0(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
	__int64 v8; // rsi
	__int64 result; // rax
	__int64 v10; // rbx

	v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 56i64))(*(_QWORD*)(a1 + 48));
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 64i64))(*(_QWORD*)(a1 + 48));
	v10 = result;
	if (v8)
	{
		result = sub_140379200((_DWORD*)a1, a3);
		if ((_DWORD)result)
			return (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)v8 + 1320i64))(
				v8,
				a2,
				(unsigned int)result,
				a4);
	}
	else if (result)
	{
		result = sub_140379200((_DWORD*)a1, a3);
		if ((_DWORD)result)
			return (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)v10 + 424i64))(
				v10,
				a2,
				(unsigned int)result,
				a4);
	}
	return result;
}

