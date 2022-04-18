#include "../winhttp.h"

//----- (0000000140006FC0) ----------------------------------------------------
__int64 __fastcall sub_140006FC0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v4; // rsi
	__int64 v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64(__fastcall * *v11)(); // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+30h] [rbp-18h]
	int v14; // [rsp+38h] [rbp-10h]

	if (qword_140C65898)
		sub_140431930(*(_QWORD*)(qword_140C65898 + 29504));
	v2 = qword_140C66DA8;
	if (!qword_140C66DA8)
		return 0i64;
	while (*(_DWORD*)(v2 + 368) == 5)
	{
		v2 = *(_QWORD*)(v2 + 176);
		if (!v2)
			return 0i64;
	}
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 72);
	if (!v4)
		return 0i64;
	v5 = *(_QWORD*)(v4 + 400);
	v6 = *(_QWORD*)(v5 + 32);
	v11 = off_140B569F0;
	v14 = 1;
	v7 = *(_QWORD*)(v6 + 112);
	v13 = v5;
	if (*(_QWORD*)(v6 + 120) >= v7)
		sub_14005E2C0(v5);
	v8 = *(_QWORD*)(v5 + 16);
	v9 = sub_14005C1B0(v5, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(v5 + 16) += 16i64;
	LODWORD(v8) = sub_1400578C0(v5);
	v12 = v8;
	sub_140003C90(a1, (__int64)&v11);
	Apollo_LUAEvent(*(_QWORD*)(v2 + 72), "DailyLoginUpdate", byte_1409D0254, (unsigned int)v8, v11);
	sub_1400579E0(v5, v10, v8);
	return 0i64;
}
// 1400070CE: variable 'v10' is possibly undefined
// 1409D0254: using guessed type _BYTE byte_1409D0254[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

