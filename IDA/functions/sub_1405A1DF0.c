#include "../winhttp.h"

//----- (00000001405A1DF0) ----------------------------------------------------
__int64 sub_1405A1DF0()
{
	unsigned int v0; // edi
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rcx
	__int64 v5; // rbx
	unsigned int v6; // eax
	__int64 v7; // rbx
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v11; // [rsp+28h] [rbp-10h]

	v0 = *(_DWORD*)(qword_140C65898 + 6864);
	if (!v0)
		return 0i64;
	v2 = sub_140245C00(v0);
	if (!v2)
		return 0i64;
	if (*(_DWORD*)(v2 + 8) == 22)
	{
		v3 = 79;
	}
	else if ((*(_BYTE*)(v2 + 32) & 4) == 0 || (v3 = 87, *(_DWORD*)(v2 + 28)))
	{
		v3 = 44;
	}
	if (!(unsigned int)sub_1403A0D20(qword_140C65898, v3))
		return 0i64;
	sub_14039E400(v4);
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	v6 = sub_1405A3CA0();
	v7 = sub_1403ACD90(qword_140C65B70, v6, v5);
	v11 = v0;
	v10 = 0i64;
	v9 = sub_140399780(v8, v7, &v10, 0i64);
	if (!v9 || v9 == 317)
		return 1i64;
	sub_1403A12A0(qword_140C65898, v9, v7, 0);
	return 0i64;
}
// 1405A1E53: variable 'v4' is possibly undefined
// 1405A1E96: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

