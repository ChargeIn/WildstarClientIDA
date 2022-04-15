#include "../winhttp.h"

//----- (00000001402AACA0) ----------------------------------------------------
__int64 __fastcall sub_1402AACA0(__int64 a1)
{
	__int64 result; // rax
	__m128i* v3; // r8
	volatile signed __int32* v4; // rdx
	__int64* v5; // rdx
	__int64 v6; // rax

	result = sub_1402AAF00(a1);
	if ((int)result >= 0)
	{
		if (*(int*)(a1 + 32) < 1)
		{
			v3 = *(__m128i**)(a1 + 24);
			if (v3)
			{
				result = sub_140279ED0(*(_QWORD*)(a1 + 16), 0, v3, 0, 0, 512, 1, (__int64*)(a1 + 40));
				if ((int)result < 0)
				{
					*(_DWORD*)(a1 + 128) = result;
					return result;
				}
			}
			else
			{
				*(_DWORD*)(a1 + 128) = 0;
			}
		}
		v4 = *(volatile signed __int32**)(a1 + 16);
		*(_DWORD*)(a1 + 32) = 2;
		v4 += 253;
		_InterlockedIncrement(v4);
		_InterlockedExchangeAdd(v4 + 1, 0x1000u);
		_InterlockedIncrement(v4 + 2);
		_InterlockedExchangeAdd(v4 + 3, 0x1000u);
		v5 = (__int64*)(*(_QWORD*)(a1 + 16) + 6896i64);
		if (!*(_QWORD*)(a1 + 136))
		{
			*(_QWORD*)(a1 + 136) = v5;
			*(_QWORD*)(a1 + 144) = *v5;
			*v5 = a1;
			v6 = *(_QWORD*)(a1 + 144);
			if (v6)
				*(_QWORD*)(v6 + 136) = a1 + 144;
		}
		return 0i64;
	}
	return result;
}

