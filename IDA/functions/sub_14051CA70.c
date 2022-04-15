#include "../winhttp.h"

//----- (000000014051CA70) ----------------------------------------------------
void __fastcall sub_14051CA70(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rax
	__int64 v4; // rax
	int v5; // ecx
	int v6; // eax
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(char*)(a2 + 29) >= 0)
	{
		v3 = sub_1400CB0E0(a2, v7, a2 + 64);
		*(_DWORD*)(a2 + 396) = *v3;
		*(_DWORD*)(a2 + 400) = v3[1];
		*(_DWORD*)(a2 + 404) = v3[2];
		*(_DWORD*)(a2 + 408) = v3[3];
		*(_BYTE*)(a2 + 29) |= 0x80u;
		v4 = a2;
		do
		{
			if (!*(_DWORD*)(v4 + 392))
				break;
			*(_DWORD*)(v4 + 392) = 0;
			v4 = *(_QWORD*)(v4 + 16);
		} while (v4);
	}
	v5 = *(_DWORD*)(a2 + 404);
	v7[0] = *(_DWORD*)(a2 + 396);
	v7[1] = *(_DWORD*)(a2 + 400);
	v6 = *(_DWORD*)(a2 + 408);
	v7[2] = v5 + 50;
	v7[3] = v6 + 130;
	sub_1400CC7C0(a2, v7);
}

