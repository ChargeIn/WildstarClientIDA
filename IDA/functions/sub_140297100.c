#include "../winhttp.h"

//----- (0000000140297100) ----------------------------------------------------
__int64 __fastcall sub_140297100(__int64 a1)
{
	__int64 result; // rax
	volatile signed __int32* v3; // rcx
	__int64* v4; // rdx
	__int64 v5; // rax

	result = sub_140297290(a1, 2);
	if ((int)result >= 0)
	{
		v3 = (volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 1012i64);
		_InterlockedIncrement(v3);
		_InterlockedExchangeAdd(v3 + 1, *(_DWORD*)(a1 + 56));
		_InterlockedIncrement(v3 + 2);
		_InterlockedExchangeAdd(v3 + 3, *(_DWORD*)(a1 + 56));
		v4 = (__int64*)(*(_QWORD*)(a1 + 16) + 7256i64);
		if (!*(_QWORD*)(a1 + 120))
		{
			*(_QWORD*)(a1 + 120) = v4;
			*(_QWORD*)(a1 + 128) = *v4;
			*v4 = a1;
			v5 = *(_QWORD*)(a1 + 128);
			if (v5)
				*(_QWORD*)(v5 + 120) = a1 + 128;
		}
		return 0i64;
	}
	return result;
}

