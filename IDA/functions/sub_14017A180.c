#include "../winhttp.h"

//----- (000000014017A180) ----------------------------------------------------
void __fastcall sub_14017A180(__int64 a1)
{
	__int64 v2; // rax
	int v3; // xmm0_4
	int v4; // edx
	__int64 v5; // rax
	int v6; // xmm0_4
	_DWORD* v7; // rax
	__int64 v8; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	__int64 v10; // [rsp+28h] [rbp-10h]

	if (qword_140C63690)
	{
		v2 = *(_QWORD*)(a1 + 608);
		if (v2)
		{
			v3 = *(_DWORD*)(v2 + 32);
			v4 = dword_140C636A8;
			*(_BYTE*)(v2 + 20) = 0;
			*(_DWORD*)(v2 + 8) = v4;
			*(_DWORD*)(v2 + 16) = v3;
			*(_DWORD*)(v2 + 24) = v3;
			*(_DWORD*)(v2 + 28) = 0;
			v5 = *(_QWORD*)(a1 + 608);
			v6 = *(_DWORD*)(v5 + 44);
			*(_DWORD*)(v5 + 56) = v4;
			*(_BYTE*)(v5 + 68) = 0;
			*(_DWORD*)(v5 + 64) = v6;
			*(_DWORD*)(v5 + 72) = v6;
			*(_DWORD*)(v5 + 76) = 0;
		}
	}
	if (*(char*)(a1 + 29) >= 0)
	{
		v7 = sub_1400CB0E0(a1, &v9, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v7;
		*(_DWORD*)(a1 + 400) = v7[1];
		*(_DWORD*)(a1 + 404) = v7[2];
		*(_DWORD*)(a1 + 408) = v7[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v8 = a1;
		do
		{
			if (!*(_DWORD*)(v8 + 392))
				break;
			*(_DWORD*)(v8 + 392) = 0;
			v8 = *(_QWORD*)(v8 + 16);
		} while (v8);
	}
	v9 = *(_QWORD*)(a1 + 396);
	v10 = *(_QWORD*)(a1 + 404);
	if (v9 != *(_QWORD*)(a1 + 1168) || v10 != *(_QWORD*)(a1 + 1176))
		sub_1401795D0(a1);
}
// 140C63690: using guessed type __int64 qword_140C63690;
// 140C636A8: using guessed type int dword_140C636A8;

