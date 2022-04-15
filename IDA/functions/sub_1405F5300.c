#include "../winhttp.h"

//----- (00000001405F5300) ----------------------------------------------------
__int64 __fastcall sub_1405F5300(__int64 a1, _DWORD* a2)
{
	int v2; // ebx
	_QWORD* v4; // r9
	_QWORD* v5; // rax
	__int64 v6; // r8
	unsigned int v7; // edx
	__int64 v8; // r10
	__int64 v9; // r8
	int* v10; // rax
	__int64 v11; // rcx
	__int64 v13; // [rsp+30h] [rbp+8h] BYREF
	int* v14; // [rsp+40h] [rbp+18h] BYREF
	int* v15; // [rsp+48h] [rbp+20h] BYREF

	v13 = a1;
	v2 = 0;
	v4 = *(_QWORD**)(qword_140C65980 + 48);
	v5 = (_QWORD*)*v4;
	if ((_QWORD*)*v4 == v4)
		goto LABEL_16;
	while (1)
	{
		v6 = v5[2];
		if (*(_DWORD*)(v6 + 8) == *a2 && **(_DWORD**)v6 == a2[1])
			break;
		v5 = (_QWORD*)*v5;
		++v2;
		if (v5 == v4)
			goto LABEL_15;
	}
	v7 = a2[2];
	v8 = v6 + 24;
	v9 = *(_QWORD*)(v6 + 32);
	v10 = (int*)v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < v7)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = (int*)v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == (int*)v9 || v7 < v10[8])
	{
		v13 = v7;
		v14 = v10;
		sub_140032B30(v8, &v15, (__int64*)&v14, &v13);
		v10 = v15;
	}
	++v10[9];
LABEL_15:
	if (!v2)
		LABEL_16 :
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventVoteTallied", byte_1409ED274, (unsigned int)a2[2]);
	return 0i64;
}
// 1409ED274: using guessed type _BYTE byte_1409ED274[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

