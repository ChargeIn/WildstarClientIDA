#include "../winhttp.h"

//----- (00000001404FE380) ----------------------------------------------------
__int64 __fastcall sub_1404FE380(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	unsigned int v4; // ecx
	__int64 v5; // rbx
	_QWORD* v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+30h] [rbp-18h]

	result = sub_1404F87C0(a1, 1u);
	if (result)
	{
		v3 = sub_140200220(0x497u);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 0;
		v5 = v4;
		v12 = 0i64;
		v11 = 1i64;
		v6 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v6 = v5;
		v6[1] = 1i64;
		v6[2] = v12;
		v7 = a1[4];
		v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v9 = a1[2];
		v10 = v8;
		LODWORD(v11) = 4;
		sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v10, v9);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	return result;
}

