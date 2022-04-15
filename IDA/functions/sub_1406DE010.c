#include "../winhttp.h"

//----- (00000001406DE010) ----------------------------------------------------
void __fastcall sub_1406DE010(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
	unsigned __int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rcx
	unsigned int v9; // r14d
	unsigned __int64 v10; // r12
	_QWORD* v11; // rax
	__int64 v12; // rbx
	__int64 v13; // r15
	__int64 v14; // r13
	__int64 v15; // rax
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64 v18; // rsi
	int v19; // ecx
	unsigned __int64 v20; // r15
	__int64 v21; // r14
	int v22; // edx
	__int64* v23; // rax
	__int64 v24; // rbx
	__int128 v25; // xmm1
	__int128 v26; // xmm0
	int v27; // eax
	int v28; // r13d
	__int128 v29; // xmm6
	int v30; // r13d
	__int64 v31; // rcx
	__int128 v32; // xmm0
	__int128 v33; // xmm7
	__int128 v34; // xmm0
	__int64 v35; // rcx
	__int64 v36; // rdx
	int v37; // eax
	__int64 v38; // rcx
	__int64 v39; // rdx
	int v40; // eax
	__int64 v41; // rcx
	_QWORD* v42; // rax
	_QWORD* v43; // rdx
	_QWORD* v44; // rdx
	int v45; // ecx
	unsigned int v46; // eax
	__int64 v47; // rbx
	__int128 v48; // xmm0
	__int128 v49; // xmm1
	__int64 v50; // rcx
	__int128 v51; // xmm6
	int v52; // edi
	__int128 v53; // xmm0
	__int128 v54; // xmm1
	__int128 v55; // xmm0
	unsigned __int64 v56; // rax
	int v57; // eax
	__int64 v58; // rcx
	_QWORD* v59; // rax
	_QWORD* v60; // rdx
	_QWORD* v61; // rdx
	__int64 v62; // rdi
	__int64 v63; // r14
	__int64* v64; // rbx
	__int64 v65; // rcx
	__int64 v66; // rax
	__int64 v67; // [rsp+38h] [rbp-D0h] BYREF
	int v68; // [rsp+40h] [rbp-C8h]
	unsigned int v69; // [rsp+44h] [rbp-C4h] BYREF
	int v70; // [rsp+48h] [rbp-C0h]
	__int64 v71; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v72; // [rsp+58h] [rbp-B0h]
	__int64 v73; // [rsp+60h] [rbp-A8h]
	__int64 v74; // [rsp+68h] [rbp-A0h]
	__int64 v75; // [rsp+70h] [rbp-98h]
	__int128 v76; // [rsp+78h] [rbp-90h]
	__int128 v77; // [rsp+88h] [rbp-80h]
	__int128 v78; // [rsp+98h] [rbp-70h]
	__int128 v79; // [rsp+A8h] [rbp-60h]
	__int128 v80; // [rsp+B8h] [rbp-50h]
	int v81; // [rsp+C8h] [rbp-40h]
	__int128 v82; // [rsp+E8h] [rbp-20h]
	__int128 v83; // [rsp+F8h] [rbp-10h]
	__int128 v84; // [rsp+108h] [rbp+0h]
	__int128 v85; // [rsp+118h] [rbp+10h]

	if ((*(_BYTE*)(a1 + 28) & 1) != 0)
	{
		sub_140503600(*(_QWORD*)(a1 + 1176), a2, a3, a4, a5);
		v6 = *(_QWORD*)(a1 + 1024);
		v7 = *(_QWORD*)(a1 + 1176);
		v72 = 0i64;
		v73 = 0i64;
		v74 = 0i64;
		sub_140505590(v7, (__int64)&v71, v6);
		sub_1400C6D00(a1);
		v75 = a1 + 1040;
		sub_1407E4830((int*)(a1 + 1040), 0i64, 0x80ui64);
		v8 = v73 - v72;
		*(_QWORD*)(a1 + 1192) = 0i64;
		v9 = 0;
		v10 = v8 / 88;
		if (v8 / 88)
		{
			while (1)
			{
				v11 = sub_1400F52E0(
					*(_QWORD*)(a1 + 32) + 2688i64,
					(__m128i*)L"UI\\Controls\\CashInput.xml",
					(int*)L"Denomination",
					0i64,
					a1,
					-2);
				v12 = (__int64)v11;
				if (!v11)
					break;
				sub_1400C7140(v11, *(_QWORD**)(a1 + 48), 1u);
				v13 = sub_1400D3830(v12 + 552, L"Icon");
				if (!v13)
				{
					v66 = 0x141E384F0i64;
					goto LABEL_49;
				}
				v14 = v9;
				sub_1400D2D60(v13, *(__m128i**)(88i64 * v9 + v72 + 24));
				if (!sub_1400D3830(v12 + 552, L"Input"))
				{
					v66 = 0x141E38470i64;
					goto LABEL_49;
				}
				v15 = sub_1400D3830(v12 + 552, L"Alert");
				if (!v15)
				{
					v66 = 0x141E386A0i64;
				LABEL_49:
					v67 = v66;
					sub_1401A3130(13, 1, &v67);
					sub_1400C6B20(v12);
					goto LABEL_38;
				}
				++v9;
				v17 = 32i64 * (unsigned int)v14;
				*(_QWORD*)(v17 + a1 + 1064) = v15;
				*(_QWORD*)(v17 + a1 + 1040) = v12;
				*(_QWORD*)(v17 + a1 + 1048) = v13;
				*(_QWORD*)(32 * (v14 + 33) + a1) = v16;
				if (v9 >= v10)
					goto LABEL_8;
			}
			v67 = 0x141E385A0i64;
			sub_1401A3130(13, 1, &v67);
		}
		else
		{
		LABEL_8:
			v18 = 64i64;
			v19 = 0;
			v20 = 0i64;
			v21 = 4i64;
			if (v10)
			{
				v22 = 0;
				v23 = (__int64*)(a1 + 32 * v10 + 1008);
				v67 = (__int64)v23;
				do
				{
					v24 = *v23;
					v25 = *(_OWORD*)(*v23 + 96);
					v26 = *(_OWORD*)(*v23 + 80);
					v27 = *(_DWORD*)(*v23 + 724) - *(_DWORD*)(*v23 + 716);
					v28 = *(_DWORD*)(v24 + 144);
					v29 = *(_OWORD*)(v24 + 64);
					v76 = v29;
					v82 = v26;
					v30 = v28 | 0x300;
					v70 = v27 + v19;
					v31 = *(_QWORD*)(v24 + 440);
					v83 = v25;
					v78 = v25;
					v32 = *(_OWORD*)(v24 + 112);
					v33 = *(_OWORD*)(v24 + 80);
					v81 = v30;
					v84 = v32;
					v77 = v33;
					v68 = -v70;
					v85 = *(_OWORD*)(v24 + 128);
					v34 = *(_OWORD*)(v24 + 112);
					DWORD2(v85) = v22;
					LODWORD(v85) = -v70;
					v79 = v34;
					v80 = v85;
					if (v31)
					{
						sub_14018B900(v31, 0);
						*(_QWORD*)(v24 + 440) = 0i64;
					}
					*(_OWORD*)(v24 + 64) = v29;
					*(_OWORD*)(v24 + 80) = v33;
					v35 = 48i64;
					*(_OWORD*)(v24 + 96) = v25;
					v36 = 4i64;
					do
					{
						v37 = *(_DWORD*)((char*)&v76 + v35);
						v35 += 4i64;
						*(_DWORD*)(v24 + v35 + 60) = v37;
						--v36;
					} while (v36);
					v38 = 64i64;
					v39 = 4i64;
					do
					{
						v40 = *(_DWORD*)((char*)&v76 + v38);
						v38 += 4i64;
						*(_DWORD*)(v24 + v38 + 60) = v40;
						--v39;
					} while (v39);
					*(_DWORD*)(v24 + 144) = v30;
					if ((*(_BYTE*)(v24 + 392) & 1) == 0)
					{
						v41 = *(_QWORD*)(v24 + 16);
						*(_BYTE*)(v24 + 29) &= ~0x80u;
						*(_BYTE*)(v24 + 30) &= ~1u;
						if (v41 && (*(_BYTE*)(v41 + 30) & 1) != 0)
							sub_1400CB660(v41);
						*(_DWORD*)(v24 + 392) |= 3u;
						*(_QWORD*)(v24 + 384) = -1i64;
						v42 = *(_QWORD**)(v24 + 560);
						v43 = (_QWORD*)*v42;
						if ((_QWORD*)*v42 != v42)
						{
							do
							{
								sub_1400CB690(v43[2]);
								v43 = (_QWORD*)*v44;
							} while (v43 != *(_QWORD**)(v24 + 560));
						}
					}
					sub_1400CB960((char*)v24);
					v45 = 0x7FFFFFFF;
					v46 = 0x80000000;
					if ((_DWORD)v20 != 0x7FFFFFFF)
						v45 = v20;
					if (v45 != 0x80000000)
						v46 = v45;
					v69 = v46;
					sub_1400C82C0(a1, a1 + 1184, v24, &v69);
					v19 = v70;
					v22 = v68;
					v23 = (__int64*)(v67 - 32);
					++v20;
					v67 -= 32i64;
				} while (v20 < v10);
			}
			v47 = *(_QWORD*)v75;
			v48 = *(_OWORD*)(*(_QWORD*)v75 + 80i64);
			v49 = *(_OWORD*)(*(_QWORD*)v75 + 96i64);
			v50 = *(_QWORD*)(*(_QWORD*)v75 + 440i64);
			v51 = *(_OWORD*)(*(_QWORD*)v75 + 64i64);
			v52 = *(_DWORD*)(*(_QWORD*)v75 + 144i64) | 0x300;
			v76 = v51;
			v81 = v52;
			v82 = v48;
			v83 = v49;
			v84 = *(_OWORD*)(v47 + 112);
			v53 = *(_OWORD*)(v47 + 128);
			LODWORD(v84) = 0;
			v54 = *(_OWORD*)(v47 + 96);
			v85 = v53;
			LODWORD(v85) = 0;
			v55 = *(_OWORD*)(v47 + 80);
			v78 = v54;
			v77 = v55;
			v80 = v85;
			v79 = v84;
			if (v50)
			{
				sub_14018B900(v50, 0);
				*(_QWORD*)(v47 + 440) = 0i64;
			}
			v56 = v77;
			*(_OWORD*)(v47 + 64) = v51;
			*(_OWORD*)(v47 + 80) = __PAIR128__(*((unsigned __int64*)&v77 + 1), v56);
			*(_OWORD*)(v47 + 96) = v78;
			*(_OWORD*)(v47 + 112) = v79;
			do
			{
				v57 = *(_DWORD*)((char*)&v76 + v18);
				v18 += 4i64;
				*(_DWORD*)(v47 + v18 + 60) = v57;
				--v21;
			} while (v21);
			*(_DWORD*)(v47 + 144) = v52;
			if ((*(_BYTE*)(v47 + 392) & 1) == 0)
			{
				v58 = *(_QWORD*)(v47 + 16);
				*(_BYTE*)(v47 + 29) &= ~0x80u;
				*(_BYTE*)(v47 + 30) &= ~1u;
				if (v58 && (*(_BYTE*)(v58 + 30) & 1) != 0)
					sub_1400CB660(v58);
				*(_DWORD*)(v47 + 392) |= 3u;
				*(_QWORD*)(v47 + 384) = -1i64;
				v59 = *(_QWORD**)(v47 + 560);
				v60 = (_QWORD*)*v59;
				if ((_QWORD*)*v59 != v59)
				{
					do
					{
						sub_1400CB690(v60[2]);
						v60 = (_QWORD*)*v61;
					} while (v60 != *(_QWORD**)(v47 + 560));
				}
			}
			sub_1400CB960((char*)v47);
		}
	LABEL_38:
		v62 = v72;
		v63 = v73;
		if (v72 != v73)
		{
			v64 = (__int64*)(v72 + 24);
			do
			{
				v65 = v64[5];
				if (v65)
					sub_14018B900(v65, 0);
				if (*v64)
					sub_14018B900(*v64, 0);
				v64 += 11;
			} while (v64 - 3 != (__int64*)v63);
		}
		if (v62)
			sub_14018B900(v62, 0);
	}
}
// 1406DE1DE: variable 'v16' is possibly undefined
// 1406DE389: variable 'v44' is possibly undefined
// 1406DE539: variable 'v61' is possibly undefined
// 140B3DE98: using guessed type wchar_t aInput_1[6];
// 140B3DF18: using guessed type wchar_t aIcon_10[5];
// 140B3DF28: using guessed type wchar_t aUiControlsCash[26];
// 140B3DFB8: using guessed type wchar_t aDenomination_0[13];
// 140B3E0C8: using guessed type wchar_t aAlert[6];

