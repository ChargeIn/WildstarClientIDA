#include "../winhttp.h"

//----- (000000014039AC90) ----------------------------------------------------
__int64 __fastcall sub_14039AC90(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
	unsigned int v8; // r12d
	__int64 v9; // r13
	__int64 v10; // r14
	unsigned int v11; // edi
	__int64 v12; // rax
	__int64 v13; // rsi
	int v14; // eax
	__int64 v15; // rax
	int v16; // eax
	bool v17; // zf
	int v18; // eax
	__int64 v19; // rax
	__int64 v20; // rcx
	int v21; // eax
	int v22; // edx
	__int64 v23; // rax
	BOOL v24; // r9d
	__int64 v25; // rcx
	__int64 v26; // rsi
	int v27; // eax
	int v28; // edi
	__int64 v29; // r12
	__int64 v30; // rax
	__int64 v31; // rsi
	__int64 v32; // rax
	__int64 v33; // r8
	__int64 v34; // r8
	unsigned int v35; // r10d
	__int64 v36; // rcx
	int v37; // edx
	unsigned int v38; // eax
	unsigned int v39; // r10d
	int v40; // eax
	__int64 v41; // rcx
	int v42; // edx
	int v43; // edx
	int v44; // eax
	int v45; // eax
	int v46; // eax
	__int64 v47; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v48; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * v49)(); // [rsp+50h] [rbp-B0h]
	__int64 v50; // [rsp+58h] [rbp-A8h]
	int v51; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v52; // [rsp+68h] [rbp-98h] BYREF
	int v53[7]; // [rsp+70h] [rbp-90h] BYREF
	int v54; // [rsp+8Ch] [rbp-74h]
	int v55; // [rsp+94h] [rbp-6Ch]
	int v56; // [rsp+C8h] [rbp-38h]
	__int64 v57; // [rsp+188h] [rbp+88h] BYREF
	int v58; // [rsp+190h] [rbp+90h]
	int v59; // [rsp+198h] [rbp+98h]

	v59 = a4;
	v58 = a3;
	if (!a2)
		return 30i64;
	v8 = a5;
	v9 = sub_1403ACD90(qword_140C65B70, a5, a2);
	if (!v9)
		return 22i64;
	v10 = 0i64;
	v11 = 0;
	sub_1407E4830(v53, 0i64, 0xC8ui64);
	v54 = *(_DWORD*)(a2 + 8);
	v53[0] = v8;
	v53[1] = v8;
	v56 = 1;
	v12 = sub_14055BDC0(a1, a2, v9, 0, 0);
	v13 = v12;
	if (v12)
		v14 = *(_DWORD*)(v12 + 8);
	else
		v14 = 0;
	v51 = v14;
	if (*(_DWORD*)(*(_QWORD*)(v9 + 112) + 124i64) != 4)
	{
	LABEL_13:
		v17 = *(_DWORD*)(a2 + 128) == 24;
		LODWORD(v57) = 0;
		v52 = 0i64;
		if (!v17)
		{
			if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
			{
				sub_1403A2550(a1);
				v18 = v59;
				*(_DWORD*)(a1 + 26296) = v58;
				*(_DWORD*)(a1 + 26272) = v18;
				*(_DWORD*)(a1 + 26184) = 3;
				*(_DWORD*)(a1 + 26192) = v8;
				LODWORD(v47) = 0;
				v19 = sub_14001C280(a1);
				v20 = *(_QWORD*)(a1 + 25744);
				v48 = v19;
				v50 = 0i64;
				v49 = sub_14039EA90;
				v21 = sub_1404720D0(v20);
				sub_140195960(a1 + 26200, v21, (__int64)&v47, 4);
				return 2i64;
			}
			v38 = sub_1403988D0(a1, (unsigned int)v53, v9, 0, (__int64)&v51, (__int64)&v52, (__int64)&v57);
			v11 = v38;
			if (v38 && v38 != 317)
			{
				if (v38 == 105)
				{
					if ((int)sub_140559650(a1 + 28848, a2, v13, v59, v8, v58) >= 0)
						v11 = 2;
				}
				else if ((*(_DWORD*)(*(_QWORD*)(v9 + 112) + 268i64) & 0x4000000) == 0 || ((v38 - 91) & 0xFFFFFFF7) != 0)
				{
					if ((_DWORD)v57)
					{
						v43 = v58;
						v44 = v59;
						*(_DWORD*)(a1 + 26184) = 3;
						*(_DWORD*)(a1 + 26192) = v8;
						*(_DWORD*)(a1 + 26296) = v43;
						*(_DWORD*)(a1 + 26272) = v44;
						sub_14039E400(a1);
					}
				}
				else
				{
					v48 = 0x600000000i64;
					if (a2 == *(_QWORD*)(a1 + 120))
					{
						HIDWORD(v48) = 2;
					}
					else if (a2 == sub_14039DF50(a1))
					{
						HIDWORD(v48) = 4;
					}
					else if (sub_1403C0960(a1, *(_DWORD*)(a2 + 8)))
					{
						v48 = v39 | 0x300000000i64;
					}
					v40 = v59;
					v41 = v48;
					v42 = v58;
					*(_QWORD*)(a1 + 27880) = v9;
					HIDWORD(v57) = v40;
					*(_QWORD*)(a1 + 27888) = v41;
					LODWORD(v57) = 4;
					LODWORD(v50) = v42;
					*(_QWORD*)(a1 + 27896) = v57;
					v11 = 3;
					*(_QWORD*)(a1 + 27904) = v50;
				}
				sub_1403B5250(v11);
				sub_1400035B0();
				return v11;
			}
			v10 = v52;
		}
		v47 = 0i64;
		v48 = 0i64;
		v49 = 0i64;
		LODWORD(v50) = 0;
		v45 = *(_DWORD*)(v10 + 96);
		LODWORD(v48) = v58;
		LODWORD(v47) = v45;
		BYTE4(v47) = v59;
		if (v13)
		{
			HIDWORD(v48) = *(_DWORD*)(v13 + 8);
			v49 = *(__int64(__fastcall**)())(v13 + 4576);
			v46 = *(_DWORD*)(v13 + 4584);
		}
		else
		{
			v49 = *(__int64(__fastcall**)())(a1 + 27920);
			v46 = *(_DWORD*)(a1 + 27928);
		}
		LODWORD(v50) = v46;
		sub_1403F4900(a1, 0x96u, (__int64)&v47);
		return v11;
	}
	v15 = *(_QWORD*)(a1 + 27880);
	if (v15)
	{
		v16 = *(_DWORD*)(*(_QWORD*)(v15 + 112) + 124i64);
		if (v16 == 4 || (unsigned int)(v16 - 7) <= 1)
		{
			sub_1403A1510(a1);
			goto LABEL_13;
		}
	}
	v22 = v53[0];
	v23 = *(_QWORD*)(a1 + 120);
	if (!v53[0])
		goto LABEL_55;
	if (!v23)
		goto LABEL_82;
	v24 = *(_QWORD*)(qword_140C65898 + 120) == v23 || *(_QWORD*)(qword_140C65898 + 25744) == *(_QWORD*)(a1 + 120);
	v25 = 0i64;
	if (v24)
		v25 = qword_140C65898;
	if (!v25 || !sub_1405A5B90(v25, v53[0]))
	{
	LABEL_82:
		if (!sub_1407A0FD0(qword_140C65B70, v22))
		{
		LABEL_55:
			v28 = 4;
		LABEL_56:
			sub_1403A12A0(a1, v28, v9, 0);
			return 0i64;
		}
	}
	if (v13)
		v55 = *(_DWORD*)(v13 + 8);
	v26 = qword_140C65B70;
	v27 = sub_1403AE8C0(qword_140C65B70, (__int64)v53, 0i64, 0i64, qword_140C659A0, 1);
	v28 = v27;
	if (v27)
	{
		if (v27 == 317)
			v28 = 317;
	}
	else
	{
		v29 = sub_1403D90D0(qword_140C65898, v54);
		v57 = sub_1403D90D0(qword_140C65898, v55);
		if (v29)
		{
			v30 = sub_1403ACD90(v26, v53[0], v29);
			v31 = v30;
			if (v30)
			{
				v32 = *(_QWORD*)(v30 + 112);
				v33 = *(unsigned int*)(v32 + 360);
				if (!(_DWORD)v33
					|| *(_QWORD*)(v31 + 64) && (*(_BYTE*)(v32 + 264) & 2) != 0
					|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							v29,
							v33,
							v57,
							0i64,
							0))
				{
					v34 = *(unsigned int*)(*(_QWORD*)(v31 + 112) + 364i64);
					if ((_DWORD)v34
						&& v57
						&& !(*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
							qword_140C659A0,
							v57,
							v34,
							v29,
							0i64,
							0))
					{
						v28 = 281;
					}
				}
				else
				{
					v28 = 151;
				}
			}
			else
			{
				v28 = 4;
			}
		}
		else
		{
			v28 = 30;
		}
	}
	if (v28 && v28 != 317)
		goto LABEL_56;
	v48 = 0x600000000i64;
	if (a2 == *(_QWORD*)(a1 + 120))
	{
		HIDWORD(v48) = 2;
	}
	else if (a2 == sub_14039DF50(a1))
	{
		HIDWORD(v48) = 4;
	}
	else if (sub_1403C0960(a1, *(_DWORD*)(a2 + 8)))
	{
		v48 = v35 | 0x300000000i64;
	}
	v36 = v48;
	v37 = v58;
	HIDWORD(v57) = v59;
	*(_QWORD*)(a1 + 27880) = v9;
	*(_QWORD*)(a1 + 27888) = v36;
	LODWORD(v57) = 4;
	LODWORD(v50) = v37;
	*(_QWORD*)(a1 + 27896) = v57;
	*(_QWORD*)(a1 + 27904) = v50;
	return 0i64;
}
// 14039AEAF: variable 'v22' is possibly undefined
// 14039B059: variable 'v35' is possibly undefined
// 14039B1C4: variable 'v39' is possibly undefined
// 1403988D0: using guessed type __int64 __fastcall sub_1403988D0(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64);
// 14039EA90: using guessed type __int64 __fastcall sub_14039EA90();
// 14055BDC0: using guessed type __int64 __fastcall sub_14055BDC0(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

