#include "../winhttp.h"

//----- (0000000140179450) ----------------------------------------------------
__int64 __fastcall sub_140179450(__int64 a1, int* a2)
{
	int v4; // esi
	int v5; // r15d
	int v6; // ebp
	__int64 v7; // rdi
	int v8; // eax
	int v9; // edi
	int v10; // r9d
	__int64 v11; // rcx
	__int64 v12; // rsi
	__int64 i; // rdx
	int v14; // r8d
	int v15; // r11d
	int v16; // r10d
	int v17; // eax
	__int64 v18; // rax
	int v20[14]; // [rsp+20h] [rbp-38h] BYREF

	sub_1400CB3D0(a1, v20);
	v4 = v20[2] - v20[0];
	v5 = qword_140C77760;
	v6 = HIDWORD(qword_140C77760);
	if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v7 = *(_QWORD*)(a1 + 48)) != 0)
	{
		v5 += sub_14010CF80(*(_QWORD*)(a1 + 48));
		v4 -= sub_14010D0A0(v7);
		v8 = v6 + sub_14010D1C0(v7);
	}
	else
	{
		v8 = HIDWORD(qword_140C77760);
	}
	v9 = *a2;
	if (*a2 < v5)
		return 0xFFFFFFFFi64;
	if (v9 >= v4)
		return 0xFFFFFFFFi64;
	v10 = a2[1];
	if (v10 < v6 || v10 >= v8)
		return 0xFFFFFFFFi64;
	v11 = *(int*)(a1 + 1144);
	v12 = (__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3;
	if ((int)v11 >= (int)v12)
		return 0xFFFFFFFFi64;
	for (i = 16 * v11; ; i += 16i64)
	{
		if ((int)v11 <= (int)((__int64)(*(_QWORD*)(a1 + 1248) - *(_QWORD*)(a1 + 1240)) >> 4))
		{
			v18 = *(_QWORD*)(a1 + 1240);
			v14 = *(_DWORD*)(i + v18);
			v15 = *(_DWORD*)(i + v18 + 4);
			v16 = *(_DWORD*)(i + v18 + 8);
			v17 = *(_DWORD*)(i + v18 + 12);
		}
		else
		{
			v14 = xmmword_140C784D0;
			v15 = DWORD1(xmmword_140C784D0);
			v16 = DWORD2(xmmword_140C784D0);
			v17 = HIDWORD(xmmword_140C784D0);
		}
		if (v9 >= v14 && v9 < v16 && v10 >= v15 && v10 < v17)
			break;
		LODWORD(v11) = v11 + 1;
		if ((int)v11 >= (int)v12)
			return 0xFFFFFFFFi64;
	}
	return (unsigned int)v11;
}
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C784D0: using guessed type __int128 xmmword_140C784D0;

