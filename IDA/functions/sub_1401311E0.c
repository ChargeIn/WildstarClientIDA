#include "../winhttp.h"

//----- (00000001401311E0) ----------------------------------------------------
__int64 __fastcall sub_1401311E0(__int64 a1)
{
	_DWORD* v2; // rax
	__int64 v3; // rax
	int v4; // ecx
	int v5; // eax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	int v9; // [rsp+2Ch] [rbp-Ch]

	if (*(char*)(a1 + 29) >= 0)
	{
		v2 = sub_1400CB0E0(a1, &v7, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v2;
		*(_DWORD*)(a1 + 400) = v2[1];
		*(_DWORD*)(a1 + 404) = v2[2];
		*(_DWORD*)(a1 + 408) = v2[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v3 = a1;
		do
		{
			if (!*(_DWORD*)(v3 + 392))
				break;
			*(_DWORD*)(v3 + 392) = 0;
			v3 = *(_QWORD*)(v3 + 16);
		} while (v3);
	}
	v4 = *(_DWORD*)(a1 + 408) - *(_DWORD*)(a1 + 400);
	v5 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
	v7 = 0i64;
	v9 = v4;
	v8 = v5;
	sub_1400C3AD0(a1 + 1024, &v7);
	return 0i64;
}

