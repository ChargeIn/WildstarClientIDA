#include "../winhttp.h"

//----- (0000000140398CC0) ----------------------------------------------------
__int64 __fastcall sub_140398CC0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64* a5)
{
	_DWORD* v5; // r13
	_DWORD* v6; // rbx
	__int64 v11; // rcx
	int v12; // r14d
	int v13; // edx
	__int64 v14; // rax
	unsigned int v15; // edx
	__int64 v16; // r14
	__int64 v17; // rax
	__int64 v18; // r15
	int v19; // edx
	__int64 v20; // rax
	unsigned int v21; // r8d
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rcx
	int v25; // eax
	unsigned int v26; // eax
	unsigned int v27; // r14d
	__int64 v28; // rbx
	__int64 v29; // rax
	__int64 v30; // rbx
	__int64 v31; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v32; // [rsp+48h] [rbp-B8h] BYREF
	void(__fastcall * v33)(__int64); // [rsp+58h] [rbp-A8h]
	__int64 v34; // [rsp+60h] [rbp-A0h]
	int v35; // [rsp+68h] [rbp-98h]
	__int64 v36; // [rsp+70h] [rbp-90h] BYREF
	int v37; // [rsp+78h] [rbp-88h] BYREF
	int v38[8]; // [rsp+80h] [rbp-80h] BYREF
	__int16 v39; // [rsp+A0h] [rbp-60h]
	int v40; // [rsp+D8h] [rbp-28h]
	int v41; // [rsp+188h] [rbp+88h] BYREF

	v5 = *(_DWORD**)(a2 + 72);
	v6 = *(_DWORD**)(a2 + 64);
	v31 = -4294966996i64;
	if (!v5)
		v5 = v6 + 2;
	if (v6[105] && !*(_DWORD*)(a2 + 124))
		return 25i64;
	v11 = *(unsigned int*)(*(_QWORD*)(a1 + 120) + 56i64);
	if (v5[2] > (unsigned int)v11)
		return 26i64;
	v12 = 0;
	v41 = 0;
	if (a4 == 1)
	{
		if (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 124i64) != 6)
			return 5i64;
		v31 = *a5;
		if (!sub_1403AC780(a1 + 160, (int*)&v31))
			return 90i64;
		goto LABEL_38;
	}
	if (a4 == 2)
	{
		if (a5)
			v12 = *(_DWORD*)a5;
		goto LABEL_38;
	}
	v13 = v6[109];
	if (v13)
	{
		v14 = sub_1405A8A40(v11, v13);
		v15 = v6[110];
		v16 = v14;
		if (v15 == -1)
		{
			if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v14 + 8)) != 2
				&& (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v16 + 8)) != 3)
			{
				if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v16 + 8)) != 1)
					return 28i64;
			LABEL_37:
				v12 = 0;
				goto LABEL_38;
			}
		}
		else if (!(unsigned int)sub_1405510D0(v14, v15))
		{
			if (!sub_140550C00(v16, v6[110]))
				return 28i64;
			if (sub_1405517A0(v16, v6[110]))
			{
				v17 = *(_QWORD*)(a3 + 112);
				v18 = *(_QWORD*)(a1 + 25744);
				if (*(_DWORD*)(v17 + 24) == 3)
				{
				LABEL_25:
					v19 = 0;
				}
				else
				{
					switch (*(_DWORD*)(v17 + 124))
					{
					case 0:
					case 2:
					case 6:
					case 7:
						v19 = *(_DWORD*)(v18 + 8);
						break;
					case 1:
					case 3:
					case 5:
					case 8:
						v19 = *(_DWORD*)(v18 + 264);
						break;
					default:
						goto LABEL_25;
					}
				}
				v20 = sub_1403D90D0(a1, v19);
				if (!v20 || v18 == v20)
				{
				LABEL_36:
					v12 = v41;
					goto LABEL_38;
				}
				v21 = *(_DWORD*)(v20 + 13816);
				if (v21 != -1)
				{
					if ((unsigned int)sub_140551730(v16, v6[110], v21))
						return 28i64;
					goto LABEL_36;
				}
				return 28i64;
			}
			goto LABEL_37;
		}
		return 29i64;
	}
LABEL_38:
	if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
	{
		sub_1403A2550(a1);
		*(_DWORD*)(a1 + 26184) = 1;
		*(_QWORD*)(a1 + 26280) = *(_QWORD*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a2 + 32i64))(a2, &v41);
		v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2);
		LODWORD(v32) = 0;
		*(_QWORD*)(a1 + 26288) = v22;
		v23 = sub_14001C280(a1);
		v24 = *(_QWORD*)(a1 + 25744);
		v34 = 0i64;
		*((_QWORD*)&v32 + 1) = v23;
		v33 = sub_14039EA90;
		v25 = sub_1404720D0(v24);
		sub_140195960(a1 + 26200, v25, (__int64)&v32, 4);
		return 2i64;
	}
	else
	{
		sub_1407E4830(v38, 0i64, 0xC8ui64);
		v38[7] = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
		v39 = *((_WORD*)v5 + 6);
		v40 = 1;
		v41 = v12;
		v36 = 0i64;
		v26 = sub_1403988D0(a1, (unsigned int)v38, a3, a2, (__int64)&v41, (__int64)&v36, (__int64)&v37);
		v27 = v26;
		if (!v26 || v26 == 317)
		{
			v30 = v36;
			v32 = 0ui64;
			v33 = 0i64;
			v34 = 0i64;
			v35 = 0;
			LODWORD(v32) = *(_DWORD*)(v36 + 96);
			*(_QWORD*)((char*)&v32 + 4) = *(_QWORD*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a2 + 32i64))(
				a2,
				&v41);
			HIDWORD(v32) = *(_DWORD*)(v30 + 344);
			v34 = *(_QWORD*)(a1 + 27920);
			v35 = *(_DWORD*)(a1 + 27928);
			v33 = (void(__fastcall*)(__int64))v31;
			sub_1403F4900(a1, 0x943u, (__int64)&v32);
		}
		else
		{
			if (v26 == 105)
			{
				v28 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)a2 + 32i64))(a2, &v36);
				v29 = sub_1403D90D0(a1, v41);
				if ((int)sub_1405593E0(a1 + 28848, v29, v28) >= 0)
					v27 = 2;
			}
			else if (v37)
			{
				*(_DWORD*)(a1 + 26184) = 1;
				*(_QWORD*)(a1 + 26280) = *(_QWORD*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a2 + 32i64))(
					a2,
					&v41);
				*(_QWORD*)(a1 + 26288) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2);
				sub_14039E400(a1);
			}
			sub_1403B5250(v27);
			sub_1400035B0();
		}
		return v27;
	}
}
// 1403988D0: using guessed type __int64 __fastcall sub_1403988D0(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64);
// 1405593E0: using guessed type __int64 __fastcall sub_1405593E0(_QWORD, _QWORD, _QWORD);
// 140C65B80: using guessed type __int64 qword_140C65B80;

