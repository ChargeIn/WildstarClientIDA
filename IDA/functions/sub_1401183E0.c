#include "../winhttp.h"

//----- (00000001401183E0) ----------------------------------------------------
__int64 __fastcall sub_1401183E0(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // rbx
	__int64 v4; // rdx
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // r8
	__int64(__fastcall * *v9)(); // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+30h] [rbp-18h]

	v2 = 0i64;
	v10 = -2;
	v9 = off_140B56A08;
	v11 = 0i64;
	if ((int)sub_1400FB720(a1, a2, -1) >= 0)
	{
		v11 = *(_QWORD*)(a1 + 16);
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v9[2])(&v9, 0xFFFFFFFFi64);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v11 + 32) + 160i64), v10);
		v7 = *(_QWORD*)(v6 + 16);
		*(_QWORD*)v7 = *v5;
		*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
		*(_QWORD*)(v6 + 16) += 16i64;
		v2 = sub_140118290(*(_QWORD*)(a1 + 16), -1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	v9 = off_140B56A08;
	if (v11)
		sub_1400579E0(v11, v4, v10);
	return v2;
}
// 140118455: variable 'v6' is possibly undefined
// 140118497: variable 'v4' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

