#include "../winhttp.h"

//----- (00000001404274C0) ----------------------------------------------------
void __fastcall sub_1404274C0(__int64 a1, int a2, int a3, int a4)
{
	_QWORD* v4; // rdi
	__int64 v9; // rbx
	__int64 v10; // rdx
	int v11; // [rsp+20h] [rbp-18h]
	int v12; // [rsp+28h] [rbp-10h]

	v4 = *(_QWORD**)(a1 + 400);
	if ((unsigned int)sub_1406069B0(qword_140C65898 + 27664, v4) || a4)
	{
		v12 = a3;
		v9 = (unsigned int)sub_1400578C0((__int64)v4);
		v11 = a2;
		sub_1400EA3E0(a1, "Group_Mentor", byte_1409EA4C4, v9, v11, v12);
		sub_1400579E0((__int64)v4, v10, v9);
	}
}
// 14042753D: variable 'v10' is possibly undefined
// 1409EA4C4: using guessed type _BYTE byte_1409EA4C4[104];
// 140C65898: using guessed type __int64 qword_140C65898;

