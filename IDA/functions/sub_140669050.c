#include "../winhttp.h"

//----- (0000000140669050) ----------------------------------------------------
__int64 __fastcall sub_140669050(_QWORD* a1)
{
	__int64 v1; // rsi
	__int64* v2; // rax
	unsigned __int64 v3; // rbx
	__int64 result; // rax
	__int64 v5; // rcx
	unsigned __int64 v6; // rbp
	__int64(__fastcall * *v7)(); // r14
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rax
	int v12; // r10d
	__int64* v13; // rax
	__int64 v14; // r8
	__int64 v15; // rdx
	int v16; // r10d
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v18; // [rsp+28h] [rbp-20h]
	__int64 v19; // [rsp+30h] [rbp-18h]
	int v20; // [rsp+38h] [rbp-10h]

	v1 = (__int64)a1;
	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = 0i64;
	if (v2)
	{
		v5 = *v2;
		v6 = 0i64;
		v18 = 0i64;
		v7 = 0i64;
		v17 = 0i64;
		if (v5)
		{
			sub_1405E6DA0(v5, (__int64*)&v17);
			v6 = v18;
			v7 = v17;
		}
		v8 = *(_QWORD*)(v1 + 32);
		v19 = v1;
		v17 = off_140B569F0;
		v9 = *(_QWORD*)(v8 + 112);
		v20 = 1;
		if (*(_QWORD*)(v8 + 120) >= v9)
			sub_14005E2C0(v1);
		v10 = *(_QWORD*)(v1 + 16);
		v11 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v10 + 8) = 5;
		*(_QWORD*)v10 = v11;
		*(_QWORD*)(v1 + 16) += 16i64;
		v12 = sub_1400578C0(v1);
		LODWORD(v18) = v12;
		if (v6)
		{
			do
			{
				sub_1400FA9E0((__int64)&v17);
				++v3;
			} while (v3 < v6);
			v1 = v19;
			v12 = v18;
		}
		v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v12);
		v14 = *(_QWORD*)(v1 + 16);
		v15 = *v13;
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v15, v16);
		if (v7)
			(*((void(__fastcall**)(__int64(__fastcall**)())) * (v7 - 2) + 1))(v7 - 2);
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	return result;
}
// 140669181: variable 'v16' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

