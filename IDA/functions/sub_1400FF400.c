#include "../winhttp.h"

//----- (00000001400FF400) ----------------------------------------------------
__int64 __fastcall sub_1400FF400(unsigned __int16* a1, char a2, unsigned __int8 a3)
{
	unsigned __int16 v3; // bx
	unsigned __int16 v4; // di
	__int64 v6; // rcx
	__int64 v7; // r10
	unsigned int v8; // r9d
	unsigned __int16 v9; // r10
	unsigned __int16 v10; // bx
	unsigned __int16 v11; // di
	unsigned __int16 v12; // si
	unsigned __int16 v13; // r14
	unsigned __int16 v14; // r15
	unsigned __int16 v15; // r12
	unsigned __int16 v16; // r13
	int v17; // ecx
	int v18; // ecx
	int v19; // r8d
	unsigned __int16 v20; // dx
	unsigned __int16 v21; // r8
	unsigned __int16 v22; // r9
	unsigned __int64 v23; // rdx
	unsigned __int8 v25; // [rsp+0h] [rbp-40h]
	int v26; // [rsp+4h] [rbp-3Ch]
	unsigned __int8 v27; // [rsp+8h] [rbp-38h]
	char v28; // [rsp+9h] [rbp-37h]
	int v29; // [rsp+Ch] [rbp-34h]
	__int64 v30; // [rsp+10h] [rbp-30h]
	__int64 v31; // [rsp+18h] [rbp-28h]
	__int64 v32; // [rsp+20h] [rbp-20h]
	__int64 v33; // [rsp+28h] [rbp-18h]
	__int64 v34; // [rsp+30h] [rbp-10h]

	v3 = *a1;
	v4 = a1[1];
	v27 = a3;
	v28 = a2;
	v25 = 0;
	LOWORD(v26) = v3;
	HIWORD(v26) = v4;
	v32 = 0i64;
	v33 = 0i64;
	v34 = 0i64;
	v30 = 0i64;
	v31 = 0i64;
	v6 = 0i64;
	v7 = 2i64;
	do
	{
		v8 = *(unsigned __int16*)((char*)&v26 + v6);
		v6 += 2i64;
		*(_WORD*)((char*)&v31 + v6 + 6) = (__int16)(255 * (v8 >> 11)) / 31;
		*(_WORD*)((char*)&v32 + v6 + 6) = (__int16)(255 * ((v8 >> 5) & 0x3F)) / 63;
		*(_WORD*)((char*)&v33 + v6 + 6) = (int)(255 * (v8 & 0x1F)) / 31;
		--v7;
	} while (v7);
	if (v3 <= v4)
	{
		v10 = WORD1(v32);
		v9 = v32;
		v12 = WORD1(v33);
		v11 = v33;
		v14 = WORD1(v34);
		v16 = 0;
		v21 = 0;
		v13 = v34;
		v15 = ((unsigned __int16)v32 >> 1) + (WORD1(v32) >> 1);
		v20 = ((unsigned __int16)v33 >> 1) + (WORD1(v33) >> 1);
		v22 = 0;
		LOWORD(v26) = ((unsigned __int16)v34 >> 1) + (WORD1(v34) >> 1);
	}
	else
	{
		v9 = v32;
		v10 = WORD1(v32);
		v11 = v33;
		v12 = WORD1(v33);
		v13 = v34;
		v14 = WORD1(v34);
		v15 = SWORD1(v32) / 3 + 2 * (unsigned __int16)v32 / 3;
		v16 = (__int16)v32 / 3 + 2 * WORD1(v32) / 3;
		v17 = 2 * (unsigned __int16)v33 / 3;
		LOWORD(v17) = SWORD1(v33) / 3 + v17;
		v29 = v17;
		v18 = 2 * WORD1(v33) / 3;
		LOWORD(v18) = (__int16)v33 / 3 + v18;
		LODWORD(v33) = v18;
		v26 = 2 * (unsigned __int16)v34 / 3;
		LOWORD(v26) = SWORD1(v34) / 3 + v26;
		v19 = 2 * WORD1(v34) / 3;
		LOWORD(v19) = (__int16)v34 / 3 + v19;
		v20 = v29;
		LODWORD(v32) = v19;
		v21 = v18;
		v22 = v32;
		v25 = -1;
	}
	LODWORD(v30) = v13 | ((v11 | (v9 << 8)) << 8) | 0xFF000000;
	HIDWORD(v30) = v14 | ((v12 | (v10 << 8)) << 8) | 0xFF000000;
	LODWORD(v31) = (unsigned __int16)v26 | ((v20 | (v15 << 8)) << 8) | 0xFF000000;
	v23 = *((unsigned __int8*)a1 + v27 + 4);
	HIDWORD(v31) = v22 | ((v21 | ((v16 | (v25 << 8)) << 8)) << 8);
	return *((unsigned int*)&v30 + ((v23 >> (2 * v28)) & 3));
}

