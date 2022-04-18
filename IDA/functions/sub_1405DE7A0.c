#include "../winhttp.h"

//----- (00000001405DE7A0) ----------------------------------------------------
void __fastcall sub_1405DE7A0(__int64 a1, int a2, int a3)
{
	unsigned __int64 v5; // rdi
	_QWORD* v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // [rsp+20h] [rbp-28h]
	__int64 v10; // [rsp+30h] [rbp-18h] BYREF
	__int64 v11; // [rsp+38h] [rbp-10h]
	int v12; // [rsp+58h] [rbp+10h] BYREF

	v12 = a2;
	v5 = (*(__int64(__fastcall**)(int*))(a1 + 224))(&v12);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 216) + 8 * (v5 % *(_QWORD*)(a1 + 208)));
	if (!v6)
		goto LABEL_5;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 232))(&v12, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			goto LABEL_5;
	}
	if (v6 == (_QWORD*)-24i64)
	{
	LABEL_5:
		v9 = 7;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v9);
	}
	else
	{
		v7 = v6[3];
		v10 = 0i64;
		v11 = 0i64;
		v8 = *(_QWORD*)(v7 + 16);
		LODWORD(v11) = a3;
		v10 = v8;
		sub_1403F4740(qword_140C65898, 0x3BCu, (__int64)&v10);
	}
}
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;

