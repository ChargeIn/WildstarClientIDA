#include "../winhttp.h"

//----- (000000014069B3B0) ----------------------------------------------------
__int64 __fastcall sub_14069B3B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rsi
	unsigned int v6; // ebp
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	unsigned int* v12; // rax
	_QWORD* v13; // rax
	__int64 v14; // rdx
	__int64(__fastcall * *v15)(); // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+28h] [rbp-20h]
	_QWORD* v17; // [rsp+30h] [rbp-18h]
	int v18; // [rsp+38h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		v6 = sub_140056D60(a1, 2u);
		if (v6)
		{
			v8 = a1[4];
			v15 = off_140B569F0;
			v9 = *(_QWORD*)(v8 + 112);
			v17 = a1;
			v18 = 1;
			if (*(_QWORD*)(v8 + 120) >= v9)
				sub_14005E2C0((__int64)a1);
			v10 = a1[2];
			v11 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			a1[2] += 16i64;
			LODWORD(v10) = sub_1400578C0((__int64)a1);
			v16 = v10;
			v12 = (unsigned int*)sub_140202CA0(v6);
			sub_140580280(v5, (__int64)&v15, v12);
			v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
			v14 = a1[2];
			*(_QWORD*)v14 = *v13;
			*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v14, v10);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14069B3E8: variable 'v3' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

