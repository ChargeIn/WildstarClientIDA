#include "../winhttp.h"

//----- (000000014058EF20) ----------------------------------------------------
void __fastcall sub_14058EF20(__int64* a1)
{
	__int64 v1; // rax
	__int64* v2; // r10
	__int64 v3; // rdx
	__int16* v4; // rax
	void* v5; // rdx

	v1 = 0i64;
	v2 = a1;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v1);
		if (*(_DWORD*)(v3 + 16) == 3)
			break;
		if (++v1 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	a1 = *(__int64**)(qword_140C7DE18 + 8 * v1);
	if (v3)
	{
		v5 = &unk_1409F3044;
		if (((v2[2] - v2[1]) & 0xFFFFFFFFFFFFFFFEui64) != 0)
			v5 = (void*)v2[1];
		sub_14057FD00(a1, (__int64)v5);
	}
	else
	{
	LABEL_4:
		v4 = sub_14034BDD0((__int64)a1, 282577);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
	}
}
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

