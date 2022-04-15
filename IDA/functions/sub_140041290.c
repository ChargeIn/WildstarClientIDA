#include "../winhttp.h"

//----- (0000000140041290) ----------------------------------------------------
__int64 __fastcall sub_140041290(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rdx
	__int64 v7; // r14
	int v8; // r10d
	unsigned int v9; // ebp
	__int64 v10; // rsi
	__int64 v11; // rdi
	__int64 v12; // rbx
	__int64* v14; // rax
	__int64 v15; // r8
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-38h] BYREF
	int v18; // [rsp+28h] [rbp-30h]
	__int64 v19; // [rsp+30h] [rbp-28h]
	int v20; // [rsp+38h] [rbp-20h]

	v1 = a1;
	v19 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v17 = off_140B569F0;
	v20 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v5 = sub_1400578C0(v1);
	v7 = qword_140C635F0;
	v8 = v5;
	v18 = v5;
	if (*(_DWORD*)(qword_140C635F0 + 5952))
	{
		v10 = *(_QWORD*)(qword_140C635F0 + 5952);
		if (v10)
		{
			v11 = 8i64 * (*(_DWORD*)(qword_140C7AAC0 + 8) - 1);
			v12 = 0i64;
			do
			{
				if (*(_QWORD*)(*(_QWORD*)(v12 + *(_QWORD*)(v7 + 5944)) + v11))
					sub_1400FAD30((__int64)&v17);
				v12 += 16i64;
				--v10;
			} while (v10);
			v1 = v19;
			v8 = v18;
		}
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v8);
		v15 = *(_QWORD*)(v1 + 16);
		v6 = *v14;
		v9 = 1;
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	else
	{
		v9 = 0;
	}
	sub_1400579E0(v1, v6, v8);
	return v9;
}
// 14004136D: conditional instruction was optimized away because r11.8!=0
// 140041383: conditional instruction was optimized away because ax.2==0
// 140041400: variable 'v6' is possibly undefined
// 140041400: variable 'v8' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

