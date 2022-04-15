#include "../winhttp.h"

//----- (000000014065B2B0) ----------------------------------------------------
__int64 __fastcall sub_14065B2B0(__int64 a1)
{
	_QWORD* v1; // rdi
	int* v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // r12
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // r10d
	unsigned __int64 v9; // r13
	__int64 v10; // rbx
	__int64 v11; // r14
	int* v12; // r15
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // rcx
	int v19; // r12d
	_QWORD* v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rdx
	int v23; // r11d
	_QWORD* v24; // rax
	__int64 v25; // r11
	__int64 v26; // rdx
	__int64 v27; // rbx
	_QWORD* v28; // rax
	__int64 v29; // rdx
	int v30; // r11d
	_QWORD* v31; // rax
	__int64 v32; // r11
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v35; // r11
	unsigned __int64* v36; // rdx
	unsigned __int64 v37; // r8
	_DWORD* v38; // rax
	__int64* v39; // rax
	unsigned int v40; // ecx
	char v41; // al
	char v42; // al
	char v43; // al
	char v44; // al
	char v45; // al
	char v46; // al
	char v47; // al
	char v48; // al
	unsigned __int64 v49; // rcx
	__int16 v50; // ax
	unsigned __int64 v51; // rax
	unsigned __int64 v52; // rax
	__int64* v53; // rax
	unsigned int v54; // eax
	__int64 v55; // rax
	int* v56; // rax
	int* v57; // rdx
	__int64 v58; // rcx
	__int128 v59; // xmm0
	__int128 v60; // xmm1
	__int128 v61; // xmm0
	__int128 v62; // xmm1
	__int128 v63; // xmm0
	__int128 v64; // xmm1
	__int128 v65; // xmm0
	__int128 v66; // xmm1
	__int128 v67; // xmm1
	__int64 v68; // rcx
	__int128 v69; // xmm0
	_QWORD* v70; // rbx
	__int64 v71; // rcx
	_QWORD* v72; // rax
	__int64 v73; // rcx
	__int64 v74; // rdx
	unsigned __int16* v75; // r11
	int* v76; // rcx
	__int64 v77; // rax
	int* v79; // rax
	__int64 v80; // r15
	int v81; // ebx
	__int64 v82; // rax
	_QWORD* v83; // rax
	__int64 v84; // rcx
	__int64 v85; // rdx
	unsigned __int16* v86; // r11
	__int64 v87; // rcx
	_QWORD* v88; // rax
	__int64 v89; // rdx
	unsigned __int16* v90; // r9
	unsigned __int16* v91; // r8
	unsigned __int16* v92; // r11
	__int64 v93; // rcx
	__int64 v94; // rdx
	_QWORD* v95; // rax
	__int64 v96; // r8
	__int64 v97; // rdx
	int v98; // r10d
	int* v100; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v101; // [rsp+48h] [rbp-B8h]
	unsigned __int64 v102; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v103)(); // [rsp+58h] [rbp-A8h] BYREF
	int v104; // [rsp+60h] [rbp-A0h]
	_QWORD* v105; // [rsp+68h] [rbp-98h]
	int v106; // [rsp+70h] [rbp-90h]
	__int64 v107[2]; // [rsp+78h] [rbp-88h] BYREF
	__int64 v108[2]; // [rsp+88h] [rbp-78h] BYREF
	__int64(__fastcall * *v109)(); // [rsp+98h] [rbp-68h] BYREF
	int v110; // [rsp+A0h] [rbp-60h]
	_QWORD* v111; // [rsp+A8h] [rbp-58h]
	int v112; // [rsp+B0h] [rbp-50h]
	__int64(__fastcall * *v113)(); // [rsp+C0h] [rbp-40h] BYREF
	char v114[8]; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v115; // [rsp+D0h] [rbp-30h]
	char v116[8]; // [rsp+118h] [rbp+18h] BYREF
	_WORD* v117; // [rsp+120h] [rbp+20h]
	_WORD* v118; // [rsp+128h] [rbp+28h]
	__int128 v119; // [rsp+180h] [rbp+80h]
	int* v120; // [rsp+190h] [rbp+90h]
	__int64 v121; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v122; // [rsp+1A8h] [rbp+A8h]
	char v123[1216]; // [rsp+1C0h] [rbp+C0h] BYREF
	__int64 v124; // [rsp+680h] [rbp+580h] BYREF
	int v125; // [rsp+688h] [rbp+588h]
	__int64 v126; // [rsp+690h] [rbp+590h] BYREF
	__int64 v127; // [rsp+698h] [rbp+598h]
	__int64 v128; // [rsp+6A0h] [rbp+5A0h] BYREF
	__int64(__fastcall * *v129)(); // [rsp+6B0h] [rbp+5B0h] BYREF
	int v130; // [rsp+6B8h] [rbp+5B8h]
	int* v131; // [rsp+6C0h] [rbp+5C0h]
	__int64 v132; // [rsp+6C8h] [rbp+5C8h]
	__int64 v133; // [rsp+6D0h] [rbp+5D0h]
	__int64 v134; // [rsp+6D8h] [rbp+5D8h]
	__int64 v135; // [rsp+6E0h] [rbp+5E0h]
	__int64* v136; // [rsp+6E8h] [rbp+5E8h]
	__int64 v137; // [rsp+6F0h] [rbp+5F0h]
	int v138; // [rsp+6F8h] [rbp+5F8h]
	__int128 v139; // [rsp+700h] [rbp+600h]
	int v140; // [rsp+710h] [rbp+610h]
	__int64 v141; // [rsp+718h] [rbp+618h]
	__int64* v142; // [rsp+720h] [rbp+620h]
	__int64 v143; // [rsp+72Ch] [rbp+62Ch]
	int v144; // [rsp+734h] [rbp+634h]
	__int64 v145; // [rsp+738h] [rbp+638h]
	__int64 v146; // [rsp+740h] [rbp+640h]
	__int64 v147; // [rsp+748h] [rbp+648h]
	__int128 v148; // [rsp+750h] [rbp+650h]
	__int64 v149; // [rsp+760h] [rbp+660h]
	int v150; // [rsp+77Ch] [rbp+67Ch]
	__int64 v151; // [rsp+7C8h] [rbp+6C8h]
	__int64 v152; // [rsp+7D0h] [rbp+6D0h]
	__int64 v153; // [rsp+7D8h] [rbp+6D8h]
	__int64 v154; // [rsp+7E0h] [rbp+6E0h]
	__int64 v155; // [rsp+7E8h] [rbp+6E8h]
	int v156[22]; // [rsp+820h] [rbp+720h] BYREF
	__int64 v157; // [rsp+878h] [rbp+778h]
	__int64 v158; // [rsp+880h] [rbp+780h]
	__int64 v159; // [rsp+888h] [rbp+788h]
	__int64 v160; // [rsp+890h] [rbp+790h]
	__int64 v161; // [rsp+898h] [rbp+798h]
	__int64 v162; // [rsp+8A0h] [rbp+7A0h]
	__int64 v163[2]; // [rsp+960h] [rbp+860h] BYREF
	int v164; // [rsp+970h] [rbp+870h]
	int v165[178]; // [rsp+980h] [rbp+880h] BYREF
	__int64 v166; // [rsp+C48h] [rbp+B48h]
	__int64 v167; // [rsp+C50h] [rbp+B50h]
	__int64 v168; // [rsp+C60h] [rbp+B60h]
	__int64 v169[4]; // [rsp+DD8h] [rbp+CD8h] BYREF
	int v170; // [rsp+DF8h] [rbp+CF8h]
	int v171; // [rsp+E00h] [rbp+D00h]
	int v172; // [rsp+E04h] [rbp+D04h]
	int v173; // [rsp+E08h] [rbp+D08h]
	_WORD v174[40]; // [rsp+E20h] [rbp+D20h] BYREF

	v1 = (_QWORD*)a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && sub_1403D90D0(qword_140C65898, *v2))
	{
		v3 = v1[4];
		v4 = *(_QWORD*)(qword_140C65898 + 25400);
		v103 = off_140B569F0;
		v5 = *(_QWORD*)(v3 + 112);
		v102 = v4;
		v105 = v1;
		v106 = 1;
		if (*(_QWORD*)(v3 + 120) >= v5)
			sub_14005E2C0((__int64)v1);
		v6 = v1[2];
		v7 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		v1[2] += 16i64;
		v8 = sub_1400578C0((__int64)v1);
		v104 = v8;
		v9 = 0i64;
		if (v4)
		{
			v10 = 0i64;
			v101 = 0i64;
			while (1)
			{
				if (v9 < *(_QWORD*)(qword_140C65898 + 25400))
				{
					v11 = v10 + *(_QWORD*)(qword_140C65898 + 25392);
					if (v11)
					{
						v12 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v11 + 8), 0i64);
						if (v12)
							break;
					}
				}
			LABEL_79:
				v10 += 256i64;
				++v9;
				v101 = v10;
				if (v9 >= v4)
				{
					v1 = v105;
					v8 = v104;
					goto LABEL_81;
				}
			}
			v13 = v1[4];
			v111 = v1;
			v109 = off_140B569F0;
			v14 = *(_QWORD*)(v13 + 112);
			v112 = 1;
			if (*(_QWORD*)(v13 + 120) >= v14)
				sub_14005E2C0((__int64)v1);
			v15 = v1[2];
			v16 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v15 + 8) = 5;
			*(_QWORD*)v15 = v16;
			v1[2] += 16i64;
			v17 = sub_1400578C0((__int64)v1);
			v18 = *(_QWORD*)(v1[4] + 160i64);
			v19 = v17;
			v110 = v17;
			v20 = sub_14005C3C0(v18, v17);
			v21 = v1[2];
			*(_QWORD*)v21 = *v20;
			*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
			v1[2] += 16i64;
			sub_1400F06F0((__int64)v1, v22, L"idUnique", v23);
			v1[2] -= 16i64;
			LODWORD(v15) = *(_DWORD*)(v11 + 8);
			v24 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
			*(_QWORD*)v25 = *v24;
			*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
			v1[2] += 16i64;
			sub_1400F06F0((__int64)v1, v26, L"idItem", v15);
			v1[2] -= 16i64;
			v27 = v1[2];
			v28 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
			*(_QWORD*)v27 = *v28;
			*(_DWORD*)(v27 + 8) = *((_DWORD*)v28 + 2);
			v1[2] += 16i64;
			sub_1400F06F0((__int64)v1, v29, L"nStackSize", v30);
			v1[2] -= 16i64;
			LODWORD(v27) = *(_DWORD*)(v11 + 28);
			v31 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
			*(_QWORD*)v32 = *v31;
			*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
			v1[2] += 16i64;
			sub_1400F06F0((__int64)v1, v33, L"nStockCount", v27);
			v1[2] -= 16i64;
			v34 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
			*(_QWORD*)v35 = *v34;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
			v1[2] += 16i64;
			v36 = (unsigned __int64*)sub_14018F0E0(&v121, L"bMeetsPreq")[1];
			if (v36)
			{
				v37 = -1i64;
				do
					++v37;
				while (*((_BYTE*)v36 + v37));
				sub_140058710((__int64)v1, v36, v37);
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
				v1[2] += 16i64;
			}
			if (v122)
				sub_14018B900(v122, 0);
			v38 = (_DWORD*)v1[2];
			*v38 = 1;
			v38[2] = 1;
			v1[2] += 16i64;
			v39 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v39, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			sub_140659EB0((__int64)&v109, (__int64)L"tPriceInfo", (__int64*)(v11 + 184));
			sub_14040FAE0((__int64)v163);
			if (v171 <= 6)
			{
				v163[1] = (__int64)v12;
				v171 = 6;
			}
			v126 = 0i64;
			v127 = 0i64;
			v40 = *(_DWORD*)(v11 + 56) >> 3;
			BYTE1(v127) = *(_DWORD*)(v11 + 56) & 7;
			v41 = v40;
			v40 >>= 3;
			LOBYTE(v127) = v41 & 7;
			v42 = v40;
			v40 >>= 1;
			HIDWORD(v127) = v42 & 1;
			v43 = v40;
			v40 >>= 3;
			v126 = v43 & 7;
			v44 = v40;
			v40 >>= 3;
			BYTE1(v126) = v44 & 7;
			v45 = v40;
			v40 >>= 3;
			*(_DWORD*)((char*)&v126 + 2) = v45 & 7;
			v46 = v40;
			v40 >>= 3;
			BYTE3(v126) = v46 & 7;
			v47 = v40;
			v40 >>= 3;
			WORD2(v126) = v47 & 7;
			v48 = v40;
			v40 >>= 3;
			BYTE5(v126) = v48 & 7;
			HIWORD(v126) = v40 & 7;
			HIBYTE(v126) = (v40 >> 3) & 7;
			v128 = 0i64;
			v49 = *(_QWORD*)(v11 + 64) >> 4;
			LOBYTE(v128) = *(_QWORD*)(v11 + 64) & 0xF;
			v50 = v49;
			v49 >>= 10;
			*(_DWORD*)((char*)&v128 + 2) = v50 & 0x3FF;
			WORD2(v128) = v49 & 0x3FF;
			HIWORD(v128) = (v49 >> 10) & 0x3FF;
			v125 = 1;
			v124 = 0i64;
			v51 = *(_QWORD*)(v11 + 48);
			if (v51)
			{
				LOBYTE(v124) = *(_QWORD*)(v11 + 48);
				v52 = v51 >> 8;
				BYTE1(v124) = v52;
				v52 >>= 8;
				BYTE2(v124) = v52;
				v52 >>= 8;
				BYTE3(v124) = v52;
				v52 >>= 8;
				BYTE4(v124) = v52;
				v52 >>= 8;
				BYTE5(v124) = v52;
				v52 >>= 8;
				BYTE6(v124) = v52;
				v125 = BYTE1(v52);
			}
			else
			{
				v124 = 0i64;
				v125 = (unsigned int)(v12[80] - 1) > 1;
			}
			v130 = 0;
			v129 = off_140B66A40;
			v131 = 0i64;
			v139 = 0i64;
			v148 = 0i64;
			v132 = 1i64;
			v133 = 0i64;
			v144 = 1;
			v134 = 0i64;
			v135 = 0i64;
			v136 = 0i64;
			v137 = 0i64;
			v138 = 0;
			v140 = 0;
			v141 = 0i64;
			v142 = 0i64;
			v143 = 0i64;
			v145 = 0i64;
			v146 = 0i64;
			v147 = 0i64;
			v149 = 0i64;
			v150 = 0;
			v151 = 0i64;
			v152 = 0i64;
			v153 = 0i64;
			v154 = 0i64;
			v155 = 0i64;
			v53 = (__int64*)sub_140445320(&v121, *(_DWORD*)(v11 + 248));
			v131 = v12;
			v132 = *v53;
			v133 = v53[1];
			v134 = v53[2];
			v135 = v53[3];
			v137 = *(unsigned int*)(v11 + 72) | 0x100000000i64;
			v138 = 5;
			*(_QWORD*)&v139 = v11 + 76;
			*((_QWORD*)&v139 + 1) = &v124;
			v136 = &v128;
			LODWORD(v53) = *(_DWORD*)(v11 + 96);
			v141 = v11 + 100;
			v140 = (int)v53;
			v142 = &v126;
			v54 = *(_DWORD*)(v11 + 96);
			if (v54 && v11 != -100 && v173 <= 6)
			{
				if (v54 > 8)
				{
					v173 = 0;
				}
				else
				{
					memset(v169, 0, sizeof(v169));
					sub_1407DB590((int*)v169, (int*)(v11 + 100), 4i64 * v54);
					v173 = 6;
				}
			}
			sub_1400B52A0((__int64)v156);
			if (!(unsigned int)sub_14040C310((__int64)&v129, (__int64)v156, qword_140C658F0, 0i64, 0i64, 0i64))
			{
				if (v172 <= 6)
				{
					v172 = 6;
					v166 = v126;
					v167 = v127;
					if (v163[0])
					{
						v55 = *(_QWORD*)(v163[0] + 88);
						if (v55)
						{
							if (*(int*)(v55 + 8) < 1)
							{
								v172 = 0;
								v166 = 0i64;
								v167 = 0i64;
							}
						}
					}
				}
				v157 = *(_QWORD*)(v11 + 184);
				v158 = *(_QWORD*)(v11 + 192);
				v159 = *(_QWORD*)(v11 + 200);
				v160 = *(_QWORD*)(v11 + 208);
				v161 = *(_QWORD*)(v11 + 216);
				v162 = *(_QWORD*)(v11 + 224);
				v157 /= (__int64)*(unsigned int*)(v11 + 32);
				v160 /= (__int64)*(unsigned int*)(v11 + 32);
				if (v170 <= 6)
				{
					v56 = v156;
					v57 = v165;
					if ((((unsigned __int8)v165 | (unsigned __int8)v156) & 0xF) != 0)
					{
						sub_1407DB590(v165, v156, 0x138ui64);
					}
					else
					{
						v58 = 2i64;
						do
						{
							v59 = *(_OWORD*)v56;
							v60 = *((_OWORD*)v56 + 1);
							v57 += 32;
							v56 += 32;
							*((_OWORD*)v57 - 8) = v59;
							v61 = *((_OWORD*)v56 - 6);
							*((_OWORD*)v57 - 7) = v60;
							v62 = *((_OWORD*)v56 - 5);
							*((_OWORD*)v57 - 6) = v61;
							v63 = *((_OWORD*)v56 - 4);
							*((_OWORD*)v57 - 5) = v62;
							v64 = *((_OWORD*)v56 - 3);
							*((_OWORD*)v57 - 4) = v63;
							v65 = *((_OWORD*)v56 - 2);
							*((_OWORD*)v57 - 3) = v64;
							v66 = *((_OWORD*)v56 - 1);
							*((_OWORD*)v57 - 2) = v65;
							*((_OWORD*)v57 - 1) = v66;
							--v58;
						} while (v58);
						v67 = *((_OWORD*)v56 + 1);
						v68 = *((_QWORD*)v56 + 6);
						*(_OWORD*)v57 = *(_OWORD*)v56;
						v69 = *((_OWORD*)v56 + 2);
						*((_OWORD*)v57 + 1) = v67;
						*((_OWORD*)v57 + 2) = v69;
						*((_QWORD*)v57 + 6) = v68;
					}
					v170 = 6;
				}
				v164 = 1;
			}
			v70 = (_QWORD*)sub_14040FC60((__int64)v123, (__int64)v163);
			if ((unsigned int)sub_140415BB0(v1, (__int64)v70))
			{
				sub_1400FB540((__int64)&v109);
				v1[2] -= 16i64;
			}
			if (*v70)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v70 + 8i64))(*v70);
				*v70 = 0i64;
			}
			v71 = v70[96];
			if (v71)
				sub_14018B900(v71, 0);
			v72 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
			v73 = v1[2];
			*(_QWORD*)v73 = *v72;
			*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
			v1[2] += 16i64;
			sub_1400F0870((__int64)v1, v74, L"strIcon", v75);
			v1[2] -= 16i64;
			sub_1400B6F30((__int64)&v113);
			v113 = off_140B69230;
			v120 = 0i64;
			v119 = 0i64;
			v76 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v119 = v76;
			*((_QWORD*)&v119 + 1) = v76;
			v120 = v76 + 4;
			if (v76)
				*(_WORD*)v76 = 0;
			v77 = 0i64;
			while (a1n_11[++v77] != 0)
				;
			sub_14001C480((__int64)v114, (int*)L"$1n", (int*)&a1n_11[v77]);
			v79 = sub_14018B280(96i64, 0);
			v80 = (__int64)v79;
			if (v79)
			{
				v81 = *(_DWORD*)(v11 + 232);
				sub_1400B6390(v79);
				*(_QWORD*)v80 = off_140B69170;
				*(_DWORD*)(v80 + 88) = 1;
				sub_1400B6D70(v80, (__int64)L"name", v81);
			}
			else
			{
				v80 = 0i64;
			}
			sub_1400B7480((__int64)&v113, (_QWORD*)v80);
			if (v117 == v118 && qword_140C63648)
			{
				v100 = 0i64;
				(**(void(__fastcall***)(__int64, __int64, __int64(__fastcall***)(), int**))qword_140C63648)(
					qword_140C63648,
					v115,
					&v113,
					&v100);
				if (v100)
				{
					v82 = 0i64;
					if (*(_WORD*)v100)
					{
						do
							++v82;
						while (*((_WORD*)v100 + v82));
					}
					sub_14001C480((__int64)v116, v100, (int*)((char*)v100 + 2 * v82));
					goto LABEL_65;
				}
				if (v117 != v118)
				{
					*v117 = 0;
					v118 = v117;
				LABEL_65:
					if (v100)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v100 - 2) + 8i64))(v100 - 4);
				}
			}
			v83 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
			v84 = v1[2];
			*(_QWORD*)v84 = *v83;
			*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
			v1[2] += 16i64;
			sub_1400F0870((__int64)v1, v85, L"strName", v86);
			v1[2] -= 16i64;
			if (*(_QWORD*)(v11 + 40))
			{
				v108[1] = *(_QWORD*)(v11 + 40);
				LODWORD(v108[0]) = *(_DWORD*)(qword_140C635F0 + 5760);
				v107[1] = 0i64;
				v107[0] = 0i64;
				if ((unsigned int)sub_1403F82F0(qword_140C65898, 9, v108, v174, 0x21u, v107, 0i64))
				{
					v88 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					v90 = v174;
					v91 = L"strMaker";
				}
				else
				{
					sub_14034BDD0(v87, 479255);
					v88 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					v90 = v92;
					v91 = L"strMaker";
				}
				v93 = v1[2];
				*(_QWORD*)v93 = *v88;
				*(_DWORD*)(v93 + 8) = *((_DWORD*)v88 + 2);
				v1[2] += 16i64;
				sub_1400F0870((__int64)v1, v89, v91, v90);
				v1[2] -= 16i64;
			}
			sub_1400FB1D0((__int64)&v103);
			if ((_QWORD)v119)
				sub_14018B900(v119, 0);
			sub_1400B7390(&v113);
			if (v163[0])
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v163[0] + 8i64))(v163[0]);
				v163[0] = 0i64;
			}
			if (v168)
				sub_14018B900(v168, 0);
			sub_1400579E0((__int64)v1, v94, v19);
			v10 = v101;
			v4 = v102;
			goto LABEL_79;
		}
	LABEL_81:
		v95 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v8);
		v96 = v1[2];
		*(_QWORD*)v96 = *v95;
		v97 = *((unsigned int*)v95 + 2);
		*(_DWORD*)(v96 + 8) = v97;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v97, v98);
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
	}
	return 1i64;
}
// 14065B488: variable 'v22' is possibly undefined
// 14065B488: variable 'v23' is possibly undefined
// 14065B4C0: variable 'v25' is possibly undefined
// 14065B4D0: variable 'v26' is possibly undefined
// 14065B517: variable 'v29' is possibly undefined
// 14065B517: variable 'v30' is possibly undefined
// 14065B54F: variable 'v32' is possibly undefined
// 14065B55F: variable 'v33' is possibly undefined
// 14065B594: variable 'v35' is possibly undefined
// 14065BC82: variable 'v74' is possibly undefined
// 14065BC82: variable 'v75' is possibly undefined
// 14065BE29: variable 'v85' is possibly undefined
// 14065BE29: variable 'v86' is possibly undefined
// 14065BEBC: variable 'v87' is possibly undefined
// 14065BED7: variable 'v92' is possibly undefined
// 14065BEFD: variable 'v89' is possibly undefined
// 14065BF62: variable 'v94' is possibly undefined
// 14065BFD2: variable 'v98' is possibly undefined
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B2D490: using guessed type wchar_t aStrmaker[9];
// 140B2D4A8: using guessed type wchar_t aStrmaker_0[9];
// 140B2D4C0: using guessed type wchar_t a1n_11[4];
// 140B2D4C8: using guessed type wchar_t aStrname_48[8];
// 140B2D4F0: using guessed type wchar_t aStricon_9[8];
// 140B2D500: using guessed type wchar_t aBmeetspreq_0[11];
// 140B2D518: using guessed type wchar_t aTpriceinfo_0[11];
// 140B2D530: using guessed type wchar_t aNstacksize_0[11];
// 140B2D548: using guessed type wchar_t aNstockcount_0[12];
// 140B2D560: using guessed type wchar_t aIdunique_0[9];
// 140B2D578: using guessed type wchar_t aIditem_0[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B66A40: using guessed type __int64 (__fastcall *off_140B66A40[121])();
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14065B2B0: using guessed type int var_680[22];
// 14065B2B0: using guessed type int var_520[178];
// 14065B2B0: using guessed type char var_CE0[1216];
// 14065B2B0: using guessed type char var_DD8[8];
// 14065B2B0: using guessed type char var_D88[8];
// 14065B2B0: using guessed type _WORD var_80[40];

