#include "../winhttp.h"

//----- (0000000140426630) ----------------------------------------------------
void __fastcall sub_140426630(__int64 a1, unsigned int* a2)
{
	unsigned int v4; // r8d
	__int64 v5; // rdx
	__int64 v6; // r14
	__int64 v7; // rdi
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // ebp
	__int64 v13; // rdx
	__int64 v14; // rdx
	unsigned __int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int v18; // ebx
	int v19; // esi
	__int64 v20; // rdx
	__m128 v21; // [rsp+40h] [rbp-78h] BYREF
	__int64(__fastcall * *v22)(); // [rsp+50h] [rbp-68h] BYREF
	unsigned int v23; // [rsp+58h] [rbp-60h]
	__int64 v24; // [rsp+60h] [rbp-58h]
	int v25; // [rsp+68h] [rbp-50h]
	char v26[8]; // [rsp+70h] [rbp-48h] BYREF
	int v27; // [rsp+78h] [rbp-40h]
	__int64 v28; // [rsp+80h] [rbp-38h]
	__int64 v29; // [rsp+C8h] [rbp+10h] BYREF

	v21 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[3], (__m128)a2[5]), _mm_unpacklo_ps((__m128)a2[4], (__m128)0i64));
	if (qword_140C658F8)
	{
		v4 = a2[11];
		v5 = a2[10];
		v29 = qword_140C77760;
		v6 = sub_140448BE0(a1, v5, v4, v21.m128_f32, 0i64, 1, &v29);
		if (v6)
		{
			v7 = *(_QWORD*)(a1 + 400);
			v8 = *(_QWORD*)(v7 + 32);
			v22 = off_140B569F0;
			v25 = 1;
			v9 = *(_QWORD*)(v8 + 112);
			v24 = v7;
			if (*(_QWORD*)(v8 + 120) >= v9)
				sub_14005E2C0(v7);
			v10 = *(_QWORD*)(v7 + 16);
			v11 = sub_14005C1B0(v7, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v7 + 16) += 16i64;
			v12 = sub_1400578C0(v7);
			v23 = v12;
			if ((int)sub_14052ED60(v6, (__int64)&v22) >= 0)
			{
				v14 = *(_QWORD*)(v7 + 32);
				v22 = off_140B569F0;
				v24 = v7;
				v15 = *(_QWORD*)(v14 + 112);
				v25 = 1;
				if (*(_QWORD*)(v14 + 120) >= v15)
					sub_14005E2C0(v7);
				v16 = *(_QWORD*)(v7 + 16);
				v17 = sub_14005C1B0(v7, 0, 0);
				*(_DWORD*)(v16 + 8) = 5;
				*(_QWORD*)v16 = v17;
				*(_QWORD*)(v7 + 16) += 16i64;
				v18 = sub_1400578C0(v7);
				v23 = v18;
				sub_1400FB2A0((__int64)&v22, (__int64)L"zoneMap", v12);
				v21 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)a2[3], (__m128)a2[5]),
					_mm_unpacklo_ps((__m128)a2[4], (__m128)0i64));
				sub_1400FA3C0((__int64)v26, v7, v21.m128_f32);
				v19 = v27;
				sub_1400FB2A0((__int64)&v22, (__int64)L"worldLoc", v27);
				sub_1400EA3E0(a1, "ShowLocOnWorldMap", byte_1409E9BBC, v18);
				if (v28)
					sub_1400579E0(v28, v20, v19);
				sub_1400579E0(v7, v20, v18);
			}
			sub_1400579E0(v7, v13, v12);
		}
	}
}
// 140426835: variable 'v20' is possibly undefined
// 14042684B: variable 'v13' is possibly undefined
// 1409E9BBC: using guessed type _BYTE byte_1409E9BBC[48];
// 140B008D0: using guessed type wchar_t aWorldloc[9];
// 140B008E8: using guessed type wchar_t aZonemap[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140426630: using guessed type char var_48[8];

