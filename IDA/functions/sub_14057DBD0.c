#include "../winhttp.h"

//----- (000000014057DBD0) ----------------------------------------------------
__int64 __fastcall sub_14057DBD0(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // r15
	int* v6; // rax
	unsigned int v7; // r14d
	_QWORD* v8; // r12
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned __int64 v13; // r13
	__int64 v14; // rdx
	int v15; // ebx
	__int64 v16; // r15
	__int64 v17; // rdx
	_QWORD* v18; // rdi
	__int64 v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // r13d
	__int64 v23; // rcx
	_QWORD* v24; // rax
	__int64 v25; // rdx
	float v26; // xmm6_4
	_QWORD* v27; // rax
	__int64 v28; // r10
	unsigned __int64* v29; // rdx
	unsigned __int64 v30; // r8
	__int64 v31; // rax
	__int64* v32; // rax
	__int64 v33; // rbx
	int v34; // ecx
	__int64 v35; // rbx
	_QWORD* v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rbx
	__int64 v39; // rax
	__int64 v40; // r9
	__int64 v41; // rbx
	_QWORD* v42; // rax
	__int64 v43; // rcx
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // r9
	__int64 v47; // rbx
	_QWORD* v48; // rax
	__int64 v49; // rcx
	__int64 v50; // rbx
	__int64 v51; // rax
	__int64 v52; // r9
	int v53; // ebx
	_QWORD* v54; // rax
	int v55; // r10d
	__int64 v56; // r11
	__int64 v57; // rdx
	int* v58; // rax
	_QWORD* v59; // rax
	int v60; // r10d
	unsigned __int16* v61; // r8
	int* v62; // rax
	__int64 v63; // rdx
	__int64 v64; // rdx
	unsigned __int64 v65; // rax
	__int64 v66; // rbx
	int* v67; // rdx
	__int64 v68; // rax
	__int64 v69; // rdx
	__int64 v71; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v72; // [rsp+38h] [rbp-C8h]
	__int64 v73; // [rsp+40h] [rbp-C0h]
	unsigned __int64 v74; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v75)(); // [rsp+58h] [rbp-A8h] BYREF
	int v76; // [rsp+60h] [rbp-A0h]
	_QWORD* v77; // [rsp+68h] [rbp-98h]
	int v78; // [rsp+70h] [rbp-90h]
	__int64 v79; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *v80)(); // [rsp+80h] [rbp-80h] BYREF
	int v81; // [rsp+88h] [rbp-78h]
	__int64 v82; // [rsp+90h] [rbp-70h]
	int v83; // [rsp+98h] [rbp-68h]
	__int64 v84; // [rsp+A0h] [rbp-60h] BYREF
	int v85; // [rsp+A8h] [rbp-58h]
	__int64 v86; // [rsp+B0h] [rbp-50h] BYREF
	int v87; // [rsp+B8h] [rbp-48h]
	__int64 v88; // [rsp+C0h] [rbp-40h] BYREF
	int v89; // [rsp+C8h] [rbp-38h]
	unsigned __int16 v90[40]; // [rsp+D0h] [rbp-30h] BYREF

	v4 = a1;
	v79 = a1;
	v6 = sub_14018B280(168i64, 0);
	v7 = 0;
	if (v6)
		v8 = (_QWORD*)sub_14057AA90((__int64)v6, (_QWORD*)(v4 + 856), v4, a2);
	else
		v8 = 0i64;
	if (*(_DWORD*)(a2 + 16))
	{
		v83 = 1;
		v9 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
		v80 = off_140B569F0;
		v10 = *(_QWORD*)(v9 + 32);
		v82 = v9;
		if (*(_QWORD*)(v10 + 120) >= *(_QWORD*)(v10 + 112))
			sub_14005E2C0(v9);
		v11 = *(_QWORD*)(v9 + 16);
		v12 = sub_14005C1B0(v9, 0, 0);
		*(_DWORD*)(v11 + 8) = 5;
		*(_QWORD*)v11 = v12;
		*(_QWORD*)(v9 + 16) += 16i64;
		v13 = 0i64;
		v15 = sub_1400578C0(v9);
		v81 = v15;
		v74 = 0i64;
		if (*(_DWORD*)(a2 + 20))
		{
			v16 = 0i64;
			while (1)
			{
				v17 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + v16 + 16);
				v90[0] = 0;
				sub_14057ACF0((__int64)v8, v17, v90);
				if (!v8[18])
					break;
			LABEL_38:
				v65 = *(unsigned int*)(a2 + 20);
				++v13;
				v16 += 56i64;
				v74 = v13;
				if (v13 >= v65)
				{
					v9 = v82;
					v15 = v81;
					v4 = v79;
					goto LABEL_40;
				}
			}
			v78 = 1;
			v18 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
			v75 = off_140B569F0;
			v19 = v18[4];
			v77 = v18;
			if (*(_QWORD*)(v19 + 120) >= *(_QWORD*)(v19 + 112))
				sub_14005E2C0((__int64)v18);
			v20 = v18[2];
			v21 = sub_14005C1B0((__int64)v18, 0, 0);
			*(_DWORD*)(v20 + 8) = 5;
			*(_QWORD*)v20 = v21;
			v18[2] += 16i64;
			v22 = sub_1400578C0((__int64)v18);
			v23 = *(_QWORD*)(v18[4] + 160i64);
			v76 = v22;
			v24 = sub_14005C3C0(v23, v22);
			v25 = v18[2];
			*(_QWORD*)v25 = *v24;
			*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
			v18[2] += 16i64;
			sub_1400F0870((__int64)v18, v25, L"strName", v90);
			v18[2] -= 16i64;
			v26 = -*(float*)(*(_QWORD*)(a2 + 24) + v16 + 48);
			v27 = sub_14005C3C0(*(_QWORD*)(v18[4] + 160i64), v22);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			v18[2] += 16i64;
			v29 = (unsigned __int64*)sub_14018F0E0(&v71, L"fOccuredAgoDays")[1];
			if (v29)
			{
				v30 = -1i64;
				do
					++v30;
				while (*((_BYTE*)v29 + v30));
				sub_140058710((__int64)v18, v29, v30);
			}
			else
			{
				*(_DWORD*)(v18[2] + 8i64) = 0;
				v18[2] += 16i64;
			}
			if (v72)
				sub_14018B900(v72, 0);
			v31 = v18[2];
			*(_DWORD*)(v31 + 8) = 3;
			*(double*)v31 = v26;
			v18[2] += 16i64;
			v32 = (__int64*)sub_1400580E0((__int64)v18, -3);
			sub_14005EA50((__int64)v18, v32, (int*)(v18[2] - 32i64), (unsigned int*)(v18[2] - 16i64));
			v18[2] -= 48i64;
			v33 = *(_QWORD*)(a2 + 24);
			v34 = *(_DWORD*)(v33 + v16 + 8);
			if ((unsigned int)(v34 - 1000) > 0x3E7)
			{
				if (v34 == 2000)
				{
					v47 = *(_QWORD*)(v33 + v16 + 32);
					v72 = 1i64;
					v73 = 0i64;
					v48 = (_QWORD*)sub_140059170(v18, 0x18ui64);
					v49 = v72;
					*v48 = v47;
					v48[1] = v49;
					v48[2] = 0i64;
					v50 = v18[4];
					v51 = sub_140062650((__int64)v18, (unsigned __int64*)"Game.Money", 0xAui64);
					v52 = v18[2];
					v84 = v51;
					v85 = 4;
					sub_14005E8E0((__int64)v18, v50 + 160, (int*)&v84, v52);
					v18[2] += 16i64;
					sub_140058BF0((__int64)v18, -2);
					sub_1400FB540((__int64)&v75);
					goto LABEL_36;
				}
				if (v34 >= 100000)
				{
					v53 = (v34 - 100000) % 1000;
					v54 = sub_14005C3C0(*(_QWORD*)(v18[4] + 160i64), v22);
					*(_QWORD*)v56 = *v54;
					*(_DWORD*)(v56 + 8) = *((_DWORD*)v54 + 2);
					v18[2] += 16i64;
					sub_1400F06F0((__int64)v18, v57, L"nTab", v55 + 1);
					v18[2] -= 16i64;
					if (v53)
					{
						if (v53 != 1)
							goto LABEL_37;
						v62 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(*(_QWORD*)(a2 + 24) + v16 + 24), 0i64);
						if ((unsigned int)sub_140415C70(v18, (__int64)v62))
						{
							sub_1400FB540((__int64)&v75);
							v18[2] -= 16i64;
						}
						v59 = sub_14005C3C0(*(_QWORD*)(v18[4] + 160i64), v22);
						v61 = L"nStack";
					}
					else
					{
						v58 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(*(_QWORD*)(a2 + 24) + v16 + 24), 0i64);
						if ((unsigned int)sub_140415C70(v18, (__int64)v58))
						{
							sub_1400FB540((__int64)&v75);
							v18[2] -= 16i64;
						}
						v59 = sub_14005C3C0(*(_QWORD*)(v18[4] + 160i64), v22);
						v61 = L"nStack";
					}
					v63 = v18[2];
					*(_QWORD*)v63 = *v59;
					*(_DWORD*)(v63 + 8) = *((_DWORD*)v59 + 2);
					v18[2] += 16i64;
					sub_1400F06F0((__int64)v18, v63, v61, v60);
					goto LABEL_36;
				}
			}
			else
			{
				if (v34 == 1000)
				{
					v35 = *(_QWORD*)(v33 + v16 + 32);
					v72 = 1i64;
					v73 = 0i64;
					v36 = (_QWORD*)sub_140059170(v18, 0x18ui64);
					v37 = v72;
					*v36 = v35;
					v36[1] = v37;
					v36[2] = 0i64;
					v38 = v18[4];
					v39 = sub_140062650((__int64)v18, (unsigned __int64*)"Game.Money", 0xAui64);
					v40 = v18[2];
					v88 = v39;
					v89 = 4;
					sub_14005E8E0((__int64)v18, v38 + 160, (int*)&v88, v40);
					v18[2] += 16i64;
					sub_140058BF0((__int64)v18, -2);
					sub_1400FB540((__int64)&v75);
				LABEL_36:
					v18[2] -= 16i64;
					goto LABEL_37;
				}
				if (v34 == 1001)
				{
					v41 = *(_QWORD*)(v33 + v16 + 32);
					v72 = 1i64;
					v73 = 0i64;
					v42 = (_QWORD*)sub_140059170(v18, 0x18ui64);
					v43 = v72;
					*v42 = v41;
					v42[1] = v43;
					v42[2] = 0i64;
					v44 = v18[4];
					v45 = sub_140062650((__int64)v18, (unsigned __int64*)"Game.Money", 0xAui64);
					v46 = v18[2];
					v86 = v45;
					v87 = 4;
					sub_14005E8E0((__int64)v18, v44 + 160, (int*)&v86, v46);
					v18[2] += 16i64;
					sub_140058BF0((__int64)v18, -2);
					sub_1400FB540((__int64)&v75);
					goto LABEL_36;
				}
			}
		LABEL_37:
			sub_1400FB1D0((__int64)&v80);
			sub_1400579E0((__int64)v18, v64, v22);
			v13 = v74;
			goto LABEL_38;
		}
	LABEL_40:
		if (!v8[18])
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GuildBankLog", byte_1409EA9FC, v4, v15);
		if (v9)
			sub_1400579E0(v9, v14, v15);
	}
	else
	{
		if (a3)
		{
			sub_140008410(v4 + 824);
			if (*(_DWORD*)(a2 + 20))
			{
				do
				{
					v66 = 56i64 * v7;
					v67 = sub_14058F7E0(v4 + 824, (unsigned __int64*)(v66 + *(_QWORD*)(a2 + 24)));
					v68 = *(_QWORD*)(a2 + 24);
					*(_QWORD*)v67 = *(_QWORD*)(v68 + v66);
					*((_QWORD*)v67 + 1) = *(_QWORD*)(v68 + v66 + 8);
					*((_QWORD*)v67 + 2) = *(_QWORD*)(v68 + v66 + 16);
					*((_QWORD*)v67 + 3) = *(_QWORD*)(v68 + v66 + 24);
					*((_QWORD*)v67 + 4) = *(_QWORD*)(v68 + v66 + 32);
					*((_QWORD*)v67 + 5) = *(_QWORD*)(v68 + v66 + 40);
					*((_QWORD*)v67 + 6) = *(_QWORD*)(v68 + v66 + 48);
					if (v67 != (int*)-56i64)
						sub_1401E82F0((__int64*)v67 + 7, *(float*)(*(_QWORD*)(a2 + 24) + v66 + 48));
					v69 = *(_QWORD*)(a2 + 24);
					if ((unsigned int)(*(_DWORD*)(v69 + v66 + 8) - 3) <= 2)
						sub_14057ACF0((__int64)v8, *(_QWORD*)(v69 + v66 + 16), v90);
					++v7;
				} while (v7 < *(_DWORD*)(a2 + 20));
			}
		}
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GuildEventLogChange", byte_1409EA76C, v4);
	}
	(*(void(__fastcall**)(_QWORD*))(*v8 + 8i64))(v8);
	return 0i64;
}
// 14057DDF9: variable 'v28' is possibly undefined
// 14057E0EF: variable 'v56' is possibly undefined
// 14057E101: variable 'v57' is possibly undefined
// 14057E0E1: variable 'v55' is possibly undefined
// 14057E1F5: variable 'v60' is possibly undefined
// 14057E211: variable 'v64' is possibly undefined
// 14057E298: variable 'v14' is possibly undefined
// 1409EA76C: using guessed type _BYTE byte_1409EA76C[32];
// 1409EA9FC: using guessed type _BYTE byte_1409EA9FC[24];
// 140B1EF38: using guessed type wchar_t aNstack[7];
// 140B1EF68: using guessed type wchar_t aNstack_0[7];
// 140B1EFD8: using guessed type wchar_t aNtab[5];
// 140B1F008: using guessed type wchar_t aFoccuredagoday[16];
// 140B1F028: using guessed type wchar_t aStrname_31[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

