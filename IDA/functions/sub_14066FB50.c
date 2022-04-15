#include "../winhttp.h"

//----- (000000014066FB50) ----------------------------------------------------
void __fastcall sub_14066FB50(__int64 a1, __int64 a2)
{
	__int64 v3; // r15
	_QWORD* v4; // rdi
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // r14
	int v11; // r12d
	__int64 v12; // rdx
	unsigned __int64 v13; // rcx
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // r14
	__int64 v17; // rcx
	__int64 v18; // rbx
	__int64 v19; // rax
	int v20; // eax
	__int64 v21; // rcx
	int v22; // r13d
	__int64 v23; // rax
	int v24; // r14d
	__int64 v25; // r8
	__int64 v26; // rdx
	unsigned __int64 v27; // rax
	unsigned __int64 v28; // rbx
	_QWORD* v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // r9
	__int64 v33; // rbx
	int v34; // r15d
	_QWORD* v35; // rax
	__int64 v36; // rdx
	unsigned __int64 v37; // rbx
	unsigned __int64* v38; // rdx
	unsigned __int64 v39; // r8
	__int64 v40; // rcx
	__int64* v41; // rax
	__int64 v42; // rax
	BOOL v43; // esi
	_QWORD* v44; // rax
	__int64 v45; // r10
	unsigned __int64* v46; // rdx
	_DWORD* v47; // rax
	__int64* v48; // rax
	__int64 v49; // rdx
	__int64 v50; // [rsp+28h] [rbp-49h] BYREF
	__int64 v51; // [rsp+30h] [rbp-41h]
	__int64 v52; // [rsp+38h] [rbp-39h]
	__int64(__fastcall * *v53)(); // [rsp+40h] [rbp-31h] BYREF
	int v54; // [rsp+48h] [rbp-29h]
	__int64 v55; // [rsp+50h] [rbp-21h]
	int v56; // [rsp+58h] [rbp-19h]
	__int64(__fastcall * *v57)(); // [rsp+60h] [rbp-11h] BYREF
	__int64 v58; // [rsp+68h] [rbp-9h]
	_QWORD* v59; // [rsp+70h] [rbp-1h]
	int v60; // [rsp+78h] [rbp+7h]
	__int64(__fastcall * *v61)(); // [rsp+80h] [rbp+Fh] BYREF
	int v62; // [rsp+88h] [rbp+17h]
	__int64 v63; // [rsp+90h] [rbp+1Fh]
	int v64; // [rsp+98h] [rbp+27h]

	if (*(_DWORD*)(a1 + 1336))
	{
		v3 = a1 + 192;
		if (a1 != -192)
		{
			v4 = *(_QWORD**)a1;
			v5 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
			v6 = *(_QWORD*)(v5 + 112);
			v57 = off_140B569F0;
			v59 = v4;
			v60 = 1;
			if (*(_QWORD*)(v5 + 120) >= v6)
				sub_14005E2C0((__int64)v4);
			v7 = v4[2];
			v8 = sub_14005C1B0((__int64)v4, 0, 0);
			*(_DWORD*)(v7 + 8) = 5;
			*(_QWORD*)v7 = v8;
			v4[2] += 16i64;
			v9 = sub_1400578C0((__int64)v4);
			v10 = *(_QWORD*)a1;
			v11 = v9;
			LODWORD(v58) = v9;
			v12 = *(_QWORD*)(v10 + 32);
			v53 = off_140B569F0;
			v56 = 1;
			v13 = *(_QWORD*)(v12 + 112);
			v55 = v10;
			if (*(_QWORD*)(v12 + 120) >= v13)
				sub_14005E2C0(v10);
			v14 = *(_QWORD*)(v10 + 16);
			v15 = sub_14005C1B0(v10, 0, 0);
			*(_DWORD*)(v14 + 8) = 5;
			*(_QWORD*)v14 = v15;
			*(_QWORD*)(v10 + 16) += 16i64;
			v54 = sub_1400578C0(v10);
			if ((unsigned int)sub_140675320(a1, (__int64)&v53))
				sub_1400FB2A0((__int64)&v57, (__int64)L"arMonBuy", v54);
			v16 = *(_QWORD*)a1;
			v61 = off_140B569F0;
			v64 = 1;
			v17 = *(_QWORD*)(v16 + 32);
			v63 = v16;
			if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
				sub_14005E2C0(v16);
			v18 = *(_QWORD*)(v16 + 16);
			v19 = sub_14005C1B0(v16, 0, 0);
			*(_DWORD*)(v18 + 8) = 5;
			*(_QWORD*)v18 = v19;
			*(_QWORD*)(v16 + 16) += 16i64;
			v62 = sub_1400578C0(v16);
			v20 = sub_1406756D0(a1, (__int64)&v61);
			v22 = v62;
			if (v20)
				sub_1400FB2A0((__int64)&v57, (__int64)L"arMonSell", v62);
			v23 = *(_QWORD*)(a1 + 160);
			if (v23)
			{
				v24 = 0;
				v25 = 0i64;
				if (*(_DWORD*)(a1 + 1336))
					v25 = v3;
				if (*(_DWORD*)(a1 + 1344))
					v26 = *(_QWORD*)(a1 + 168);
				else
					v26 = 0i64;
				v27 = sub_1403B54A0(v21, v26, v25, *(float*)(v23 + 132));
				v51 = 1i64;
				v52 = 0i64;
				v28 = v27;
				v29 = (_QWORD*)sub_140059170(v4, 0x18ui64);
				*v29 = v28;
				v29[1] = 1i64;
				v29[2] = 0i64;
				v30 = v4[4];
				v31 = sub_140062650((__int64)v4, (unsigned __int64*)"Game.Money", 0xAui64);
				v32 = v4[2];
				v50 = v31;
				LODWORD(v51) = 4;
				sub_14005E8E0((__int64)v4, v30 + 160, (int*)&v50, v32);
				v4[2] += 16i64;
				sub_140058BF0((__int64)v4, -2);
				sub_1400FB540((__int64)&v57);
				v4[2] -= 16i64;
				v33 = *(_QWORD*)(a1 + 160);
				if ((~(*(_DWORD*)(v33 + 128) >> 3) & 1) != 0 && (int)(*(_DWORD*)(v33 + 236) - sub_14018CDF0()) > 0)
				{
					v34 = *(_DWORD*)(v33 + 236) - sub_14018CDF0();
					if (v34)
					{
						v35 = sub_14005C3C0(*(_QWORD*)(v4[4] + 160i64), v11);
						v36 = v4[2];
						*(_QWORD*)v36 = *v35;
						*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
						v4[2] += 16i64;
						v37 = -1i64;
						v38 = (unsigned __int64*)sub_14018F0E0(&v57, L"nRemainingReturnTimeSeconds")[1];
						if (v38)
						{
							v39 = -1i64;
							do
								++v39;
							while (*((_BYTE*)v38 + v39));
							sub_140058710((__int64)v4, v38, v39);
						}
						else
						{
							*(_DWORD*)(v4[2] + 8i64) = 0;
							v4[2] += 16i64;
						}
						if (v58)
							sub_14018B900(v58, 0);
						v40 = v4[2];
						*(_DWORD*)(v40 + 8) = 3;
						*(double*)v40 = (float)((float)v34 * 0.001);
						v4[2] += 16i64;
						v41 = (__int64*)sub_1400580E0((__int64)v4, -3);
						sub_14005EA50((__int64)v4, v41, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
						v4[2] -= 48i64;
						if (*(_DWORD*)(a1 + 1344))
							v42 = *(_QWORD*)(a1 + 168);
						else
							v42 = 0i64;
						v43 = *(_DWORD*)(v42 + 360)
							&& (*(_DWORD*)(v42 + 56) == 5 && *(__int64*)(v42 + 48) > 0
								|| *(_DWORD*)(v42 + 80) == 5 && *(__int64*)(v42 + 72) > 0);
						v44 = sub_14005C3C0(*(_QWORD*)(v4[4] + 160i64), v11);
						*(_QWORD*)v45 = *v44;
						*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
						v4[2] += 16i64;
						v46 = (unsigned __int64*)sub_14018F0E0(&v57, L"bHasRestockingFee")[1];
						if (v46)
						{
							do
								++v37;
							while (*((_BYTE*)v46 + v37));
							sub_140058710((__int64)v4, v46, v37);
						}
						else
						{
							*(_DWORD*)(v4[2] + 8i64) = 0;
							v4[2] += 16i64;
						}
						if (v58)
							sub_14018B900(v58, 0);
						v47 = (_DWORD*)v4[2];
						LOBYTE(v24) = v43;
						v47[2] = 1;
						*v47 = v24;
						v4[2] += 16i64;
						v48 = (__int64*)sub_1400580E0((__int64)v4, -3);
						sub_14005EA50((__int64)v4, v48, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
						v4[2] -= 48i64;
					}
				}
			}
			sub_1400FB2A0(a2, (__int64)L"tCost", v11);
			if (v63)
				sub_1400579E0(v63, v49, v22);
			if (v55)
				sub_1400579E0(v55, v49, v54);
			sub_1400579E0((__int64)v4, v49, v11);
		}
	}
}
// 14066FD28: variable 'v21' is possibly undefined
// 14066FF35: variable 'v45' is possibly undefined
// 14066FFFA: variable 'v49' is possibly undefined
// 140B2F3A8: using guessed type wchar_t aArmonbuy[9];
// 140B2F600: using guessed type wchar_t aTcost[6];
// 140B2F620: using guessed type wchar_t aNremainingretu[28];
// 140B2F658: using guessed type wchar_t aBhasrestocking[18];
// 140B2F680: using guessed type wchar_t aArmonsell[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

