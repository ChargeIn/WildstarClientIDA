#include "../winhttp.h"

//----- (0000000140333A50) ----------------------------------------------------
__int64 sub_140333A50()
{
	__int64 v0; // rcx
	__int64 v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	v5 = 0x141DEC200i64;
	sub_1401A2E50(0xBu, 1, &v5);
	v0 = qword_140C65808;
	if (qword_140C65808)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65808 + 8i64))(qword_140C65808, 1i64);
	qword_140C65808 = 0i64;
	if (!dword_140C65820)
	{
		v3 = qword_140C65838;
		if (qword_140C65838)
		{
			v4 = qword_140C65838 + 24;
			*(_QWORD*)qword_140C65838 = off_140B64920;
			sub_14033A960(v4);
			sub_14033A960(v3 + 24);
			sub_14018B900(*(_QWORD*)(v3 + 32), 0);
			sub_14033A8F0(v3 + 8);
			sub_14018B900(v3, 0);
			qword_140C65838 = 0i64;
			WSACleanup();
		}
		return 0i64;
	}
	if (dword_140C65820 != 1)
	{
		v5 = 0x141DEC1D8i64;
		sub_1401A2E50(0xBu, 0, &v5);
		return 0i64;
	}
	if (!qword_140C65840)
		return 0i64;
	sub_14033D200(v0);
	v2 = qword_140C65840;
	if (qword_140C65840)
	{
		sub_14033B580(qword_140C65840);
		sub_14018B900(v2, 0);
	}
	qword_140C65840 = 0i64;
	WSACleanup();
	return 0i64;
}
// 140333ADC: variable 'v0' is possibly undefined
// 140B64920: using guessed type __int64 (__fastcall *off_140B64920[11])();
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65820: using guessed type int dword_140C65820;
// 140C65838: using guessed type __int64 qword_140C65838;
// 140C65840: using guessed type __int64 qword_140C65840;

