#include "../winhttp.h"

//----- (000000014058F1D0) ----------------------------------------------------
void __fastcall sub_14058F1D0(__int64 a1)
{
	__int64 v1; // r9
	int v2; // edx
	__int64 v3; // rax
	__int16* v4; // rax

	v1 = *(_QWORD*)(a1 + 8);
	if (((*(_QWORD*)(a1 + 16) - v1) & 0xFFFFFFFFFFFFFFFEui64) == 0)
	{
		v2 = 628444;
	LABEL_7:
		v4 = sub_14034BDD0(a1, v2);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
		return;
	}
	a1 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_6;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * a1);
		if (*(_DWORD*)(v3 + 16) == 7)
			break;
		if (++a1 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_6;
	}
	a1 = *(_QWORD*)(qword_140C7DE18 + 8 * a1);
	if (!v3)
	{
	LABEL_6:
		v2 = 628499;
		goto LABEL_7;
	}
	sub_14057EC50((__int64*)a1, v1);
}
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

