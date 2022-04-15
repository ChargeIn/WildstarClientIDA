#include "../winhttp.h"

//----- (0000000140354E10) ----------------------------------------------------
__int64 __fastcall sub_140354E10(_DWORD* a1)
{
	unsigned int v1; // xmm0_4
	unsigned int v2; // xmm1_4
	int v3; // xmm3_4
	__int64 v4; // rax
	__int64 v5; // rcx
	int v6; // xmm2_4
	__int64 v7; // rax
	__int64 v9; // [rsp+8h] [rbp-20h]
	__int64 v10; // [rsp+10h] [rbp-18h]

	v1 = a1[34];
	v2 = a1[35];
	v3 = a1[37];
	LODWORD(v9) = dword_140B65808[a1[39]];
	LODWORD(v10) = v3;
	HIDWORD(v9) = dword_140B62CE8[a1[36]];
	v4 = (int)a1[38];
	v5 = qword_140C657F0;
	v6 = dword_140B65818[v4];
	if (!qword_140C657F0)
		return 2147500037i64;
	if (*(_QWORD*)(qword_140C657F0 + 1336) != __PAIR64__(v2, v1)
		|| *(_QWORD*)(qword_140C657F0 + 1344) != v9
		|| (HIDWORD(v10) = dword_140B65818[v4], *(_QWORD*)(qword_140C657F0 + 1352) != v10))
	{
		v7 = *(_QWORD*)(qword_140C657F0 + 40);
		*(_DWORD*)(qword_140C657F0 + 1336) = v1;
		*(_DWORD*)(v5 + 1340) = v2;
		*(_QWORD*)(v5 + 1344) = v9;
		*(_DWORD*)(v5 + 1352) = v3;
		for (*(_DWORD*)(v5 + 1356) = v6; v7; v7 = *(_QWORD*)(v7 + 512))
			;
	}
	return 0i64;
}
// 140B62CE8: using guessed type int dword_140B62CE8[4];
// 140B65808: using guessed type int dword_140B65808[4];
// 140B65818: using guessed type int dword_140B65818[6];
// 140C657F0: using guessed type __int64 qword_140C657F0;

