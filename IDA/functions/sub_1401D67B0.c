#include "../winhttp.h"

//----- (00000001401D67B0) ----------------------------------------------------
__int64 __fastcall sub_1401D67B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v6; // rdx
	__int64 v7; // rcx
	unsigned __int64 v8; // r8
	__int64 result; // rax
	unsigned int v10; // eax

	while (1)
	{
		v6 = a2;
		if (!*(_DWORD*)(a1 + 68))
		{
			v7 = *(_QWORD*)(a1 + 48);
			v8 = (unsigned int)(*(_DWORD*)(a1 + 12) - *(_DWORD*)(a1 + 64));
			if (a2 - v7 > v8)
				v6 = v8 + v7;
		}
		result = sub_1401D5110((int*)a1, v6, a3);
		if ((_DWORD)result)
			break;
		if (!*(_DWORD*)(a1 + 68))
		{
			v10 = *(_DWORD*)(a1 + 12);
			if (*(_DWORD*)(a1 + 64) >= v10)
				*(_DWORD*)(a1 + 68) = v10;
		}
		sub_1401D6720(a1, a2);
		if (*(_QWORD*)(a1 + 48) >= a2 || *(_QWORD*)(a1 + 32) >= a3 || *(_DWORD*)(a1 + 92) >= 0x112u)
		{
			if (*(_DWORD*)(a1 + 92) > 0x112u)
				*(_DWORD*)(a1 + 92) = 274;
			return 0i64;
		}
	}
	return result;
}

