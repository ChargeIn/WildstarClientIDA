#include "../winhttp.h"

//----- (000000014058EFC0) ----------------------------------------------------
void __fastcall sub_14058EFC0(__int64 a1)
{
	__int16* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	int v5; // edx
	__int16* v6; // rax
	__int64* v7; // rdi
	__int16* v8; // rax

	if (((*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) & 0xFFFFFFFFFFFFFFFEui64) == 0)
	{
		v2 = sub_14034BDD0(a1, 628432);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v2, 0, 0i64);
		return;
	}
	v3 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_6;
	while (1)
	{
		v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
		if (*(_DWORD*)(v4 + 16) == 7)
			break;
		if (++v3 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_6;
	}
	v7 = *(__int64**)(qword_140C7DE18 + 8 * v3);
	if (!v4)
	{
	LABEL_6:
		v5 = 628499;
	LABEL_7:
		v6 = sub_14034BDD0(v3, v5);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v6, 0, 0i64);
		return;
	}
	v8 = sub_14034BDD0(v3, 134485);
	if ((unsigned int)sub_14018E2C0(*(_QWORD*)(a1 + 8), (unsigned __int16*)v8))
	{
		v5 = 628432;
		goto LABEL_7;
	}
	sub_14057E730(v7);
}
// 14058F047: variable 'v3' is possibly undefined
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

