#include "../winhttp.h"

//----- (00000001400CB3D0) ----------------------------------------------------
_DWORD* __fastcall sub_1400CB3D0(__int64 a1, _DWORD* a2)
{
	_DWORD* v4; // rax
	__int64 v5; // rax
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v4 = sub_1400CB0E0(a1, v7, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v4;
		*(_DWORD*)(a1 + 400) = v4[1];
		*(_DWORD*)(a1 + 404) = v4[2];
		*(_DWORD*)(a1 + 408) = v4[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v5 = a1;
		do
		{
			if (!*(_DWORD*)(v5 + 392))
				break;
			*(_DWORD*)(v5 + 392) = 0;
			v5 = *(_QWORD*)(v5 + 16);
		} while (v5);
	}
	*a2 = *(_DWORD*)(a1 + 396);
	a2[1] = *(_DWORD*)(a1 + 400);
	a2[2] = *(_DWORD*)(a1 + 404);
	a2[3] = *(_DWORD*)(a1 + 408);
	return a2;
}
// 1400CB3D0: using guessed type int var_18[6];

