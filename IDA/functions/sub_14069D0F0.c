#include "../winhttp.h"

//----- (000000014069D0F0) ----------------------------------------------------
__int64 __fastcall sub_14069D0F0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rbx
	int v6; // ecx
	__int64 v8; // [rsp+20h] [rbp-48h]
	__int64 v9; // [rsp+30h] [rbp-38h] BYREF
	__int64 v10; // [rsp+38h] [rbp-30h]
	__int64 v11; // [rsp+40h] [rbp-28h]
	__int64 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+50h] [rbp-18h]
	__int64 v14; // [rsp+58h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v9 = 0i64;
				v10 = 0i64;
				v11 = 0i64;
				v13 = 0i64;
				v14 = 0i64;
				v12 = (unsigned int)sub_140056D60(a1, 2u);
				v6 = *(_DWORD*)(qword_140C635F0 + 5760);
				LODWORD(v14) = 38;
				LODWORD(v8) = v6;
				v10 = *v5;
				v9 = v8;
				v13 = 0i64;
				sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)&v9);
			}
		}
	}
	return 0i64;
}
// 14069D128: variable 'v3' is possibly undefined
// 14069D1A4: variable 'v8' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

