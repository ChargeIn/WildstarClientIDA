#include "../winhttp.h"

//----- (00000001405CF290) ----------------------------------------------------
void __fastcall sub_1405CF290(__int64 a1, _DWORD* a2, double a3)
{
	unsigned int v4; // r8d
	unsigned int v5; // r8d
	int v6; // r15d
	int v7; // ebx
	int v8; // edi
	int* v9; // rax
	int v10; // ecx
	int v11; // edi
	__int64 v12; // r8
	unsigned int v13; // ecx
	unsigned int v14; // eax
	int i; // edi
	int v16; // eax
	unsigned int v17; // edx
	unsigned int v18; // edx
	int v19; // eax
	int v20; // ecx
	__int64 v21; // rcx
	int v22; // eax
	__m128i v23; // [rsp+20h] [rbp-40h] BYREF
	__int64 v24; // [rsp+30h] [rbp-30h]
	__int64 v25; // [rsp+38h] [rbp-28h]
	int v26[4]; // [rsp+40h] [rbp-20h] BYREF
	int* v27; // [rsp+50h] [rbp-10h]
	int v28; // [rsp+90h] [rbp+30h]
	int v29; // [rsp+90h] [rbp+30h]
	int v30; // [rsp+98h] [rbp+38h] BYREF
	__int16 v31; // [rsp+9Ch] [rbp+3Ch]

	v26[2] = 0;
	v23 = 0i64;
	sub_1401C9800(&v30, &v23);
	v28 = a2[5];
	v4 = v28 & 0x7FFFFFFF;
	if ((v28 & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v4 > 0x387FEFFF)
		{
			if (v4 > 0x47FFEFFF)
				LOWORD(v5) = 17407;
			else
				v5 = (v4 - 939520000) >> 13;
		}
		else
		{
			v5 = (((v28 & 0x7FFFFF | 0x800000u) >> (113 - (v4 >> 23))) + 4096) >> 13;
		}
	}
	else
	{
		LOWORD(v5) = 0;
	}
	v6 = a2[4];
	v7 = a2[3];
	v8 = HIWORD(v28) & 0x8000 | (unsigned __int16)v5;
	v26[1] = 8;
	v9 = sub_14018C320(0i64, 0x240ui64, 8u);
	v10 = v8;
	v11 = v8 & 0xFFFF7FFF;
	*v9 = 5;
	v12 = (__int64)v9;
	v13 = (v10 & 0xFFFF8000) << 16;
	v27 = v9;
	v9[2] = v7;
	if ((v11 & 0x7C00) != 0)
	{
		v11 = (v11 + 114688) << 13;
	}
	else if ((v11 & 0x3FF) != 0)
	{
		v14 = (v11 & 0x3FF) << 13;
		for (i = 113; v14 <= 0x7FFFFF; --i)
			v14 *= 2;
		v11 = v14 & 0x7FFFFF | (i << 23);
	}
	v16 = v30;
	*(_DWORD*)(v12 + 16) = 0;
	*(_DWORD*)(v12 + 12) = v13 | v11;
	*(_DWORD*)(v12 + 20) = v16;
	*(_WORD*)(v12 + 24) = v31;
	*(_DWORD*)(v12 + 28) = v6;
	*(_QWORD*)(v12 + 32) = 0i64;
	*(_DWORD*)(v12 + 40) = 0;
	*(_DWORD*)(v12 + 44) = 1;
	if (a2[6])
	{
		v29 = a2[5];
		v17 = v29 & 0x7FFFFFFF;
		if ((v29 & 0x7FFFFFFFu) >= 0x33800000)
		{
			if (v17 > 0x387FEFFF)
			{
				if (v17 > 0x47FFEFFF)
					LOWORD(v18) = 17407;
				else
					v18 = (v17 - 939520000) >> 13;
			}
			else
			{
				v18 = (((v29 & 0x7FFFFF | 0x800000u) >> (113 - (v17 >> 23))) + 4096) >> 13;
			}
		}
		else
		{
			LOWORD(v18) = 0;
		}
		v19 = a2[3];
		v20 = a2[4];
		*(_DWORD*)(v12 + 72) = 16;
		*(_DWORD*)(v12 + 80) = v19;
		*(_WORD*)(v12 + 84) = HIWORD(v29) & 0x8000 | v18;
		*(_DWORD*)(v12 + 88) = 0;
		*(_DWORD*)(v12 + 92) = v20;
		*(_QWORD*)(v12 + 96) = 0i64;
		*(_DWORD*)(v12 + 104) = 1;
	}
	else
	{
		*(_DWORD*)(v12 + 72) = 21;
		*(_DWORD*)(v12 + 80) = 1;
	}
	v21 = qword_140C65898;
	*(_DWORD*)(v12 + 144) = 10;
	*(_DWORD*)(v12 + 152) = 0;
	*(_DWORD*)(v12 + 216) = 13;
	*(_DWORD*)(v12 + 224) = 0;
	v22 = a2[7];
	*(_DWORD*)(v12 + 288) = 26;
	*(_DWORD*)(v12 + 296) = v22;
	v23 = 0ui64;
	v24 = 0i64;
	v25 = 0i64;
	v23.m128i_i32[0] = a2[2];
	v26[0] = 5;
	v23.m128i_i64[1] = 0x100000001i64;
	LODWORD(v24) = 5;
	v25 = v12;
	v23.m128i_i32[1] = dword_140C636A8;
	sub_14057A830(v21, v23.m128i_i32, a3);
	sub_14079A4F0((__int64)v26);
	sub_14018B900((__int64)v27, 0);
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

