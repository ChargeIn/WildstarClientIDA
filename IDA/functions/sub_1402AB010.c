#include "../winhttp.h"

//----- (00000001402AB010) ----------------------------------------------------
__int64 __fastcall sub_1402AB010(__int64 a1, int a2)
{
	__m128i* v4; // r8
	__int64 result; // rax
	__int64 v6; // rcx

	if (*(int*)(a1 + 32) >= 1)
	{
		if (a2 < 1)
		{
			v6 = *(_QWORD*)(a1 + 40);
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				*(_QWORD*)(a1 + 40) = 0i64;
			}
			*(_DWORD*)(a1 + 128) = -2147483638;
		}
	}
	else if (a2 >= 1)
	{
		v4 = *(__m128i**)(a1 + 24);
		if (!v4)
		{
			*(_DWORD*)(a1 + 128) = 0;
			*(_DWORD*)(a1 + 32) = a2;
			return 0i64;
		}
		result = sub_140279ED0(*(_QWORD*)(a1 + 16), 0, v4, 0, 0, 512, 1, (__int64*)(a1 + 40));
		if ((int)result < 0)
		{
			*(_DWORD*)(a1 + 128) = result;
			return result;
		}
	}
	*(_DWORD*)(a1 + 32) = a2;
	return 0i64;
}
// 1402AB093: conditional instruction was optimized away because eax.4<1

