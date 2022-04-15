#include "../winhttp.h"

//----- (000000014084BE70) ----------------------------------------------------
__int64 __fastcall sub_14084BE70(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // ecx
	int v6; // edx
	int i; // r8d
	__int64 v8; // rdx

	result = 1i64;
	if ((*(_BYTE*)(a1 + 19) & 7) != 0)
		result = *(unsigned __int16*)(a1 + 16);
	v5 = *(unsigned __int8*)(a1 + 18);
	v6 = 0;
	for (i = (unsigned __int16)result; v5; v5 &= result)
	{
		result = (unsigned int)(v5 - 1);
		++v6;
	}
	if (i * v6 == 1 && (result = *(_DWORD*)(a1 + 136) >> 31, *(int*)(a1 + 136) < 0))
	{
		*(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 104);
		result = sub_14084BDE0(a1 + 104);
		v8 = result;
		if (result)
		{
			*(_DWORD*)result = *(_DWORD*)a2;
			*(_DWORD*)(result + 4) = *(_DWORD*)(a2 + 4);
			*(_DWORD*)(result + 8) = *(_DWORD*)(a2 + 8);
			*(_DWORD*)(result + 12) = *(_DWORD*)(a2 + 12);
			*(_BYTE*)(result + 16) ^= (*(_BYTE*)(a2 + 16) ^ *(_BYTE*)(result + 16)) & 1;
			*(_BYTE*)(result + 16) ^= (*(_BYTE*)(a2 + 16) ^ *(_BYTE*)(result + 16)) & 2;
			result = *(unsigned __int8*)(a2 + 17);
			*(_BYTE*)(v8 + 17) = result;
			*(_DWORD*)(a1 + 136) &= ~0x40000000u;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 136) |= 0x40000000u;
	}
	return result;
}

