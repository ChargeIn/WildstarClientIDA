#include "../winhttp.h"

//----- (00000001407360B0) ----------------------------------------------------
__int64 __fastcall sub_1407360B0(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rcx
	__int64 v4; // rbx
	unsigned int v6; // ecx
	__int64 v7; // rax
	__int64 v8; // [rsp+30h] [rbp-28h] BYREF
	__int64 v9; // [rsp+38h] [rbp-20h]
	__int64 v10; // [rsp+40h] [rbp-18h]
	__int64 v11; // [rsp+48h] [rbp-10h]

	v2 = sub_140056D60(a1, 1u);
	v4 = sub_1404B7220(v3, v2);
	if (v4)
	{
		v6 = sub_140056D60(a1, 2u);
		if (v6 < 3)
		{
			v8 = 0i64;
			v9 = 0i64;
			v11 = 0i64;
			v10 = 0i64;
			v8 = *(_QWORD*)(v4 + 184);
			v7 = *(_QWORD*)(v4 + 192);
			LODWORD(v11) = v6;
			v9 = v7;
			sub_1403F4740(qword_140C65898, 0x518u, (__int64)&v8);
		}
		return 0i64;
	}
	else
	{
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "HousingResult", byte_1409EBB6C, &unk_1409F9254, 3);
		return 0i64;
	}
}
// 1407360C9: variable 'v3' is possibly undefined
// 1409EBB6C: using guessed type _BYTE byte_1409EBB6C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

