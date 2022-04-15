#include "../winhttp.h"

//----- (000000014039B340) ----------------------------------------------------
__int64 __fastcall sub_14039B340(__int64 a1, int a2)
{
	__int64 v2; // rsi
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v11; // rax
	__int64 v12; // r15
	__int64 v13; // rax
	_DWORD* v14; // r14
	int v15; // eax
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rcx
	int v19; // eax
	BOOL v20; // edx
	__int64 v21; // rcx
	__int64 v22; // rsi
	unsigned int v23; // eax
	unsigned int v24; // ebx
	__int64 v25; // r14
	__int64 v26; // r12
	__int64 v27; // rax
	__int64 v28; // rsi
	__int64 v29; // rax
	__int64 v30; // r8
	__int64 v31; // r8
	unsigned int v32; // eax
	unsigned int v33; // esi
	__int64 v34; // rax
	__int64 v35; // rdx
	int v36; // eax
	unsigned __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v38; // [rsp+48h] [rbp-B8h]
	__int64 v39; // [rsp+50h] [rbp-B0h]
	__int64 v40; // [rsp+58h] [rbp-A8h]
	int v41[7]; // [rsp+60h] [rbp-A0h] BYREF
	int v42; // [rsp+7Ch] [rbp-84h]
	int v43; // [rsp+84h] [rbp-7Ch]
	int v44; // [rsp+B8h] [rbp-48h]
	int v45; // [rsp+170h] [rbp+70h] BYREF
	int v46; // [rsp+180h] [rbp+80h] BYREF
	__int64 v47; // [rsp+188h] [rbp+88h] BYREF

	v2 = *(_QWORD*)(a1 + 120);
	if (!v2)
		return 30i64;
	v6 = *(_QWORD*)(a1 + 5248);
	v7 = *(_QWORD*)(v6 + 16);
	if (v7 == v6)
		return 1i64;
	while (*(_DWORD*)(v7 + 32) != a2)
	{
		v8 = *(_QWORD*)(v7 + 24);
		if (v8)
		{
			v7 = *(_QWORD*)(v7 + 24);
			for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
				v7 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v7 = j;
			if (*(_QWORD*)(v7 + 24) != j)
				v7 = j;
		}
		if (v7 == v6)
			return 1i64;
	}
	if (v7 == -32)
		return 1i64;
	v11 = sub_1403ACD90(qword_140C65B70, a2, v2);
	v12 = v11;
	if (!v11)
		return 22i64;
	if (!(unsigned int)sub_1403A1630(a1, *(_DWORD*)(*(_QWORD*)(v11 + 112) + 4i64), 1))
		return 13i64;
	v13 = sub_14055BDC0(a1, v2, v12, 0, 0);
	v14 = (_DWORD*)v13;
	if (v13)
		v15 = *(_DWORD*)(v13 + 8);
	else
		v15 = 0;
	v45 = v15;
	sub_1407E4830(v41, 0i64, 0xC8ui64);
	v42 = *(_DWORD*)(v2 + 8);
	v41[0] = a2;
	v41[1] = a2;
	v44 = 1;
	if (*(_DWORD*)(*(_QWORD*)(v12 + 112) + 124i64) != 4)
		goto LABEL_26;
	if (sub_1403A1600(a1))
	{
		sub_1403A1510(v16);
	LABEL_26:
		if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
		{
			sub_1403A2550(a1);
			*(_DWORD*)(a1 + 26184) = 5;
			*(_DWORD*)(a1 + 26192) = a2;
			LODWORD(v37) = 0;
			v17 = sub_14001C280(a1);
			v18 = *(_QWORD*)(a1 + 25744);
			v40 = 0i64;
			v38 = v17;
			v39 = (__int64)sub_14039EA90;
			v19 = sub_1404720D0(v18);
			sub_140195960(a1 + 26200, v19, (__int64)&v37, 4);
			return 2i64;
		}
		else
		{
			v46 = 0;
			v47 = 0i64;
			v32 = sub_1403988D0(a1, (unsigned int*)v41, v12, 0i64, &v45, &v47, &v46);
			v33 = v32;
			if (!v32 || v32 == 317)
			{
				v37 = 0i64;
				v38 = 0i64;
				v39 = 0i64;
				v37 = __PAIR64__(a2, *(_DWORD*)(v47 + 96));
				if (v14)
				{
					LODWORD(v38) = v14[2];
					HIDWORD(v38) = v14[1144];
					LODWORD(v39) = v14[1145];
					v36 = v14[1146];
				}
				else
				{
					HIDWORD(v38) = *(_DWORD*)(a1 + 27920);
					LODWORD(v39) = *(_DWORD*)(a1 + 27924);
					v36 = *(_DWORD*)(a1 + 27928);
				}
				HIDWORD(v39) = v36;
				sub_1403F4900(a1, 0x9Du, (__int64)&v37);
				return v33;
			}
			else
			{
				if (v32 == 105)
				{
					v34 = sub_1403D90D0(a1, v45);
					if ((int)sub_1405597B0(a1 + 28848, v35, v34, a2) >= 0)
						v33 = 2;
				}
				else if ((*(_DWORD*)(*(_QWORD*)(v12 + 112) + 268i64) & 0x4000000) == 0 || ((v32 - 91) & 0xFFFFFFF7) != 0)
				{
					if (v46)
					{
						*(_DWORD*)(a1 + 26184) = 5;
						*(_DWORD*)(a1 + 26192) = a2;
						sub_14039E400(a1);
					}
				}
				else
				{
					*(_QWORD*)(a1 + 27880) = v12;
					v38 = 0x500000000i64;
					v39 = -4294966996i64;
					*(_QWORD*)(a1 + 27888) = 0x500000000i64;
					LODWORD(v40) = 9;
					*(_QWORD*)(a1 + 27896) = v39;
					v33 = 3;
					*(_QWORD*)(a1 + 27904) = v40;
				}
				sub_1403B5250(v33);
				sub_1400035B0();
				return v33;
			}
		}
	}
	if (!a2)
		return 4;
	v20 = *(_QWORD*)(qword_140C65898 + 120) == v2 || *(_QWORD*)(qword_140C65898 + 25744) == v2;
	v21 = 0i64;
	if (v20)
		v21 = qword_140C65898;
	if (v21 && sub_1405A5B90(v21, a2) || sub_1407A0FD0(qword_140C65B70, a2))
	{
		if (v14)
			v43 = v14[2];
		v22 = qword_140C65B70;
		v23 = sub_1403AE8C0(qword_140C65B70, (__int64)v41, 0i64, 0i64, qword_140C659A0, 1);
		v24 = v23;
		if (v23)
		{
			if (v23 == 317)
				v24 = 317;
		}
		else
		{
			v25 = sub_1403D90D0(qword_140C65898, v42);
			v26 = sub_1403D90D0(qword_140C65898, v43);
			if (v25)
			{
				v27 = sub_1403ACD90(v22, v41[0], v25);
				v28 = v27;
				if (v27)
				{
					v29 = *(_QWORD*)(v27 + 112);
					v30 = *(unsigned int*)(v29 + 360);
					if (!(_DWORD)v30
						|| *(_QWORD*)(v28 + 64) && (*(_BYTE*)(v29 + 264) & 2) != 0
						|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
							+ 24i64))(
								qword_140C659A0,
								v25,
								v30,
								v26,
								0i64,
								0))
					{
						v31 = *(unsigned int*)(*(_QWORD*)(v28 + 112) + 364i64);
						if ((_DWORD)v31
							&& v26
							&& !(*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
								qword_140C659A0,
								v26,
								v31,
								v25,
								0i64,
								0))
						{
							v24 = 281;
						}
					}
					else
					{
						v24 = 151;
					}
				}
				else
				{
					v24 = 4;
				}
			}
			else
			{
				v24 = 30;
			}
		}
		if (!v24 || v24 == 317)
		{
			*(_QWORD*)(a1 + 27880) = v12;
			v39 = -4294966996i64;
			*(_QWORD*)(a1 + 27888) = 0x500000000i64;
			LODWORD(v40) = 9;
			*(_QWORD*)(a1 + 27896) = v39;
			*(_QWORD*)(a1 + 27904) = v40;
			return v24;
		}
	}
	else
	{
		return 4;
	}
	return v24;
}
// 14039B4BC: variable 'v16' is possibly undefined
// 14039B7DC: variable 'v35' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

