#include "../winhttp.h"

//----- (00000001403D9A60) ----------------------------------------------------
__int64 __fastcall sub_1403D9A60(_QWORD* a1, __int64 a2, int a3, __int64 a4, float a5)
{
	__int64 v5; // rax
	int v6; // esi
	unsigned __int64 v7; // rbp
	__int64 v11; // rcx
	unsigned int v12; // r8d
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rcx
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rax
	unsigned int v37; // r14d
	__int64 v38; // rdx
	__int64(__fastcall * *v39)(); // rcx
	unsigned __int64 i; // rbx
	int v41; // ebx
	__int64 v42; // rax
	__int64 v43; // rax
	int v44; // ecx
	int v45; // eax
	__int64 v47; // [rsp+20h] [rbp-48h]
	int v48; // [rsp+30h] [rbp-38h] BYREF
	__int64 v49; // [rsp+38h] [rbp-30h]
	void(__fastcall * v50)(_DWORD*); // [rsp+40h] [rbp-28h]
	__int64 v51; // [rsp+48h] [rbp-20h]

	v5 = a1[15];
	v6 = 0;
	v7 = (unsigned int)a4;
	if (v5 && *(_DWORD*)(a2 + 8) == *(_DWORD*)(v5 + 8))
	{
		v11 = a1[3688];
		if (a5 == 0.0)
			v12 = a4;
		else
			v12 = (int)(float)(a5 + 0.5);
		sub_140429CB0(v11, a3, v12, a4, v47);
	}
	switch (a3)
	{
	case 1:
		*(float*)(a2 + 536) = a5;
		v13 = a1[3506];
		if (v13)
		{
			v14 = a1[15];
			if (v14)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v14 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 176i64))(v13);
			}
		}
		break;
	case 2:
		*(float*)(a2 + 540) = a5;
		v15 = a1[3506];
		if (v15)
		{
			v16 = a1[15];
			if (v16)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v16 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v15 + 168i64))(v15, 0i64);
			}
		}
		break;
	case 3:
		*(float*)(a2 + 544) = a5;
		v17 = a1[3506];
		if (v17)
		{
			v18 = a1[15];
			if (v18)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v18 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v17 + 168i64))(v17, 1i64);
			}
		}
		break;
	case 4:
		*(float*)(a2 + 548) = a5;
		v19 = a1[3506];
		if (v19)
		{
			v20 = a1[15];
			if (v20)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v20 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v19 + 168i64))(v19, 2i64);
			}
		}
		break;
	case 5:
		*(float*)(a2 + 552) = a5;
		v21 = a1[3506];
		if (v21)
		{
			v22 = a1[15];
			if (v22)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v22 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v21 + 168i64))(v21, 3i64);
			}
		}
		break;
	case 6:
		*(float*)(a2 + 556) = a5;
		v23 = a1[3506];
		if (v23)
		{
			v24 = a1[15];
			if (v24)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v24 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v23 + 168i64))(v23, 4i64);
			}
		}
		break;
	case 7:
		*(float*)(a2 + 560) = a5;
		v25 = a1[3506];
		if (v25)
		{
			v26 = a1[15];
			if (v26)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v26 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v25 + 168i64))(v25, 5i64);
			}
		}
		break;
	case 8:
		*(float*)(a2 + 564) = a5;
		v27 = a1[3506];
		if (v27)
		{
			v28 = a1[15];
			if (v28)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v28 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v27 + 168i64))(v27, 6i64);
			}
		}
		break;
	case 9:
		*(float*)(a2 + 568) = a5;
		v29 = a1[3506];
		if (v29)
		{
			v30 = a1[15];
			if (v30)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v30 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v29 + 168i64))(v29, 7i64);
			}
		}
		break;
	case 10:
		v37 = *(_DWORD*)(a2 + 56);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a2 + 48i64))(a2, (unsigned int)v7, 0i64);
		v38 = *(_QWORD*)(qword_140C65898 + 120);
		if (v38 && *(_DWORD*)(a2 + 8) == *(_DWORD*)(v38 + 8))
		{
			if (v37 >= (unsigned int)v7)
			{
				if (v37 > (unsigned int)v7)
				{
					v41 = 0;
					v42 = sub_14024DFC0(v7);
					if (v42)
					{
						v6 = *(_DWORD*)(v42 + 16);
						v41 = *(_DWORD*)(v42 + 12);
					}
					LODWORD(v47) = v6;
					Apollo_LUAEvent(a1[3688], "PlayerLevelChange", byte_1409ECB84, (unsigned int)v7, v47, v41);
				}
			}
			else
			{
				v48 = 0;
				v50 = sub_14045EDD0;
				v49 = a2;
				v51 = 0i64;
				sub_140195960(a2 + 608, 2000, (__int64)&v48, 4);
				for (i = v37 + 1; i < v7; ++i)
					sub_14043B4A0(v39, i);
			}
		}
		break;
	case 11:
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 56i64))(a2, (unsigned int)v7);
		break;
	case 15:
		sub_140470650(a2, v7, 0);
		break;
	case 17:
		if (*(_QWORD*)(a2 + 312) != v7)
			sub_14045AD90(a2, v7);
		break;
	case 19:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 104i64))(a2);
		break;
	case 20:
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a2 + 128i64))(
			a2,
			(unsigned int)v7,
			*(unsigned int*)(a2 + 8),
			0i64);
		v43 = a1[15];
		if (v43)
		{
			LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v43 + 8);
			if (v6)
				Apollo_LUAEvent(a1[3688], "RefreshHealthShieldBar", &unk_1409D08BE);
		}
		break;
	case 21:
		v44 = (int)*(float*)(a2 + 1828);
		if (v44 != -1)
		{
			v45 = v44 + (int)*(float*)(a2 + 3220);
			if (v45 != -1)
			{
				if ((v7 & 0x80000000) == 0i64)
				{
					if ((int)v7 > v45)
						LODWORD(v7) = v44 + (int)*(float*)(a2 + 3220);
					v6 = v7;
				}
				*(_DWORD*)(a2 + 1200) = v6;
			}
		}
		break;
	case 22:
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a2 + 152i64))(
			a2,
			(unsigned int)v7,
			*(unsigned int*)(a2 + 8));
		break;
	case 23:
		*(float*)(a2 + 572) = a5;
		v31 = a1[3506];
		if (v31)
		{
			v32 = a1[15];
			if (v32)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v32 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v31 + 168i64))(v31, 8i64);
			}
		}
		break;
	case 24:
		*(float*)(a2 + 576) = a5;
		v33 = a1[3506];
		if (v33)
		{
			v34 = a1[15];
			if (v34)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v34 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v33 + 168i64))(v33, 9i64);
			}
		}
		break;
	case 25:
		*(float*)(a2 + 580) = a5;
		v35 = a1[3506];
		if (v35)
		{
			v36 = a1[15];
			if (v36)
			{
				LOBYTE(v6) = *(_DWORD*)(a2 + 8) == *(_DWORD*)(v36 + 8);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v35 + 168i64))(v35, 10i64);
			}
		}
		break;
	case 26:
		*(_DWORD*)(a2 + 80) = v7;
		break;
	default:
		return 0i64;
	}
	return 0i64;
}
// 1403D9AD8: variable 'v47' is possibly undefined
// 1403D9F0A: variable 'v39' is possibly undefined
// 1409ECB84: using guessed type _BYTE byte_1409ECB84[4];
// 140C65898: using guessed type __int64 qword_140C65898;

