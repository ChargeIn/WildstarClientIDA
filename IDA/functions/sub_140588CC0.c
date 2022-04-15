#include "../winhttp.h"

//----- (0000000140588CC0) ----------------------------------------------------
void __fastcall sub_140588CC0(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	int v4; // edx
	__int16* v5; // rax
	__int64 v6; // rbx
	__int16* v7; // rax
	__int64 v8; // rcx
	__int16* v9; // rax

	v2 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 1)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v6 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
	if (!v3)
	{
	LABEL_4:
		v4 = 114120;
	LABEL_5:
		v5 = sub_14034BDD0(a1, v4);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v5, 0, 0i64);
		return;
	}
	v7 = sub_14034BDD0(a1, 326782);
	if ((unsigned int)sub_14018E2C0(*(_QWORD*)(a1 + 8), (unsigned __int16*)v7))
	{
		v9 = sub_14034BDD0(v8, 326781);
		if ((unsigned int)sub_14018E2C0(*(_QWORD*)(a1 + 8), (unsigned __int16*)v9))
		{
			v4 = 457328;
			goto LABEL_5;
		}
		sub_14057FD80((__int64*)v6, *(_DWORD*)(v6 + 20) & 0xFFFFFFFE);
	}
	else
	{
		sub_14057FD80((__int64*)v6, *(_DWORD*)(v6 + 20) | 1);
	}
}
// 140588D07: variable 'a1' is possibly undefined
// 140588D62: variable 'v8' is possibly undefined
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

