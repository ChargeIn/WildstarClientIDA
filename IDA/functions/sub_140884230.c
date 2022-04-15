#include "../winhttp.h"

//----- (0000000140884230) ----------------------------------------------------
__int64 __fastcall sub_140884230(
	__int64 a1,
	char a2,
	__int64 a3,
	unsigned int a4,
	char a5,
	unsigned __int8 a6,
	float a7,
	unsigned int* a8)
{
	int v9; // ebp
	unsigned int v10; // esi
	int v11; // ecx
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rdx
	int v15; // eax

	v9 = 0;
	v10 = a4;
	*a8 = 0;
	*(_BYTE*)(a1 + 117) &= ~2u;
	*(_DWORD*)(a1 + 176) &= ~0x10u;
	*(float*)(a1 + 172) = a7;
	*(_DWORD*)(a1 + 168) = 0;
	v11 = *(_DWORD*)(a1 + 176);
	*(_QWORD*)(a1 + 136) = a3;
	*(_DWORD*)(a1 + 152) = a4;
	*(_BYTE*)(a1 + 117) |= 2 * (a2 & 1);
	*(_BYTE*)(a1 + 116) = a6;
	if (!a3 || a6 > 0x64u || a7 < 0.0)
		return 31i64;
	if ((((v11 << 28 >> 28) - 2) & 0xFFFFFFFD) == 0)
		return 2i64;
	if (!a2)
	{
		if (a4 % *(_DWORD*)(a1 + 112))
			return 2i64;
		if ((*(_BYTE*)(a1 + 117) & 0x10) != 0)
		{
			v13 = *(_QWORD*)(a1 + 128);
			v14 = **(_QWORD**)(a1 + 40);
			if (v13 + a4 > v14)
			{
				if (v13 >= v14)
				{
				LABEL_15:
					EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
					sub_140885D10(a1, 1);
					*a8 = 0;
					LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
					return 1i64;
				}
				v10 = v14 - v13;
			}
		}
	}
	if (!v10)
		goto LABEL_15;
	QueryPerformanceCounter((LARGE_INTEGER*)(a1 + 88));
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	if (a5)
	{
		sub_140889400(a1);
		sub_140885D10(a1, 2);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
		sub_140889590(*(_QWORD*)(a1 + 96), a1);
		v15 = *(_DWORD*)(a1 + 176);
		*a8 = v10;
		LOBYTE(v9) = (v15 & 0xF) != 1;
		return (unsigned int)(v9 + 1);
	}
	else
	{
		sub_140885D10(a1, 2);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
		*a8 = v10;
		return 1i64;
	}
}

