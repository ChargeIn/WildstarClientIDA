#include "../winhttp.h"

//----- (0000000140603970) ----------------------------------------------------
__int64 __fastcall sub_140603970(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 v5; // rax
	int v6; // edx
	int v7; // eax
	int v9; // [rsp+30h] [rbp-28h] BYREF
	__int64 v10; // [rsp+38h] [rbp-20h]
	__int64 (*v11)(); // [rsp+40h] [rbp-18h]
	__int64 v12; // [rsp+48h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 72) == *(_QWORD*)a2)
	{
		v5 = sub_140200220(0x468u);
		if (v5)
			v6 = *(_DWORD*)(v5 + 4);
		else
			v6 = 60000;
		v9 = 0;
		v12 = 0i64;
		v10 = a1;
		v11 = sub_140603A30;
		sub_140195960(a1 + 96, v6, (__int64)&v9, 4);
		v7 = sub_140605420(a1, (int*)(a2 + 8));
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"Group_ReadyCheck",
			byte_1409EA31C,
			(unsigned int)(v7 + 1),
			*(_QWORD*)(a2 + 24));
	}
	return 0i64;
}
// 1409EA31C: using guessed type _BYTE byte_1409EA31C[40];
// 140C65898: using guessed type __int64 qword_140C65898;

