#include "../winhttp.h"

//----- (00000001401A9810) ----------------------------------------------------
__int64 __fastcall sub_1401A9810(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	int v4; // eax
	int v5; // ecx
	int v6; // eax

	if (!a1)
		return 4294967294i64;
	v2 = *(_QWORD*)(a1 + 40);
	if (!v2 || !*(_QWORD*)(a1 + 48) || !*(_QWORD*)(a1 + 56))
		return 4294967294i64;
	*(_DWORD*)(a1 + 72) = 2;
	*(_DWORD*)(a1 + 28) = 0;
	*(_DWORD*)(a1 + 12) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	v3 = *(_QWORD*)(v2 + 16);
	*(_DWORD*)(v2 + 40) = 0;
	*(_QWORD*)(v2 + 32) = v3;
	v4 = *(_DWORD*)(v2 + 44);
	if (v4 < 0)
		*(_DWORD*)(v2 + 44) = -v4;
	v5 = *(_DWORD*)(v2 + 44);
	v6 = 113;
	if (v5)
		v6 = 42;
	*(_DWORD*)(v2 + 8) = v6;
	*(_DWORD*)(a1 + 76) = v5 != 2;
	*(_DWORD*)(v2 + 64) = 0;
	*(_QWORD*)(v2 + 2880) = v2 + 188;
	*(_WORD*)(v2 + 5904) = 0;
	*(_QWORD*)(v2 + 2896) = &off_140C2D288;
	*(_DWORD*)(v2 + 5908) = 0;
	*(_QWORD*)(v2 + 2904) = v2 + 2480;
	*(_QWORD*)(v2 + 2920) = &off_140C2D2C8;
	*(_QWORD*)(v2 + 2928) = v2 + 2724;
	*(_QWORD*)(v2 + 2944) = &unk_140C2D2A8;
	sub_1401CBA70(v2);
	return 0i64;
}
// 140C2D288: using guessed type void *off_140C2D288;
// 140C2D2C8: using guessed type void *off_140C2D2C8;

