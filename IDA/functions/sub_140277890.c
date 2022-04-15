#include "../winhttp.h"

//----- (0000000140277890) ----------------------------------------------------
__int64 __fastcall sub_140277890(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	unsigned __int64 v4; // rdi
	__int64 v5; // rax
	int* v6; // rbx
	__int64 v7; // rcx
	int v8; // eax
	int v9; // ecx
	unsigned __int64 v10; // rcx
	int v11; // ecx
	int v12; // eax
	int v13; // eax
	bool v14; // zf
	__int64 v15; // rcx
	unsigned int v16; // eax
	unsigned __int64 i; // rbx
	__int64 v18; // rdx
	int v19; // eax
	__int64 v20; // rcx
	int v21; // ebx
	__int64 v22; // rcx
	int v23; // eax
	__int64 v24; // rcx
	int v25; // ebx
	__int64 v26; // rcx
	int v27; // eax
	__int64 v28; // rcx
	int v29; // ebx
	int v30; // eax
	__int64 v31; // rcx
	int v32; // ebx
	__int64 v33; // rcx
	int v34; // ebx
	unsigned __int64 v35; // rbx
	__int64 v36; // rdi
	__int64 v37; // rcx
	int v38; // r14d
	unsigned __int64 v39; // rbx
	__int64 v40; // rdi
	__int64 v41; // rcx
	int v42; // ebx
	__int64 v43; // rcx
	int* v44; // rax
	int* v45; // rbx
	__int64 v46; // rcx
	__int64 v47; // rcx
	int* v48; // rax
	int* v49; // rbx
	unsigned __int64 v50; // rbx
	unsigned int v51; // edx
	unsigned __int8 v52; // cl
	unsigned int v53; // eax
	unsigned int v54; // ebx
	__int64 v55; // rax
	bool v56; // cf
	__int64 v57; // rax
	int* v58; // rax
	int v59; // edi
	int* v60; // r14
	_QWORD* v61; // rbx
	__int64 v62; // rcx
	__int64 v63; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v64; // [rsp+38h] [rbp-C8h] BYREF
	int v65; // [rsp+40h] [rbp-C0h] BYREF
	int v66; // [rsp+44h] [rbp-BCh] BYREF
	int v67; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v68; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v69; // [rsp+58h] [rbp-A8h] BYREF
	int* v70; // [rsp+60h] [rbp-A0h] BYREF
	int v71; // [rsp+68h] [rbp-98h]
	int v72; // [rsp+6Ch] [rbp-94h]
	__int64 v73; // [rsp+70h] [rbp-90h] BYREF
	__int64 v74; // [rsp+78h] [rbp-88h] BYREF
	__int64 v75; // [rsp+80h] [rbp-80h] BYREF
	__int64 v76; // [rsp+88h] [rbp-78h] BYREF
	__int64 v77; // [rsp+90h] [rbp-70h] BYREF
	__int64 v78; // [rsp+98h] [rbp-68h] BYREF
	__int64 v79; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v80; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v81; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v82; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v83; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v84; // [rsp+D0h] [rbp-30h]
	int v85[3]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v86; // [rsp+ECh] [rbp-14h]
	int v87; // [rsp+F4h] [rbp-Ch]
	int v88[3]; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v89; // [rsp+104h] [rbp+4h]
	int v90; // [rsp+10Ch] [rbp+Ch]
	int v91[3]; // [rsp+110h] [rbp+10h] BYREF
	__int64 v92; // [rsp+11Ch] [rbp+1Ch]
	int v93; // [rsp+124h] [rbp+24h]
	int v94[3]; // [rsp+128h] [rbp+28h] BYREF
	__int64 v95; // [rsp+134h] [rbp+34h]
	int v96; // [rsp+13Ch] [rbp+3Ch]
	int v97[4]; // [rsp+140h] [rbp+40h] BYREF
	__int16 v98; // [rsp+150h] [rbp+50h]
	int v99; // [rsp+154h] [rbp+54h]
	int v100; // [rsp+158h] [rbp+58h]
	int v101; // [rsp+15Ch] [rbp+5Ch]
	int v102; // [rsp+160h] [rbp+60h]
	int v103; // [rsp+164h] [rbp+64h]
	int v104; // [rsp+168h] [rbp+68h]
	int v105; // [rsp+16Ch] [rbp+6Ch]
	int v106; // [rsp+170h] [rbp+70h]
	int v107[2]; // [rsp+178h] [rbp+78h] BYREF
	__int64 v108; // [rsp+180h] [rbp+80h]
	__int64 v109; // [rsp+188h] [rbp+88h]
	__int64 v110; // [rsp+190h] [rbp+90h]
	__int64 v111; // [rsp+198h] [rbp+98h]
	int v112; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v113; // [rsp+1A4h] [rbp+A4h]
	int v114; // [rsp+1ACh] [rbp+ACh]
	int v115; // [rsp+1B0h] [rbp+B0h]
	__int64 v116; // [rsp+1B4h] [rbp+B4h]
	int v117; // [rsp+1BCh] [rbp+BCh]
	__int64 v118; // [rsp+1C0h] [rbp+C0h]
	int v119; // [rsp+1C8h] [rbp+C8h]
	int v120[3]; // [rsp+1D0h] [rbp+D0h] BYREF
	__int64 v121; // [rsp+1DCh] [rbp+DCh]
	int v122; // [rsp+1E4h] [rbp+E4h]
	__int64 v123; // [rsp+1E8h] [rbp+E8h]
	__int64 v124; // [rsp+1F0h] [rbp+F0h]
	__int64 v125; // [rsp+1F8h] [rbp+F8h]
	int v126; // [rsp+200h] [rbp+100h]
	int v127[10]; // [rsp+208h] [rbp+108h] BYREF
	int v128[64]; // [rsp+230h] [rbp+130h] BYREF
	int v129; // [rsp+330h] [rbp+230h]
	unsigned __int64 v130; // [rsp+340h] [rbp+240h]
	__int128 v131[2]; // [rsp+360h] [rbp+260h] BYREF
	int v132; // [rsp+380h] [rbp+280h]
	char v133; // [rsp+384h] [rbp+284h]

	result = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 6304) + 64i64))(*(_QWORD*)(a1 + 6304), v128);
	if ((int)result < 0)
		return result;
	v3 = 0i64;
	*(_DWORD*)(a1 + 136) = 1;
	*(_QWORD*)(a1 + 144) = 0i64;
	if (LOWORD(v128[0]))
	{
		do
			++v3;
		while (*((_WORD*)v128 + v3));
	}
	v4 = v3 + 1;
	v5 = 2 * v4;
	if (!is_mul_ok(v4, 2ui64))
		v5 = -1i64;
	v6 = sub_14018B280(v5, 0);
	sub_1407DB590(v6, v128, 2 * v4);
	v7 = *(_QWORD*)(a1 + 6336);
	*(_QWORD*)(a1 + 152) = v6;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_DWORD*)(a1 + 176) = 2;
	*(_DWORD*)(a1 + 180) = 3;
	*(_DWORD*)(a1 + 184) = 4096;
	*(_DWORD*)(a1 + 188) = 4096;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 296i64))(v7);
	v9 = 0x4000;
	*(_DWORD*)(a1 + 196) = 16;
	*(_DWORD*)(a1 + 200) = 1065353216;
	if (v8 < 45056)
		v9 = 0x2000;
	*(_DWORD*)(a1 + 192) = v9;
	v10 = 0x20000000i64;
	if (v130 > 0x20000000)
		v10 = v130;
	*(_QWORD*)(a1 + 208) = v10;
	v11 = v129;
	if (v129 != 4098 || (v12 = 0, (*(_BYTE*)(a1 + 6240) & 8) != 0))
		v12 = 1;
	*(_DWORD*)(a1 + 220) = v12;
	*(_DWORD*)(a1 + 216) = 1;
	if (v11 != 4098 || (v13 = 0, (*(_BYTE*)(a1 + 6240) & 2) != 0))
		v13 = 1;
	v14 = dword_140C65694 == 0;
	*(_DWORD*)(a1 + 224) = v13;
	*(_DWORD*)(a1 + 228) = 0;
	*(_DWORD*)(a1 + 232) = 3;
	*(_DWORD*)(a1 + 8664) = 0;
	if (!v14 && v11 == 4318)
	{
		v15 = *(_QWORD*)(a1 + 6336);
		v127[0] = 65564;
		if (!(unsigned int)sub_140818B00(v15, (__int64)v127))
		{
			v16 = v127[2];
			*(_DWORD*)(a1 + 8664) = 1;
			if (v16 > 1)
			{
				*(_DWORD*)(a1 + 228) = 1;
				*(_DWORD*)(a1 + 232) = v16 + 1;
			}
		}
	}
	sub_1407E4830((int*)(a1 + 6468), 0i64, 0x70ui64);
	for (i = 0i64; i < 27; ++i)
	{
		v18 = (unsigned int)dword_140AE8120[i];
		if ((_DWORD)v18)
			(*(void(__fastcall**)(_QWORD, __int64, unsigned __int64))(**(_QWORD**)(a1 + 6336) + 232i64))(
				*(_QWORD*)(a1 + 6336),
				v18,
				i * 4 + a1 + 6468);
	}
	v19 = *(_DWORD*)(a1 + 240);
	v20 = *(_QWORD*)(a1 + 6336);
	*(_QWORD*)(a1 + 8120) = 0i64;
	*(_QWORD*)(a1 + 8128) = 0i64;
	*(_DWORD*)(a1 + 8136) = 0x200000;
	v91[0] = 0x200000;
	v91[1] = 2;
	v91[2] = 1;
	*(_DWORD*)(a1 + 8140) = v19 - 1;
	v92 = 0x10000i64;
	v93 = 0;
	v21 = (*(__int64(__fastcall**)(__int64, int*, _QWORD, __int64))(*(_QWORD*)v20 + 24i64))(v20, v91, 0i64, a1 + 8112);
	if (v21 < 0)
	{
		v77 = 0x141DE2A00i64;
		sub_1401A3130(14, 2, &v77, (unsigned int)v21);
		return (unsigned int)v21;
	}
	if (*(_DWORD*)(a1 + 8664)
		&& !(unsigned int)sub_1408194D0(*(_QWORD*)(a1 + 6336), *(_QWORD*)(a1 + 8112), (__int64)&v83))
	{
		v22 = *(_QWORD*)(a1 + 6336);
		v66 = 1;
		sub_140819670(v22, v83, 1u, 1u, (__int64)&v66);
	}
	v23 = *(_DWORD*)(a1 + 240);
	v24 = *(_QWORD*)(a1 + 6336);
	*(_QWORD*)(a1 + 8152) = 0i64;
	*(_DWORD*)(a1 + 8160) = 0;
	*(_DWORD*)(a1 + 8164) = 0x80000;
	v88[0] = 0x80000;
	v88[1] = 2;
	v88[2] = 2;
	*(_DWORD*)(a1 + 8168) = v23 - 1;
	v89 = 0x10000i64;
	v90 = 0;
	v25 = (*(__int64(__fastcall**)(__int64, int*, _QWORD, __int64))(*(_QWORD*)v24 + 24i64))(v24, v88, 0i64, a1 + 8144);
	if (v25 < 0)
	{
		v74 = 0x141DE29D8i64;
		sub_1401A3130(14, 2, &v74, (unsigned int)v25);
		return (unsigned int)v25;
	}
	if (*(_DWORD*)(a1 + 8664)
		&& !(unsigned int)sub_1408194D0(*(_QWORD*)(a1 + 6336), *(_QWORD*)(a1 + 8144), (__int64)&v82))
	{
		v26 = *(_QWORD*)(a1 + 6336);
		v67 = 1;
		sub_140819670(v26, v82, 1u, 1u, (__int64)&v67);
	}
	v27 = *(_DWORD*)(a1 + 240);
	v28 = *(_QWORD*)(a1 + 6336);
	v85[0] = 16;
	v85[1] = 2;
	v85[2] = 4;
	v86 = 0x10000i64;
	v87 = 0;
	*(_DWORD*)(a1 + 8488) = v27 - 1;
	v29 = (*(__int64(__fastcall**)(__int64, int*, _QWORD, __int64))(*(_QWORD*)v28 + 24i64))(v28, v85, 0i64, a1 + 8480);
	if (v29 < 0)
	{
		v76 = 0x141DE29B0i64;
		sub_1401A3130(14, 2, &v76, (unsigned int)v29);
		return (unsigned int)v29;
	}
	sub_140279FA0(a1, *(_QWORD*)(a1 + 8480));
	v94[0] = 16;
	v94[1] = 2;
	*(_OWORD*)(a1 + 8512) = 0i64;
	v30 = *(_DWORD*)(a1 + 240);
	v31 = *(_QWORD*)(a1 + 6336);
	v84 = 0i64;
	v94[2] = 4;
	v95 = 0x10000i64;
	v96 = 0;
	*(_DWORD*)(a1 + 8528) = v30 - 1;
	v32 = (*(__int64(__fastcall**)(__int64, int*, _QWORD, __int64))(*(_QWORD*)v31 + 24i64))(v31, v94, 0i64, a1 + 8496);
	if (v32 < 0)
	{
		v80 = 0x141DE2AC0i64;
		sub_1401A3130(14, 2, &v80, (unsigned int)v32);
		return (unsigned int)v32;
	}
	sub_140279FA0(a1, *(_QWORD*)(a1 + 8496));
	v33 = *(_QWORD*)(a1 + 6336);
	v107[0] = 3;
	v107[1] = 3;
	v108 = 1i64;
	v109 = 0i64;
	v110 = 1i64;
	v111 = 0i64;
	v34 = (*(__int64(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v33 + 176i64))(v33, v107, a1 + 7264);
	if (v34 < 0)
	{
		v78 = 0x141DE2A88i64;
		sub_1401A3130(14, 2, &v78, (unsigned int)v34);
		return (unsigned int)v34;
	}
	v35 = 0i64;
	v36 = a1 + 7368;
	do
	{
		v37 = *(_QWORD*)(a1 + 6336);
		v97[1] = 1;
		v97[2] = 8;
		v98 = -1;
		v97[0] = v35 & 1;
		v99 = 1;
		v100 = 1;
		v101 = 3;
		v102 = 8;
		v103 = 1;
		v104 = 1;
		v105 = 3;
		v106 = 8;
		v97[3] = (v35 >> 1) & 1;
		v38 = (*(__int64(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v37 + 168i64))(v37, v97, v36);
		if (v38 < 0)
		{
			v81 = 0x141DE2A78i64;
			sub_1401A3130(14, 2, &v81, (unsigned int)v38);
			return (unsigned int)v38;
		}
		++v35;
		v36 += 8i64;
	} while (v35 < 4);
	v39 = 0i64;
	v40 = a1 + 7704;
	do
	{
		v132 = 1;
		v131[0] = (__int128)_mm_load_si128((const __m128i*) & xmmword_140B7A910);
		v131[1] = (__int128)_mm_load_si128((const __m128i*) & xmmword_140B7A900);
		v133 = v39 != 0 ? 0xF : 0;
		v38 = (*(__int64(__fastcall**)(_QWORD, __int128*, __int64))(**(_QWORD**)(a1 + 6336) + 160i64))(
			*(_QWORD*)(a1 + 6336),
			v131,
			v40);
		if (v38 < 0)
		{
			v79 = 0x141DE2A68i64;
			sub_1401A3130(14, 2, &v79, (unsigned int)v38);
			return (unsigned int)v38;
		}
		++v39;
		v40 += 8i64;
	} while (v39 < 2);
	v41 = *(_QWORD*)(a1 + 6336);
	v112 = 1;
	v113 = 1i64;
	v114 = 1;
	v115 = 28;
	v116 = 1i64;
	v117 = 0;
	v118 = 8i64;
	v119 = 0;
	v65 = 0;
	v70 = &v65;
	v71 = 4;
	v72 = 4;
	v63 = 0i64;
	v42 = (*(__int64(__fastcall**)(__int64, int*, int**, __int64))(*(_QWORD*)v41 + 40i64))(
		v41,
		&v112,
		&v70,
		a1 + 7720);
	if (v42 < 0)
		goto LABEL_105;
	v42 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 6336) + 56i64))(
		*(_QWORD*)(a1 + 6336),
		*(_QWORD*)(a1 + 7720),
		0i64,
		&v63);
	if (v42 < 0)
		goto LABEL_105;
	if (a1 == -7888)
	{
		v43 = v63;
		v42 = -2147024809;
		goto LABEL_57;
	}
	v44 = sub_14018B280(24i64, 0);
	v45 = v44;
	if (v44)
	{
		*(_QWORD*)v44 = off_140B55048;
		v44[2] = 1;
		*(_QWORD*)v44 = off_140B61188;
		*((_QWORD*)v44 + 2) = v63;
		v43 = v63;
		if (v63)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v63 + 8i64))(v63);
			goto LABEL_55;
		}
	}
	else
	{
		v45 = 0i64;
	LABEL_55:
		v43 = v63;
	}
	*(_QWORD*)(a1 + 7888) = v45;
	v42 = 0;
LABEL_57:
	if (v42 < 0)
	{
	LABEL_105:
		v69 = 0x141DE2A58i64;
		sub_1401A3130(14, 2, &v69, (unsigned int)v42);
		v62 = v63;
		goto LABEL_106;
	}
	if (v43)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v43 + 16i64))(v43);
	v46 = *(_QWORD*)(a1 + 6336);
	v120[0] = 21;
	v120[1] = 3;
	v120[2] = 3;
	v126 = 2139095039;
	v121 = 3i64;
	v122 = 16;
	v123 = 1i64;
	v124 = 0i64;
	v125 = 0i64;
	v64 = 0i64;
	v42 = (*(__int64(__fastcall**)(__int64, int*, __int64*))(*(_QWORD*)v46 + 184i64))(v46, v120, &v64);
	if (v42 < 0)
		goto LABEL_104;
	if (a1 == -8088)
	{
		v47 = v64;
		v42 = -2147024809;
		goto LABEL_69;
	}
	v48 = sub_14018B280(24i64, 0);
	v49 = v48;
	if (v48)
	{
		*(_QWORD*)v48 = off_140B55048;
		v48[2] = 1;
		*(_QWORD*)v48 = off_140B61188;
		*((_QWORD*)v48 + 2) = v64;
		v47 = v64;
		if (v64)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v64 + 8i64))(v64);
			goto LABEL_67;
		}
	}
	else
	{
		v49 = 0i64;
	LABEL_67:
		v47 = v64;
	}
	*(_QWORD*)(a1 + 8088) = v49;
	v42 = 0;
LABEL_69:
	if (v42 < 0)
	{
	LABEL_104:
		v75 = 0x141DE2B98i64;
		sub_1401A3130(14, 2, &v75, (unsigned int)v42);
		v62 = v64;
	LABEL_106:
		if (v62)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v62 + 16i64))(v62);
		return (unsigned int)v42;
	}
	if (v47)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 16i64))(v47);
	sub_140275820((__int64*)(a1 + 8568), *(unsigned int*)(a1 + 232));
	v50 = 0i64;
	v68 = 0i64;
	if (!*(_QWORD*)(a1 + 8576))
	{
	LABEL_75:
		if (*(_DWORD*)(a1 + 6436))
		{
			*(_DWORD*)(a1 + 8472) = 1;
		}
		else
		{
			v51 = *(_DWORD*)(a1 + 184);
			if (v51 < *(_DWORD*)(a1 + 188))
				v51 = *(_DWORD*)(a1 + 188);
			if (v51 >= 2)
			{
				v53 = v51 - 1;
				v52 = 1;
				if (((v51 - 1) & 0xFFFF0000) != 0)
				{
					v52 = 17;
					v53 >>= 16;
				}
				if ((v53 & 0xFF00) != 0)
				{
					v52 += 8;
					v53 >>= 8;
				}
				if ((v53 & 0xF0) != 0)
				{
					v52 += 4;
					v53 >>= 4;
				}
				if ((v53 & 0xC) != 0)
				{
					v52 += 2;
					v53 >>= 2;
				}
				if ((v53 & 2) != 0)
					++v52;
			}
			else
			{
				v52 = 0;
			}
			*(_DWORD*)(a1 + 8472) = v52 + 1;
		}
		v54 = *(_DWORD*)(a1 + 8472);
		v55 = 88i64 * v54;
		if (!is_mul_ok(v54, 0x58ui64))
			v55 = -1i64;
		v56 = __CFADD__(v55, 8i64);
		v57 = v55 + 8;
		if (v56)
			v57 = -1i64;
		v58 = sub_14018B280(v57, 0);
		if (v58)
		{
			v59 = v54 - 1;
			*v58 = v54;
			v60 = v58 + 2;
			if ((int)(v54 - 1) >= 0)
			{
				v61 = v58 + 12;
				do
				{
					*(v61 - 4) = 0i64;
					*(v61 - 3) = 0i64;
					*(v61 - 2) = 0i64;
					*(v61 - 1) = 0i64;
					*v61 = 0i64;
					v61[1] = 0i64;
					v61[2] = 0i64;
					v61[3] = 0i64;
					v61[4] = 0i64;
					v61[5] = 0i64;
					sub_140172F70(v61 - 5);
					--v59;
					v61 += 11;
				} while (v59 >= 0);
				*(_QWORD*)(a1 + 8464) = v60;
				return 0i64;
			}
		}
		else
		{
			v60 = 0i64;
		}
		*(_QWORD*)(a1 + 8464) = v60;
		return 0i64;
	}
	while (1)
	{
		v38 = (*(__int64(__fastcall**)(_QWORD, __int64*, unsigned __int64))(**(_QWORD**)(a1 + 6336) + 192i64))(
			*(_QWORD*)(a1 + 6336),
			&v68,
			*(_QWORD*)(a1 + 8568) + 8 * v50);
		if (v38 < 0)
			break;
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 224i64))(
			*(_QWORD*)(a1 + 6352),
			*(_QWORD*)(*(_QWORD*)(a1 + 8568) + 8 * v50++));
		if (v50 >= *(_QWORD*)(a1 + 8576))
			goto LABEL_75;
	}
	v73 = 0x141DE2B80i64;
	sub_1401A3130(14, 2, &v73, (unsigned int)v38);
	return (unsigned int)v38;
}
// 140AE8120: using guessed type int dword_140AE8120[];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B61188: using guessed type __int64 (__fastcall *off_140B61188[3])();
// 140B7A900: using guessed type __int128 xmmword_140B7A900;
// 140B7A910: using guessed type __int128 xmmword_140B7A910;
// 140C65694: using guessed type int dword_140C65694;

