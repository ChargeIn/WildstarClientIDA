#include "../winhttp.h"

//----- (000000014017B360) ----------------------------------------------------
void __fastcall sub_14017B360(__int64 a1, float a2)
{
	__int64 v2; // r9
	__int64* v3; // r8
	__int64 v4; // rdx
	int v5; // eax
	float v6; // xmm2_4
	__int64* v7; // rdx
	__int64 v8; // rcx
	int v9; // eax
	__int128 v10; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v11[3]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v12; // [rsp+48h] [rbp-B8h]
	__int128 v13; // [rsp+50h] [rbp-B0h]
	int v14[8]; // [rsp+60h] [rbp-A0h]
	__int128 v15; // [rsp+80h] [rbp-80h]
	__int64 v16[3]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v17; // [rsp+A8h] [rbp-58h]
	__int128 v18; // [rsp+B0h] [rbp-50h]
	int v19; // [rsp+C0h] [rbp-40h]
	int v20; // [rsp+C4h] [rbp-3Ch]
	int v21; // [rsp+C8h] [rbp-38h]
	int v22; // [rsp+CCh] [rbp-34h]
	int v23; // [rsp+D0h] [rbp-30h]
	int v24[5]; // [rsp+DCh] [rbp-24h]
	int v25[4]; // [rsp+F0h] [rbp-10h]

	v2 = *(_QWORD*)a1;
	*(float*)(a1 + 32) = a2;
	if (v2)
	{
		v3 = v11;
		v4 = 0i64;
		do
		{
			v5 = *(_DWORD*)((char*)&unk_140A14E90 + v4 * 4);
			v14[v4++] = 0;
			*(_DWORD*)((char*)&v12 + v4 * 4 + 4) = v5;
			*v3++ = 0i64;
		} while (v4 < 4);
		v6 = a2 + *(float*)(a1 + 28);
		v25[0] = 1065353216;
		v25[2] = 1065353216;
		v25[3] = 1065353216;
		v24[1] = (int)a2;
		v24[2] = 0;
		v24[4] = 0;
		v25[1] = 0;
		v23 = 0;
		v7 = v16;
		v8 = 0i64;
		v24[3] = (int)v6;
		do
		{
			v9 = v25[v8++];
			++v7;
			*(_DWORD*)((char*)&v17 + v8 * 4 + 4) = v9;
			*(_DWORD*)((char*)&v18 + v8 * 4 + 12) = v24[v8];
			*(v7 - 1) = 0i64;
		} while (v8 < 4);
		v11[0] = v16[0];
		v10 = v15;
		v11[1] = v16[1];
		v13 = v18;
		v11[2] = v16[2];
		v12 = v17;
		v14[0] = v19;
		v14[1] = v20;
		v14[2] = v21;
		v14[3] = v22;
		v14[4] = v23 | 0x300;
		sub_1400CC680(v2, (__int64)&v10);
	}
}

