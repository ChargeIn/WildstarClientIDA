#include "../winhttp.h"

//----- (0000000140707C60) ----------------------------------------------------
__int64 __fastcall sub_140707C60(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rdi
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned __int64 v7; // rbx
	int v8; // r10d
	__int64* v9; // rax
	__int64 v10; // r8
	__int64 v11; // rdx
	int v12; // r10d
	__int64(__fastcall * *v14)(); // [rsp+20h] [rbp-28h] BYREF
	int v15; // [rsp+28h] [rbp-20h]
	__int64 v16; // [rsp+30h] [rbp-18h]
	int v17; // [rsp+38h] [rbp-10h]

	v1 = qword_140C65898;
	v2 = a1;
	if (qword_140C65898)
	{
		v16 = a1;
		v3 = *(_QWORD*)(a1 + 32);
		v14 = off_140B569F0;
		v4 = *(_QWORD*)(v3 + 112);
		v17 = 1;
		if (*(_QWORD*)(v3 + 120) >= v4)
			sub_14005E2C0(v2);
		v5 = *(_QWORD*)(v2 + 16);
		v6 = sub_14005C1B0(v2, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(v2 + 16) += 16i64;
		v7 = 0i64;
		v8 = sub_1400578C0(v2);
		v15 = v8;
		if (*(_QWORD*)(v1 + 32752))
		{
			do
			{
				sub_1400FA9E0((__int64)&v14);
				++v7;
			} while (v7 < *(_QWORD*)(v1 + 32752));
			v2 = v16;
			v8 = v15;
		}
		v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v8);
		v10 = *(_QWORD*)(v2 + 16);
		v11 = *v9;
		*(_QWORD*)v10 = *v9;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400579E0(v2, v11, v12);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return 1i64;
}
// 140707D59: variable 'v12' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

