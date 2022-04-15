#include "../winhttp.h"

//----- (000000014070DCC0) ----------------------------------------------------
__int64 __fastcall sub_14070DCC0(_QWORD* a1)
{
	int v2; // eax
	__int64 result; // rax
	__int64 v4; // rsi
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rdx
	__int64(__fastcall * *v11)(); // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	_QWORD* v13; // [rsp+30h] [rbp-18h]
	int v14; // [rsp+38h] [rbp-10h]

	v2 = sub_140056D60(a1, 1u);
	result = sub_1405E2300(qword_140C65898 + 26680, v2);
	v4 = result;
	if (result)
	{
		v5 = a1[4];
		v11 = off_140B569F0;
		v6 = *(_QWORD*)(v5 + 112);
		v13 = a1;
		v14 = 1;
		if (*(_QWORD*)(v5 + 120) >= v6)
			sub_14005E2C0((__int64)a1);
		v7 = a1[2];
		v8 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		a1[2] += 16i64;
		LODWORD(v7) = sub_1400578C0((__int64)a1);
		v12 = v7;
		sub_1405DAB80(v4, (__int64)&v11);
		v9 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		v10 = a1[2];
		*(_QWORD*)v10 = *v9;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v10, v7);
		return 1i64;
	}
	return result;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

