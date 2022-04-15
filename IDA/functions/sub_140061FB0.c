#include "../winhttp.h"

//----- (0000000140061FB0) ----------------------------------------------------
__int64 __fastcall sub_140061FB0(
	__int64 a1,
	void(__fastcall* a2)(__int64, __int64),
	__int64 a3,
	__int64 a4,
	__int64 a5)
{
	__int64 v5; // rbp
	__int64 v6; // r14
	__int16 v7; // r15
	char v8; // r12
	__int64 result; // rax
	unsigned int v12; // esi
	unsigned __int64 v13; // rbx
	bool v14; // cc
	__int64 v15; // rdx
	__int64 v16; // rax

	v5 = *(_QWORD*)(a1 + 176);
	v6 = *(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 80);
	v7 = *(_WORD*)(a1 + 96);
	v8 = *(_BYTE*)(a1 + 101);
	*(_QWORD*)(a1 + 176) = a5;
	result = sub_1400610A0(a1, a2, a3);
	v12 = result;
	if ((_DWORD)result)
	{
		v13 = *(_QWORD*)(a1 + 64) + a4;
		sub_140060CB0(a1, v13);
		sub_140060EF0(a1, v12, v13);
		v14 = *(_DWORD*)(a1 + 92) <= 20000;
		v15 = *(_QWORD*)(a1 + 80);
		*(_WORD*)(a1 + 96) = v7;
		*(_QWORD*)(a1 + 40) = v15 + v6;
		*(_QWORD*)(a1 + 24) = *(_QWORD*)(v15 + v6);
		v16 = *(_QWORD*)(v15 + v6 + 24);
		*(_BYTE*)(a1 + 101) = v8;
		*(_QWORD*)(a1 + 48) = v16;
		if (!v14 && (int)v6 / 40 + 1 < 20000)
			sub_1400612B0(a1, 20000);
		result = v12;
	}
	*(_QWORD*)(a1 + 176) = v5;
	return result;
}

