#include "../winhttp.h"

//----- (00000001403671F0) ----------------------------------------------------
__int64 __fastcall sub_1403671F0(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdi
	__int64 result; // rax
	_QWORD* v5; // rbx
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	v6 = a1;
	v3 = (*(__int64(__fastcall**)(__int64*))(a2 + 5120))(&v6);
	result = v3 / *(_QWORD*)(a2 + 5104);
	v5 = *(_QWORD**)(*(_QWORD*)(a2 + 5112) + 8 * (v3 % *(_QWORD*)(a2 + 5104)));
	if (v5)
	{
		while (1)
		{
			if (v3 == *v5)
			{
				result = (*(__int64(__fastcall**)(__int64*, _QWORD*))(a2 + 5128))(&v6, v5 + 2);
				if ((_DWORD)result)
					break;
			}
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return result;
		}
		if (v5 != (_QWORD*)-24i64)
			return sub_140376F30(v5[3]);
	}
	return result;
}

