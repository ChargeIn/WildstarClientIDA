#include "../winhttp.h"

//----- (000000014083E6E0) ----------------------------------------------------
__int64 __fastcall sub_14083E6E0(__int64 a1)
{
	unsigned int v2; // edi
	_QWORD* v3; // rdx
	__int64 v4; // rsi
	void(__fastcall * v5)(_QWORD, __int64, _QWORD, _QWORD, __int64); // r13
	__int64 v6; // r15
	__int64 v7; // r12
	__int64 v8; // rax
	__int64 v9; // rax
	unsigned __int64 v10; // rcx
	unsigned int v11; // r8d
	__int64 v12; // r9
	__int64 v13; // rcx
	unsigned int v15; // eax
	__int64 v16; // r9
	__int64 v17; // rax
	int v18; // ecx
	__int64 v19; // [rsp+30h] [rbp-D0h]
	__int128 v20; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v21; // [rsp+50h] [rbp-B0h]
	__m128i v22; // [rsp+60h] [rbp-A0h]
	__int64 v23; // [rsp+70h] [rbp-90h]
	unsigned __int64 v24; // [rsp+80h] [rbp-80h]
	__int64 v25; // [rsp+88h] [rbp-78h]
	__m128i v26; // [rsp+90h] [rbp-70h] BYREF
	__int128 v27[3]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v28; // [rsp+D0h] [rbp-30h]
	__int128 v29[3]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v30; // [rsp+110h] [rbp+10h]
	__int128 v31[3]; // [rsp+120h] [rbp+20h] BYREF
	__int64 v32; // [rsp+150h] [rbp+50h]
	__int128 v33[3]; // [rsp+160h] [rbp+60h] BYREF
	__int64 v34; // [rsp+190h] [rbp+90h]
	__int128 v35[3]; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v36; // [rsp+1D0h] [rbp+D0h]
	__int128 v37[3]; // [rsp+1E0h] [rbp+E0h] BYREF
	__int64 v38; // [rsp+210h] [rbp+110h]
	__int128 v39[3]; // [rsp+220h] [rbp+120h] BYREF
	__int64 v40; // [rsp+250h] [rbp+150h]
	int v41; // [rsp+2A0h] [rbp+1A0h]
	__int64 v42; // [rsp+2A8h] [rbp+1A8h]

	v2 = 1;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
	while (*(_DWORD*)(a1 + 192))
	{
		v3 = *(_QWORD**)(a1 + 160);
		v4 = v3[1];
		v5 = (void(__fastcall*)(_QWORD, __int64, _QWORD, _QWORD, __int64))v3[2];
		v6 = v3[5];
		v7 = v3[6];
		v42 = v3[3];
		*(_QWORD*)&v21 = v42;
		v8 = v3[4];
		*(_QWORD*)&v20 = v4;
		v41 = v8;
		*((_QWORD*)&v21 + 1) = v8;
		v9 = v3[7];
		*((_QWORD*)&v20 + 1) = v5;
		v22.m128i_i64[0] = v6;
		v22.m128i_i64[1] = v7;
		v23 = v9;
		if (v3)
		{
			*(_QWORD*)(a1 + 160) = *v3;
			if (v3 == *(_QWORD**)(a1 + 168))
				*(_QWORD*)(a1 + 168) = 0i64;
			v10 = *(_QWORD*)(a1 + 200);
			if ((unsigned __int64)v3 < v10
				|| (unsigned __int64)v3 >= v10 + ((unsigned __int64)*(unsigned int*)(a1 + 184) << 6))
			{
				sub_140881720(dword_140C10F20, (__int64)v3);
			}
			else
			{
				*v3 = *(_QWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 176) = v3;
			}
			--* (_DWORD*)(a1 + 192);
		}
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
		switch ((int)v4)
		{
		case 0:
			v2 = sub_14083F680(a1, (__int64)&v20);
			break;
		case 1:
			v37[0] = v20;
			v37[1] = v21;
			v37[2] = (__int128)v22;
			v38 = v23;
			v2 = sub_140843000(a1, (__int64)v37);
			break;
		case 2:
			v27[0] = v20;
			v27[1] = v21;
			v27[2] = (__int128)v22;
			v28 = v23;
			v2 = sub_140840260(a1, (__int64)v27);
			break;
		case 3:
			v33[0] = v20;
			v33[1] = v21;
			v33[2] = (__int128)v22;
			v34 = v23;
			v2 = sub_1408435A0(a1, (__int64)v33);
			break;
		case 4:
			v29[0] = v20;
			v29[1] = v21;
			v29[2] = (__int128)v22;
			v30 = v23;
			v2 = sub_1408405A0(a1, (__int64)v29);
			break;
		case 5:
			sub_14083E430(a1);
			v11 = 0;
			v19 = v42;
			if ((_DWORD)v6 == 1)
				v11 = v7;
			v12 = 0i64;
			v13 = a1 + 2304;
			if (v41 == 1)
				v12 = v7;
			goto LABEL_20;
		case 6:
			v35[0] = v20;
			v35[1] = v21;
			v35[2] = (__int128)v22;
			v36 = v23;
			v15 = sub_14083FF20(a1, (__int64)v35, v6, (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v22, 4)) != 1) + 1, 1);
			v16 = 0i64;
			v2 = v15;
			if (v41 == 1)
				v16 = v7;
			sub_14083CE60(a1 + 2304, v5, v6, v16, v15, 0xFFFFFFFF, v42);
			break;
		case 7:
			LODWORD(v24) = v6;
			v25 = 0i64;
			v26 = (__m128i)v24;
			v17 = sub_140868CC0(a1 + 1776, &v26);
			if (v17)
			{
				v18 = *(_DWORD*)(v17 + 124);
				if (v18)
					*(_DWORD*)(v17 + 124) = v18 - 1;
				sub_140842230(v17, 0);
			}
			v12 = 0i64;
			v19 = v42;
			v13 = a1 + 2304;
			if (v41 == 1)
				v12 = v7;
			v11 = v6;
		LABEL_20:
			sub_14083CE60(v13, v5, v11, v12, 1u, 0xFFFFFFFF, v19);
			goto LABEL_21;
		case 8:
			v31[0] = v20;
			v31[1] = v21;
			v31[2] = (__int128)v22;
			v32 = v23;
			v2 = sub_14083E1D0(a1, (__int64)v31);
			break;
		case 9:
		case 11:
		LABEL_21:
			v2 = 1;
			break;
		case 10:
			v39[0] = v20;
			v39[1] = v21;
			v39[2] = (__int128)v22;
			v40 = v23;
			v2 = sub_140843380(a1, (__int64)v39);
			break;
		default:
			break;
		}
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
	return v2;
}
// 140C10F20: using guessed type int dword_140C10F20;

