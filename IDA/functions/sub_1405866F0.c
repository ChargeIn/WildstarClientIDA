#include "../winhttp.h"

//----- (00000001405866F0) ----------------------------------------------------
void __fastcall sub_1405866F0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rdx
	__int16* v3; // rax
	__int64 v4; // rdi
	int v5; // ebx
	int v6; // eax
	int v7; // edx
	int v8; // eax

	v1 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v2 = *(_QWORD*)(qword_140C7DE18 + 8 * v1);
		if (*(_DWORD*)(v2 + 16) == 1)
			break;
		if (++v1 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v1);
	if (v2)
	{
		v5 = *(_DWORD*)(v2 + 16);
		v6 = sub_14018E820(*(WCHAR**)(a1 + 8));
		v7 = 200;
		v8 = v6 - 1;
		if (v5 == 1)
			v7 = 100;
		sub_14057EE50(v4, v8 + v7);
	}
	else
	{
	LABEL_4:
		v3 = sub_14034BDD0(a1, 114120);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v3, 0, 0i64);
	}
}
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

