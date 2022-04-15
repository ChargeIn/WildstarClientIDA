#include "../winhttp.h"

//----- (000000014047B160) ----------------------------------------------------
__int64 __fastcall sub_14047B160(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdx
	unsigned int v5; // r8d
	__int64 v6; // r9
	__int64 v7; // rax
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // r14
	int v12; // eax
	int v13; // eax
	signed __int64 v14; // r10
	__int64* v15; // rcx
	int* v16; // rdx
	__int64 v17; // rsi
	int v18; // eax
	__int64 v19; // rax
	int v20; // r11d
	int v21; // r9d
	unsigned int v22; // r8d
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // r9
	__int64 v26; // r10
	__int64 v27; // rcx
	__int64 v28; // rdx
	float v29; // xmm2_4
	float v30; // xmm3_4
	unsigned __int64 v31; // rcx
	float v32; // xmm1_4
	unsigned __int64 v33; // rcx
	float v34; // xmm1_4
	unsigned __int64 v35; // rcx
	float v36; // xmm1_4
	unsigned __int64 v37; // rcx
	float v38; // xmm1_4
	__int64 v39; // [rsp+20h] [rbp-50h] BYREF
	__int64 v40; // [rsp+28h] [rbp-48h]
	__int64 v41; // [rsp+30h] [rbp-40h]
	__int64 v42; // [rsp+38h] [rbp-38h]
	__int64 v43; // [rsp+40h] [rbp-30h]
	__int64 v44; // [rsp+48h] [rbp-28h]
	__int64 v45; // [rsp+58h] [rbp-18h]
	__int64 v46; // [rsp+60h] [rbp-10h]

	v3 = *(_QWORD*)(a1 + 14008);
	v5 = 0;
	if (!v3)
		return 2147500037i64;
	v6 = *(_QWORD*)(a1 + 14000);
	v7 = 0i64;
	while (*(_DWORD*)a2 != *(_DWORD*)((v7 << 8) + v6))
	{
		v7 = ++v5;
		if (v5 >= v3)
			return 2147500037i64;
	}
	v9 = v6 + ((unsigned __int64)v5 << 8);
	if (!v9)
		return 2147500037i64;
	if (!*(_DWORD*)(a2 + 16) && !*(_DWORD*)(a2 + 4))
	{
		sub_1403D3150(a1 + 14000, v5);
		return 0i64;
	}
	*(_DWORD*)(v9 + 8) = *(_DWORD*)(a2 + 8);
	if (*(_DWORD*)(v9 + 4))
		return 2147500037i64;
	v10 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a2 + 8), 0i64);
	v11 = v10;
	if (!v10)
		return 2147500037i64;
	*(_QWORD*)(v9 + 16) = *((_QWORD*)v10 + 61);
	v12 = v10[120];
	v39 = 0i64;
	*(_DWORD*)(v9 + 24) = v12;
	v13 = v11[107];
	v40 = 1i64;
	*(_DWORD*)(v9 + 32) = v13;
	v41 = 0i64;
	v42 = 0i64;
	v43 = 1i64;
	v44 = 0i64;
	v14 = (char*)v11 - (char*)&v39;
	v15 = &v39;
	v16 = (int*)(a2 + 52);
	v17 = 2i64;
	do
	{
		v18 = *v16;
		if (*v16)
		{
			if (v18 == 3)
				v20 = v16[2];
			else
				v20 = 0;
			if (v18 == 1)
				v21 = v16[2];
			else
				v21 = 0;
			if (v18 == 2)
				v22 = v16[2];
			else
				v22 = 15;
			v23 = (unsigned int)v16[1];
			v45 = v22;
			*v15 = v23;
			LODWORD(v46) = v21;
			v15[1] = v45;
			HIDWORD(v46) = v20;
			v19 = v46;
		}
		else
		{
			*v15 = *(__int64*)((char*)v15 + v14 + 48);
			v15[1] = *(__int64*)((char*)v15 + v14 + 56);
			v19 = *(__int64*)((char*)v15 + v14 + 64);
		}
		v15[2] = v19;
		v15 += 3;
		v16 += 3;
		--v17;
	} while (v17);
	v24 = v42;
	v25 = v40;
	v26 = v41;
	v27 = v43;
	v28 = v44;
	*(_QWORD*)(v9 + 136) = v39;
	*(_QWORD*)(v9 + 144) = v25;
	*(_QWORD*)(v9 + 152) = v26;
	*(_QWORD*)(v9 + 160) = v24;
	*(_QWORD*)(v9 + 168) = v27;
	*(_QWORD*)(v9 + 176) = v28;
	*(_QWORD*)(v9 + 184) = *((_QWORD*)v11 + 12);
	*(_QWORD*)(v9 + 192) = *((_QWORD*)v11 + 13);
	*(_QWORD*)(v9 + 200) = *((_QWORD*)v11 + 14);
	*(_QWORD*)(v9 + 208) = *((_QWORD*)v11 + 15);
	*(_QWORD*)(v9 + 216) = *((_QWORD*)v11 + 16);
	*(_QWORD*)(v9 + 224) = *((_QWORD*)v11 + 17);
	*(_DWORD*)(v9 + 232) = v11[119];
	*(_DWORD*)(v9 + 236) = *(_DWORD*)(a2 + 20);
	if (!*(_QWORD*)(v9 + 16))
		return 2147500037i64;
	*(_DWORD*)(v9 + 28) = *(_DWORD*)(a2 + 16);
	*(_QWORD*)(v9 + 48) = *(_QWORD*)(a2 + 40);
	*(_DWORD*)(v9 + 56) = *(_DWORD*)(a2 + 48);
	v29 = *(float*)(a1 + 14044);
	v30 = *(float*)(a1 + 14048);
	if ((_DWORD)v25 == 1)
	{
		v31 = 0i64;
		v32 = (float)(int)*(_QWORD*)(v9 + 136) * v29;
		if (v32 >= 9.223372e18)
		{
			v32 = v32 - 9.223372e18;
			if (v32 < 9.223372e18)
				v31 = 0x8000000000000000ui64;
		}
		*(_QWORD*)(v9 + 136) = v31 + (unsigned int)(int)v32;
	}
	if (*(_DWORD*)(v9 + 168) == 1)
	{
		v33 = 0i64;
		v34 = (float)(int)*(_QWORD*)(v9 + 160) * v29;
		if (v34 >= 9.223372e18)
		{
			v34 = v34 - 9.223372e18;
			if (v34 < 9.223372e18)
				v33 = 0x8000000000000000ui64;
		}
		*(_QWORD*)(v9 + 160) = v33 + (unsigned int)(int)v34;
	}
	if (*(_DWORD*)(v9 + 192) == 1)
	{
		v35 = 0i64;
		v36 = (float)(int)*(_QWORD*)(v9 + 184) * v30;
		if (v36 >= 9.223372e18)
		{
			v36 = v36 - 9.223372e18;
			if (v36 < 9.223372e18)
				v35 = 0x8000000000000000ui64;
		}
		*(_QWORD*)(v9 + 184) = v35 + (unsigned int)(int)v36;
	}
	if (*(_DWORD*)(v9 + 216) == 1)
	{
		v37 = 0i64;
		v38 = (float)(int)*(_QWORD*)(v9 + 208) * v30;
		if (v38 >= 9.223372e18)
		{
			v38 = v38 - 9.223372e18;
			if (v38 < 9.223372e18)
				v37 = 0x8000000000000000ui64;
		}
		*(_QWORD*)(v9 + 208) = v37 + (unsigned int)(int)v38;
	}
	return 0i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

