#include "../winhttp.h"

//----- (0000000140766370) ----------------------------------------------------
__int64 __fastcall sub_140766370(_QWORD* a1)
{
	__int64 v3; // rax
	_QWORD* v4; // r14
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // r15
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // ebx
	unsigned __int64 v15; // rsi
	int* v16; // r15
	__int64 v17; // rdx
	unsigned __int64 v18; // rcx
	__int64 v19; // rbx
	__int64 v20; // rax
	int v21; // ebx
	float v22; // xmm6_4
	_QWORD* v23; // rax
	__int64 v24; // rdx
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	__int64 v27; // rax
	__int64* v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rdx
	__int64* v31; // r15
	__int64 v32; // rcx
	__int64 v33; // rsi
	unsigned __int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	int v37; // ebx
	unsigned __int64 v38; // r13
	__int64 v39; // r14
	__int64 v40; // rax
	__int64 v41; // rcx
	__int64 v42; // r15
	unsigned __int64 v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	int v46; // eax
	__int64 v47; // rdx
	int v48; // esi
	__int64 v49; // rax
	__int64 v50; // r8
	_QWORD* v51; // rax
	__int64 v52; // rcx
	__int64 v53; // rcx
	__int64 v54; // rbx
	__int64 v55; // rax
	__int64 v56; // r9
	float v57; // xmm6_4
	_QWORD* v58; // rax
	__int64 v59; // r10
	unsigned __int64* v60; // rdx
	unsigned __int64 v61; // r8
	__int64 v62; // rax
	__int64* v63; // rax
	__int64 v64; // rdx
	__int64 v65; // rdx
	_QWORD* v66; // rax
	__int64 v67; // rdx
	int v68; // r8d
	__int64(__fastcall * *v69)(); // [rsp+20h] [rbp-89h] BYREF
	__int64 v70; // [rsp+28h] [rbp-81h]
	_QWORD* v71; // [rsp+30h] [rbp-79h]
	int v72; // [rsp+38h] [rbp-71h]
	__int64(__fastcall * *v73)(); // [rsp+40h] [rbp-69h] BYREF
	int v74; // [rsp+48h] [rbp-61h]
	_QWORD* v75; // [rsp+50h] [rbp-59h]
	int v76; // [rsp+58h] [rbp-51h]
	__int64(__fastcall * *v77)(); // [rsp+60h] [rbp-49h] BYREF
	__int64 v78; // [rsp+68h] [rbp-41h]
	_QWORD* v79; // [rsp+70h] [rbp-39h]
	int v80; // [rsp+78h] [rbp-31h]
	__int64(__fastcall * *v81)(); // [rsp+80h] [rbp-29h] BYREF
	int v82; // [rsp+88h] [rbp-21h]
	_QWORD* v83; // [rsp+90h] [rbp-19h]
	int v84; // [rsp+98h] [rbp-11h]
	__int64 v85; // [rsp+A0h] [rbp-9h] BYREF
	int v86; // [rsp+A8h] [rbp-1h]
	__int64* v87; // [rsp+118h] [rbp+6Fh]

	if (qword_140C65A48)
	{
		v3 = *(_QWORD*)(qword_140C65A48 + 200);
		v4 = (_QWORD*)(v3 + 1504);
		if (v3)
		{
			v87 = (__int64*)(v3 + 1520);
		}
		else
		{
			v4 = 0i64;
			v87 = 0i64;
		}
		v83 = a1;
		v5 = a1[4];
		v6 = *(_QWORD*)(v5 + 112);
		v81 = off_140B569F0;
		v84 = 1;
		if (*(_QWORD*)(v5 + 120) >= v6)
			sub_14005E2C0((__int64)a1);
		v7 = a1[2];
		v8 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		a1[2] += 16i64;
		v82 = sub_1400578C0((__int64)a1);
		if (v4 && v4[1])
		{
			v9 = a1[4];
			v69 = off_140B569F0;
			v10 = (__int64)a1;
			v11 = *(_QWORD*)(v9 + 112);
			v71 = a1;
			v72 = 1;
			if (*(_QWORD*)(v9 + 120) >= v11)
				sub_14005E2C0((__int64)a1);
			v12 = a1[2];
			v13 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			a1[2] += 16i64;
			v14 = sub_1400578C0((__int64)a1);
			LODWORD(v70) = v14;
			v15 = 0i64;
			if (v4[1])
			{
				do
				{
					v16 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(*v4 + 8 * v15), 0i64);
					if (v16)
					{
						v17 = a1[4];
						v73 = off_140B569F0;
						v75 = a1;
						v18 = *(_QWORD*)(v17 + 112);
						v76 = 1;
						if (*(_QWORD*)(v17 + 120) >= v18)
							sub_14005E2C0((__int64)a1);
						v19 = a1[2];
						v20 = sub_14005C1B0((__int64)a1, 0, 0);
						*(_DWORD*)(v19 + 8) = 5;
						*(_QWORD*)v19 = v20;
						a1[2] += 16i64;
						v21 = sub_1400578C0((__int64)a1);
						v74 = v21;
						if ((unsigned int)sub_140415C70(a1, (__int64)v16))
						{
							sub_1400FB540((__int64)&v73);
							a1[2] -= 16i64;
						}
						v22 = *(float*)(*v4 + 8 * v15 + 4);
						if (v22 >= 0.0)
						{
							v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v21);
							v24 = a1[2];
							*(_QWORD*)v24 = *v23;
							*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
							a1[2] += 16i64;
							v25 = (unsigned __int64*)sub_14018F0E0(&v77, L"fProbability")[1];
							if (v25)
							{
								v26 = -1i64;
								do
									++v26;
								while (*((_BYTE*)v25 + v26));
								sub_140058710((__int64)a1, v25, v26);
							}
							else
							{
								*(_DWORD*)(a1[2] + 8i64) = 0;
								a1[2] += 16i64;
							}
							if (v78)
								sub_14018B900(v78, 0);
							v27 = a1[2];
							*(_DWORD*)(v27 + 8) = 3;
							*(double*)v27 = (float)(v22 * 100.0);
							a1[2] += 16i64;
							v28 = (__int64*)sub_1400580E0((__int64)a1, -3);
							sub_14005EA50((__int64)a1, v28, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
							a1[2] -= 48i64;
						}
						sub_1400FB1D0((__int64)&v69);
						sub_1400579E0((__int64)a1, v29, v21);
					}
					++v15;
				} while (v15 < v4[1]);
				v10 = (__int64)v71;
				v14 = v70;
			}
			sub_1400FB2A0((__int64)&v81, (__int64)L"arItems", v14);
			if (v10)
				sub_1400579E0(v10, v30, v14);
		}
		v31 = v87;
		if (v87 && v87[1])
		{
			v32 = a1[4];
			v73 = off_140B569F0;
			v33 = (__int64)a1;
			v34 = *(_QWORD*)(v32 + 112);
			v75 = a1;
			v76 = 1;
			if (*(_QWORD*)(v32 + 120) >= v34)
				sub_14005E2C0((__int64)a1);
			v35 = a1[2];
			v36 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v35 + 8) = 5;
			*(_QWORD*)v35 = v36;
			a1[2] += 16i64;
			v37 = sub_1400578C0((__int64)a1);
			v74 = v37;
			v38 = 0i64;
			if (v87[1])
			{
				v39 = 0i64;
				do
				{
					v40 = *v31;
					v41 = a1[4];
					v70 = 15i64;
					v42 = *(unsigned int*)(v40 + v39 + 4);
					LODWORD(v40) = *(_DWORD*)(v40 + v39);
					LODWORD(v71) = 0;
					HIDWORD(v71) = v40;
					v79 = a1;
					v77 = off_140B569F0;
					v43 = *(_QWORD*)(v41 + 112);
					v80 = 1;
					if (*(_QWORD*)(v41 + 120) >= v43)
						sub_14005E2C0((__int64)a1);
					v44 = a1[2];
					v45 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v44 + 8) = 5;
					*(_QWORD*)v44 = v45;
					a1[2] += 16i64;
					v46 = sub_1400578C0((__int64)a1);
					v47 = a1[4];
					v48 = v46;
					LODWORD(v78) = v46;
					if (*(_QWORD*)(v47 + 120) >= *(_QWORD*)(v47 + 112))
						sub_14005E2C0((__int64)a1);
					v49 = a1[5];
					if (v49 == a1[10])
						v50 = a1[15];
					else
						v50 = *(_QWORD*)(**(_QWORD**)(v49 + 8) + 24i64);
					v51 = (_QWORD*)sub_1400627D0((__int64)a1, 0x18ui64, v50);
					v52 = a1[2];
					*(_QWORD*)v52 = v51;
					*(_DWORD*)(v52 + 8) = 7;
					a1[2] += 16i64;
					v53 = v70;
					v51[6] = v42;
					v51[7] = v53;
					v51[8] = v71;
					v54 = a1[4];
					v55 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
					v56 = a1[2];
					v85 = v55;
					v86 = 4;
					sub_14005E8E0((__int64)a1, v54 + 160, (int*)&v85, v56);
					a1[2] += 16i64;
					sub_140058BF0((__int64)a1, -2);
					sub_1400FB540((__int64)&v77);
					a1[2] -= 16i64;
					v31 = v87;
					v57 = *(float*)(*v87 + v39 + 8);
					if (v57 >= 0.0)
					{
						v58 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v48);
						*(_QWORD*)v59 = *v58;
						*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
						a1[2] += 16i64;
						v60 = (unsigned __int64*)sub_14018F0E0(&v77, L"fProbability")[1];
						if (v60)
						{
							v61 = -1i64;
							do
								++v61;
							while (*((_BYTE*)v60 + v61));
							sub_140058710((__int64)a1, v60, v61);
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
							a1[2] += 16i64;
						}
						if (v78)
							sub_14018B900(v78, 0);
						v62 = a1[2];
						*(_DWORD*)(v62 + 8) = 3;
						*(double*)v62 = (float)(v57 * 100.0);
						a1[2] += 16i64;
						v63 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v63, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 48i64;
					}
					sub_1400FB1D0((__int64)&v73);
					sub_1400579E0((__int64)a1, v64, v48);
					++v38;
					v39 += 12i64;
				} while (v38 < v87[1]);
				v33 = (__int64)v75;
				v37 = v74;
			}
			sub_1400FB2A0((__int64)&v81, (__int64)L"arAccountCurrencies", v37);
			if (v33)
				sub_1400579E0(v33, v65, v37);
		}
		v66 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v82);
		v67 = a1[2];
		v68 = v82;
		*(_QWORD*)v67 = *v66;
		*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v67, v68);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14076667B: variable 'v29' is possibly undefined
// 1407666B3: variable 'v30' is possibly undefined
// 1407668B5: variable 'v59' is possibly undefined
// 14076696A: variable 'v64' is possibly undefined
// 1407669A5: variable 'v65' is possibly undefined
// 140B4DF20: using guessed type wchar_t aAraccountcurre[20];
// 140B4DF48: using guessed type wchar_t aFprobability_0[13];
// 140B4DF80: using guessed type wchar_t aAritems_0[8];
// 140B4DF90: using guessed type wchar_t aFprobability[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65A48: using guessed type __int64 qword_140C65A48;

