#include "../winhttp.h"

//----- (0000000140692760) ----------------------------------------------------
__int64 __fastcall sub_140692760(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rbx
	int v11; // r10d
	_QWORD* v12; // rax
	__int64 v13; // r8
	__int64 v14; // rdx
	int v15; // r10d
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]
	__int64 v19; // [rsp+30h] [rbp-18h]
	int v20; // [rsp+38h] [rbp-10h]

	v1 = (__int64)a1;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		return 0i64;
	v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
	if (!v4)
		return 0i64;
	v5 = *(_QWORD*)(v1 + 32);
	v17 = off_140B569F0;
	v6 = *(_QWORD*)(v5 + 112);
	v19 = v1;
	v20 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0(v1);
	v7 = *(_QWORD*)(v1 + 16);
	v8 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(v1 + 16) += 16i64;
	v9 = sub_1400578C0(v1);
	v10 = *(_QWORD*)(v4 + 296);
	v11 = v9;
	v18 = v9;
	if (v10)
	{
		do
		{
			sub_1406922F0(v1, v10, (__int64)&v17);
			v10 = *(_QWORD*)(v10 + 8);
		} while (v10);
		v1 = v19;
		v11 = v18;
	}
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v11);
	v13 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v13 = *v12;
	v14 = *((unsigned int*)v12 + 2);
	*(_DWORD*)(v13 + 8) = v14;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v14, v15);
	return 1i64;
}
// 140692882: variable 'v15' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658A0: using guessed type __int64 qword_140C658A0;

