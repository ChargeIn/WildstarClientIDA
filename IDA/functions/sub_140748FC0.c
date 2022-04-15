#include "../winhttp.h"

//----- (0000000140748FC0) ----------------------------------------------------
__int64 __fastcall sub_140748FC0(__int64 a1)
{
	_DWORD* v2; // rdx
	__int64 result; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rdx
	__int64 v11; // r10
	int v12; // r11d
	_DWORD* v13; // rax
	__int64* v14; // rax
	__int64 v15; // r9
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+30h] [rbp-18h]
	int v19; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v18 = a1;
		v4 = *(_QWORD*)(a1 + 32);
		v16 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v19 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(a1);
		v6 = *(_QWORD*)(a1 + 16);
		v7 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(a1 + 16) += 16i64;
		v17 = sub_1400578C0(a1);
		v9 = sub_1403CE010(v8, (__int64)&v16);
		v11 = v18;
		v12 = v17;
		if (v9)
		{
			v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v17);
			v15 = *(_QWORD*)(v11 + 16);
			v10 = *v14;
			*(_QWORD*)v15 = *v14;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
			*(_QWORD*)(v11 + 16) += 16i64;
		}
		else
		{
			v13 = *(_DWORD**)(a1 + 16);
			*v13 = 0;
			v13[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v11)
			sub_1400579E0(v11, v10, v12);
		return 1i64;
	}
	else
	{
		v2 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v2 = 0;
		v2[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 14074905D: variable 'v8' is possibly undefined
// 1407490A0: variable 'v11' is possibly undefined
// 1407490C1: variable 'v10' is possibly undefined
// 1407490C1: variable 'v12' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

