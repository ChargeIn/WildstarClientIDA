#include "../winhttp.h"

//----- (0000000140369260) ----------------------------------------------------
__int64 __fastcall sub_140369260(__int64 a1, unsigned int a2, __int128* a3, float a4, float a5)
{
	__int64 v7; // rax
	int v8; // r9d
	int v9; // xmm1_4
	int v11[4]; // [rsp+20h] [rbp-68h] BYREF
	__int128 v12; // [rsp+30h] [rbp-58h]
	int v13; // [rsp+40h] [rbp-48h]
	float v14; // [rsp+44h] [rbp-44h]
	float v15; // [rsp+48h] [rbp-40h]
	int v16; // [rsp+4Ch] [rbp-3Ch]
	int v17; // [rsp+50h] [rbp-38h]
	float v18; // [rsp+54h] [rbp-34h]
	float v19; // [rsp+58h] [rbp-30h]
	int v20; // [rsp+5Ch] [rbp-2Ch]
	int v21; // [rsp+60h] [rbp-28h]

	if (!qword_140C65878)
		return 2147500037i64;
	v7 = sub_140351120(a1, a2);
	if (!v7)
		return 2147500037i64;
	v8 = *(_DWORD*)(v7 + 4);
	v11[1] = 0;
	v11[0] = v8;
	v17 = *(_DWORD*)(v7 + 8);
	v11[2] = *(_DWORD*)(v7 + 24);
	v9 = *(_DWORD*)(v7 + 28);
	v12 = *a3;
	v11[3] = v9;
	v13 = *(_DWORD*)(v7 + 12);
	v14 = (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(v7 + 16)) + a4;
	v15 = (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(v7 + 20)) + v14;
	v16 = *(_DWORD*)(v7 + 32);
	if (v8)
	{
		if (v8 == 1)
		{
			v18 = *(float*)(v7 + 52);
			v19 = a5 * *(float*)(v7 + 56);
		}
	}
	else
	{
		v20 = *(_DWORD*)(v7 + 44);
		v18 = a5 * *(float*)(v7 + 36);
		v19 = a5 * *(float*)(v7 + 40);
		v21 = *(_DWORD*)(v7 + 48);
	}
	return (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 272i64))(a1, v11);
}
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65878: using guessed type __int64 qword_140C65878;

