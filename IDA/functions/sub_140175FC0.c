#include "../winhttp.h"

//----- (0000000140175FC0) ----------------------------------------------------
__int64 __fastcall sub_140175FC0(__int64 a1, __int64 a2)
{
	__int64 v5; // rax
	__m128i* v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rax
	__m128i* v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rax
	__m128i* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__m128i* v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rax
	__m128i* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rax
	__m128i* v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rax
	__int64 v25; // rax
	__m128i* v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rax
	float v29; // xmm1_4
	float v30; // xmm0_4
	unsigned int v31; // xmm1_4
	__int64 v32; // rax
	_WORD* v33; // rax
	__int64 v34; // rax
	_WORD* v35; // rax
	__int64 v36; // rax
	_WORD* v37; // rax
	__int64 v38; // rax
	__int64 v39; // rax
	_WORD* v40; // rax
	float v41; // xmm5_4
	float v42; // xmm0_4
	float v43; // xmm3_4
	float v44; // xmm4_4
	double v45; // xmm1_8
	unsigned int v46[4]; // [rsp+30h] [rbp-39h] BYREF
	__int64 v47; // [rsp+40h] [rbp-29h] BYREF
	char v48; // [rsp+48h] [rbp-21h]
	__int128 v49; // [rsp+50h] [rbp-19h]
	__int128 v50; // [rsp+60h] [rbp-9h]
	__int128 v51; // [rsp+70h] [rbp+7h]
	__int64 v52; // [rsp+80h] [rbp+17h]
	float v53; // [rsp+D8h] [rbp+6Fh] BYREF
	float v54; // [rsp+E0h] [rbp+77h] BYREF
	float v55; // [rsp+E8h] [rbp+7Fh] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = sub_1401A6B80(a2, L"LeftCap");
	if (v5)
	{
		v6 = (__m128i*)sub_1401A4F40(v5 + 32);
		if (v6)
		{
			v7 = *(_QWORD*)(a1 + 32);
			if (v7)
				sub_140109710((__int64*)(a1 + 2304), v7 + 240, v6, 0);
		}
	}
	v8 = sub_1401A6B80(a2, L"RightCap");
	if (v8)
	{
		v9 = (__m128i*)sub_1401A4F40(v8 + 32);
		if (v9)
		{
			v10 = *(_QWORD*)(a1 + 32);
			if (v10)
				sub_140109710((__int64*)(a1 + 2352), v10 + 240, v9, 0);
		}
	}
	v11 = sub_1401A6B80(a2, L"Middle");
	if (v11)
	{
		v12 = (__m128i*)sub_1401A4F40(v11 + 32);
		if (v12)
		{
			v13 = *(_QWORD*)(a1 + 32);
			if (v13)
				sub_140109710((__int64*)(a1 + 2400), v13 + 240, v12, 0);
		}
	}
	v14 = sub_1401A6B80(a2, L"Thumb");
	if (v14)
	{
		v15 = (__m128i*)sub_1401A4F40(v14 + 32);
		if (v15)
		{
			v16 = *(_QWORD*)(a1 + 32);
			v49 = 0i64;
			v50 = 0i64;
			v51 = 0i64;
			v47 = 0i64;
			v48 = 0;
			v52 = 0i64;
			sub_14010B330(&v47, v16, v15, 0i64);
			*(_DWORD*)(a1 + 2184) = 2;
			sub_1400C3730(a1 + 1888, (__int64)&v47);
			*(_BYTE*)(a1 + 2302) &= ~1u;
			v17 = v52;
			*(_WORD*)(a1 + 2300) = 16;
			*(_DWORD*)(a1 + 2284) = 1048576000;
			*(_QWORD*)(a1 + 2288) = 1048576000i64;
			*(_QWORD*)(a1 + 2276) = 5i64;
			*(_DWORD*)(a1 + 2296) = 1056964608;
			*(_DWORD*)(a1 + 2272) = 5;
			*(_QWORD*)(a1 + 2176) = v17;
		}
	}
	v18 = sub_1401A6B80(a2, L"Tick");
	if (v18)
	{
		v19 = (__m128i*)sub_1401A4F40(v18 + 32);
		if (v19)
		{
			v20 = *(_QWORD*)(a1 + 32);
			if (v20)
				sub_140109710((__int64*)(a1 + 2448), v20 + 240, v19, 0);
		}
	}
	v21 = sub_1401A6B80(a2, L"DecButton");
	if (v21)
	{
		v22 = (__m128i*)sub_1401A4F40(v21 + 32);
		if (v22)
		{
			v23 = *(_QWORD*)(a1 + 32);
			v49 = 0i64;
			v50 = 0i64;
			v51 = 0i64;
			v47 = 0i64;
			v48 = 0;
			v52 = 0i64;
			sub_14010B330(&v47, v23, v22, 0i64);
			*(_DWORD*)(a1 + 1352) = 2;
			sub_1400C3730(a1 + 1056, (__int64)&v47);
			*(_BYTE*)(a1 + 1470) &= ~1u;
			v24 = v52;
			*(_WORD*)(a1 + 1468) = 16;
			*(_DWORD*)(a1 + 1452) = 1048576000;
			*(_QWORD*)(a1 + 1456) = 1048576000i64;
			*(_QWORD*)(a1 + 1444) = 5i64;
			*(_DWORD*)(a1 + 1464) = 1056964608;
			*(_DWORD*)(a1 + 1440) = 5;
			*(_QWORD*)(a1 + 1344) = v24;
		}
	}
	v25 = sub_1401A6B80(a2, L"IncButton");
	if (v25)
	{
		v26 = (__m128i*)sub_1401A4F40(v25 + 32);
		if (v26)
		{
			v27 = *(_QWORD*)(a1 + 32);
			v49 = 0i64;
			v50 = 0i64;
			v51 = 0i64;
			v47 = 0i64;
			v48 = 0;
			v52 = 0i64;
			sub_14010B330(&v47, v27, v26, 0i64);
			*(_DWORD*)(a1 + 1768) = 2;
			sub_1400C3730(a1 + 1472, (__int64)&v47);
			*(_BYTE*)(a1 + 1886) &= ~1u;
			v28 = v52;
			*(_WORD*)(a1 + 1884) = 16;
			*(_DWORD*)(a1 + 1868) = 1048576000;
			*(_QWORD*)(a1 + 1872) = 1048576000i64;
			*(_QWORD*)(a1 + 1860) = 5i64;
			*(_DWORD*)(a1 + 1880) = 1056964608;
			*(_DWORD*)(a1 + 1856) = 5;
			*(_QWORD*)(a1 + 1760) = v28;
		}
	}
	v29 = *(float*)(a1 + 1028);
	v54 = *(float*)(a1 + 1024);
	v30 = *(float*)(a1 + 1036);
	v55 = v29;
	v31 = *(_DWORD*)(a1 + 1032);
	v53 = v30;
	v46[0] = v31;
	v32 = sub_1401A6B80(a2, L"Min");
	if (v32)
	{
		v33 = (_WORD*)sub_1401A4F40(v32 + 32);
		sub_1407DF428(v33, (__int64)L"%f", &v54);
	}
	v34 = sub_1401A6B80(a2, L"Max");
	if (v34)
	{
		v35 = (_WORD*)sub_1401A4F40(v34 + 32);
		sub_1407DF428(v35, (__int64)L"%f", &v55);
	}
	v36 = sub_1401A6B80(a2, L"TickAmount");
	if (v36)
	{
		v37 = (_WORD*)sub_1401A4F40(v36 + 32);
		sub_1407DF428(v37, (__int64)L"%f", &v53);
	}
	if (v53 <= 0.0)
	{
		v38 = sub_1401A6B80(a2, L"Name");
		if (v38)
			sub_1401A4F40(v38 + 32);
		sub_140059390();
		v53 = 1.0;
	}
	v39 = sub_1401A6B80(a2, L"InitialValue");
	if (v39)
	{
		v40 = (_WORD*)sub_1401A4F40(v39 + 32);
		sub_1407DF428(v40, (__int64)L"%f", v46);
	}
	v41 = v55;
	v42 = v53;
	v43 = v54;
	v44 = fminf(v55, *(float*)(a1 + 1032));
	*(_QWORD*)&v45 = v46[0];
	*(float*)(a1 + 1024) = v54;
	*(float*)(a1 + 1028) = v41;
	*(float*)(a1 + 1036) = v42;
	*(float*)(a1 + 1032) = fmaxf(v43, v44);
	sub_140174900(a1, v45);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 384i64))(a1);
	return 0i64;
}
// 1409E441C: using guessed type wchar_t asc_1409E441C[3];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A397F0: using guessed type wchar_t aRightcap[9];
// 140A39808: using guessed type wchar_t aLeftcap[8];
// 140A39818: using guessed type wchar_t aThumb_0[6];
// 140A39828: using guessed type wchar_t aMiddle_0[7];
// 140A398B0: using guessed type wchar_t aIncbutton_0[10];
// 140A398C8: using guessed type wchar_t aTickamount[11];
// 140A398F8: using guessed type wchar_t aDecbutton_0[10];
// 140A39910: using guessed type wchar_t aMin_1[4];
// 140A39918: using guessed type wchar_t aTick[5];
// 140A39928: using guessed type wchar_t aInitialvalue[13];
// 140A39948: using guessed type wchar_t aMax_0[4];
// 140175FC0: using guessed type unsigned int var_90[4];

