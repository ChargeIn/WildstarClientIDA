#include "../winhttp.h"

//----- (00000001402D1280) ----------------------------------------------------
void __fastcall sub_1402D1280(__int64 a1, int a2)
{
	__int64 v3; // rdi
	int v4; // ecx
	__int64 v5; // rdi
	int v6; // eax
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	if (a2)
	{
		*(_DWORD*)(a1 + 44) = a2;
	}
	else
	{
		v3 = *(_QWORD*)(a1 + 24);
		v4 = *(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64);
		if (v4)
		{
			*(_DWORD*)(a1 + 44) = v4;
		}
		else
		{
			v5 = *(_QWORD*)(v3 + 32);
			v7[0] = -1;
			if (*(_DWORD*)(v5 + 24) != 3)
				sub_1402C9AE0(v5, (__int64)v7, 1);
			v6 = 35;
			if (*(_DWORD*)(*(_QWORD*)(v5 + 64) + 12i64))
				v6 = *(_DWORD*)(*(_QWORD*)(v5 + 64) + 12i64);
			*(_DWORD*)(a1 + 44) = v6;
		}
	}
}
// 1402D1280: using guessed type int var_18[6];

