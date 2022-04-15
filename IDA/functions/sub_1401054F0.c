#include "../winhttp.h"

//----- (00000001401054F0) ----------------------------------------------------
__int64 __fastcall sub_1401054F0(__int64 a1)
{
	int v2; // edx
	int v3; // ecx
	int v4; // edx
	int v5; // edx
	int v6; // edx
	int v7; // ecx
	unsigned __int64 v8; // r12
	__int64 v9; // rsi
	int* v10; // r14
	int* v11; // rdi
	__int64 v12; // rsi
	int* v13; // rdx
	__int64 v14; // rax
	int v15; // ebx
	char v16; // r13
	__int64 v17; // rsi
	unsigned __int16* v18; // r12
	__int64 v19; // rax
	__int64 v20; // rdi
	__int64 v21; // r14
	__int64 v22; // rbx
	__int64* v23; // rax
	int* v24; // rax
	int v25; // edi
	unsigned int v26; // eax
	unsigned __int64 v27; // rbx
	unsigned int v28; // eax
	__int64 v29; // rdx
	int* v30; // r10
	unsigned __int64 v31; // rdi
	__int64 v32; // rax
	__int64 v33; // r11
	__int64 v34; // r8
	__int64 v35; // rcx
	int v36; // r9d
	__int64 v37; // r8
	int v38; // edx
	char* v39; // rdx
	__int64 v40; // rcx
	int v41; // eax
	char* v42; // rdx
	__int64 v43; // rcx
	int v44; // eax
	__int64 v45; // rax
	__int64 v46; // rcx
	int* v47; // rdx
	int v48; // ebx
	int v49; // eax
	int v50; // eax
	__int64 result; // rax
	int v52; // [rsp+38h] [rbp-D0h]
	unsigned int v53; // [rsp+3Ch] [rbp-CCh]
	int v54; // [rsp+40h] [rbp-C8h]
	int v55; // [rsp+44h] [rbp-C4h]
	int v56; // [rsp+48h] [rbp-C0h]
	int v57; // [rsp+4Ch] [rbp-BCh]
	unsigned int v58; // [rsp+50h] [rbp-B8h]
	int v59; // [rsp+54h] [rbp-B4h]
	int v60; // [rsp+58h] [rbp-B0h]
	int v61; // [rsp+5Ch] [rbp-ACh]
	int v62; // [rsp+60h] [rbp-A8h]
	__int64 v63; // [rsp+68h] [rbp-A0h] BYREF
	int v64; // [rsp+70h] [rbp-98h]
	int v65; // [rsp+74h] [rbp-94h]
	int v66; // [rsp+78h] [rbp-90h]
	int v67; // [rsp+7Ch] [rbp-8Ch]
	__int64 v68; // [rsp+80h] [rbp-88h] BYREF
	unsigned __int64 v69; // [rsp+88h] [rbp-80h]
	unsigned __int64 v70; // [rsp+90h] [rbp-78h]
	unsigned __int64 v71; // [rsp+98h] [rbp-70h]
	__int64(__fastcall * *v72)(); // [rsp+A8h] [rbp-60h] BYREF
	__int128 v73; // [rsp+B0h] [rbp-58h]
	__int64 v74; // [rsp+C0h] [rbp-48h]
	__int64(__fastcall * *TlsValue)(); // [rsp+C8h] [rbp-40h] BYREF
	__int128 v76; // [rsp+D0h] [rbp-38h]
	__int128 v77; // [rsp+E8h] [rbp-20h] BYREF
	__int128 v78; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v79[6]; // [rsp+108h] [rbp+0h]
	__int64 v80[4]; // [rsp+138h] [rbp+30h] BYREF
	__int128 v81; // [rsp+158h] [rbp+50h]
	unsigned __int64 v82; // [rsp+168h] [rbp+60h]
	char v83; // [rsp+170h] [rbp+68h]
	char v84; // [rsp+171h] [rbp+69h]
	char v85; // [rsp+172h] [rbp+6Ah]
	int v86; // [rsp+174h] [rbp+6Ch]
	unsigned int v87; // [rsp+178h] [rbp+70h]
	int v88; // [rsp+17Ch] [rbp+74h]
	__int64 v89; // [rsp+180h] [rbp+78h]
	__int64 v90; // [rsp+188h] [rbp+80h]
	unsigned int v91; // [rsp+190h] [rbp+88h]
	unsigned int v92; // [rsp+194h] [rbp+8Ch]
	char v93; // [rsp+198h] [rbp+90h]
	char v94[64]; // [rsp+1B8h] [rbp+B0h] BYREF
	int v95; // [rsp+1F8h] [rbp+F0h]
	char v96[64]; // [rsp+218h] [rbp+110h] BYREF
	int v97; // [rsp+258h] [rbp+150h]
	unsigned __int64 v98; // [rsp+268h] [rbp+160h]
	__int64 v99; // [rsp+270h] [rbp+168h]
	unsigned __int64 v100; // [rsp+278h] [rbp+170h]
	__int128 v101; // [rsp+280h] [rbp+178h]
	unsigned __int64 v102; // [rsp+290h] [rbp+188h]

	v2 = *(_DWORD*)(a1 + 160);
	v53 = *(_DWORD*)(a1 + 132);
	v58 = *(_DWORD*)(a1 + 136);
	v66 = *(_DWORD*)(a1 + 140);
	LODWORD(v99) = v66;
	v3 = *(_DWORD*)(a1 + 144);
	v98 = __PAIR64__(v58, v53);
	v67 = v53;
	v59 = v2;
	DWORD1(v101) = v2;
	v4 = *(_DWORD*)(a1 + 164);
	v60 = v3;
	HIDWORD(v99) = v3;
	v61 = v4;
	LODWORD(v100) = *(_DWORD*)(a1 + 148);
	DWORD2(v101) = v4;
	v5 = *(_DWORD*)(a1 + 168);
	v64 = v100;
	v55 = v5;
	HIDWORD(v100) = *(_DWORD*)(a1 + 152);
	HIDWORD(v101) = v5;
	v6 = *(_DWORD*)(a1 + 172);
	v62 = HIDWORD(v100);
	v7 = *(_DWORD*)(a1 + 156);
	v71 = HIDWORD(v100);
	LODWORD(v102) = v6;
	v65 = v6;
	v54 = v7;
	HIDWORD(v102) = *(_DWORD*)(a1 + 176);
	LODWORD(v101) = v7;
	v57 = v7;
	v56 = HIDWORD(v102);
	v70 = HIDWORD(v102);
	LODWORD(v63) = 1;
	v52 = 0;
	v8 = 0i64;
	v69 = 0i64;
	do
	{
		v9 = *(_QWORD*)(a1 + 80);
		v10 = *(int**)(a1 + 72);
		*(__int64*)((char*)v79 + v8) = 0i64;
		v11 = 0i64;
		*(_QWORD*)&v73 = 0i64;
		v12 = (v9 - (__int64)v10) >> 1;
		v74 = 0i64;
		if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v11 = sub_14018B280(2 * (v12 + 1), 0);
			*(_QWORD*)&v73 = v11;
			v74 = (__int64)v11 + 2 * v12 + 2;
		}
		sub_1407DB590(v11, v10, 2 * v12);
		*((_QWORD*)&v73 + 1) = (char*)v11 + 2 * v12;
		if (*((_QWORD*)&v73 + 1))
			*((_WORD*)v11 + v12) = 0;
		v13 = *(int**)((char*)off_140A33098 + v8);
		v14 = 0i64;
		if (*(_WORD*)v13)
		{
			do
				++v14;
			while (*((_WORD*)v13 + v14));
		}
		sub_14001C310(&v72, v13, (int*)((char*)v13 + 2 * v14));
		v15 = v52;
		v16 = 0;
		if (v52 < 0 || v52 >= (int)((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 3))
			v17 = 0i64;
		else
			v17 = *(_QWORD*)(v8 + *(_QWORD*)(a1 + 32));
		v68 = v17;
		if (v17)
		{
			sub_140101710(v17);
			v18 = (unsigned __int16*)v73;
			sub_140100CD0(v17, *(_QWORD*)(a1 + 8), (int*)v73);
		}
		else
		{
			v18 = (unsigned __int16*)v73;
			v19 = *(_QWORD*)(a1 + 8);
			if (!(_QWORD)v73 || (v20 = *(_QWORD*)(v19 + 64), v21 = *(_QWORD*)(v19 + 72), v20 == v21))
			{
			LABEL_18:
				v17 = 0i64;
			}
			else
			{
				while (1)
				{
					v22 = *(_QWORD*)(*(_QWORD*)v20 + 40i64);
					v23 = sub_14010A540(*(_QWORD**)(*(_QWORD*)v20 + 32i64), v22, v18);
					if (v23 != (__int64*)v22)
					{
						v17 = *v23;
						if (*v23)
							break;
					}
					v20 += 8i64;
					if (v20 == v21)
						goto LABEL_18;
				}
			}
			v68 = v17;
			if (v17)
			{
				sub_140101710(v17);
				v15 = v52;
			}
			else
			{
				v24 = sub_14018B280(120i64, 0);
				v15 = v52;
				if (v24)
				{
					v16 = 1;
					v17 = sub_140100930(
						(__int64)v24,
						*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64),
						*(_QWORD*)(a1 + 8),
						(int*)v18,
						1);
					v68 = v17;
				}
				else
				{
					v17 = 0i64;
					v68 = 0i64;
					v16 = 1;
				}
			}
		}
		v25 = v63;
		if (((unsigned int)v63 & *(_DWORD*)(a1 + 56)) != 0)
		{
			v78 = xmmword_140B7B240;
			v26 = sub_140141F10(qword_140C63678, (__m128*) & v78);
			v77 = xmmword_140B7B240;
			v27 = v26;
			v28 = sub_140141F10(qword_140C63678, (__m128*) & v77);
			v29 = qword_140C63678;
			v30 = *(int**)(a1 + 104);
			v31 = v28;
			v32 = *(_QWORD*)(a1 + 8);
			v80[0] = 0i64;
			v33 = *(_QWORD*)(v32 + 16);
			LOBYTE(v32) = *(_BYTE*)(a1 + 128);
			v86 = 1065353216;
			v83 = v32;
			LOBYTE(v32) = *(_BYTE*)(a1 + 129);
			v89 = 0i64;
			v84 = v32;
			LOBYTE(v32) = *(_BYTE*)(a1 + 130);
			v90 = 0i64;
			v91 = v31;
			v85 = v32;
			if (v31 < *(_QWORD*)(qword_140C63678 + 48))
			{
				v34 = *(_QWORD*)(qword_140C63678 + 40);
				v35 = 32i64 * (unsigned int)v31;
				v36 = *(_DWORD*)(v35 + v34 + 16);
				if ((unsigned int)(v36 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(v35 + v34 + 16) = v36 + 1;
			}
			v92 = v27;
			if (v27 < *(_QWORD*)(v29 + 48))
			{
				v37 = *(_QWORD*)(v29 + 40);
				v38 = *(_DWORD*)(32 * v27 + v37 + 16);
				if ((unsigned int)(v38 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(32 * v27 + v37 + 16) = v38 + 1;
			}
			v93 = 0;
			v95 = 0;
			v39 = v94;
			v40 = 0i64;
			do
			{
				v41 = *(_DWORD*)((char*)&unk_140A1B148 + v40);
				*(_DWORD*)&v94[v40 + 48] = 0;
				v40 += 4i64;
				*(_DWORD*)&v94[v40 + 28] = v41;
				*(_QWORD*)v39 = 0i64;
				v39 += 8;
			} while (v40 < 16);
			v97 = 0;
			v42 = v96;
			v43 = 0i64;
			do
			{
				v44 = *(_DWORD*)((char*)&unk_140A1B148 + v43);
				*(_DWORD*)&v96[v43 + 48] = 0;
				v43 += 4i64;
				*(_DWORD*)&v96[v43 + 28] = v44;
				*(_QWORD*)v42 = 0i64;
				v42 += 8;
			} while (v43 < 16);
			v80[1] = v98;
			v81 = v101;
			v82 = v102;
			v80[2] = v99;
			v80[3] = v100;
			v87 = HIDWORD(v100) - v53;
			v88 = HIDWORD(v102) - v54;
			sub_140108F00(v33, v30, 0x140000000i64, v80);
			v45 = *(_QWORD*)(v17 + 64);
			if (v45 == *(_QWORD*)(v17 + 72))
			{
				sub_140109F90((__int64*)(v17 + 48), *(__int64**)(v17 + 64), (__int64)v80);
			}
			else
			{
				if (v45)
					sub_1400FEB20(*(_QWORD*)(v17 + 64), (__int64)v80);
				*(_QWORD*)(v17 + 64) += 304i64;
			}
			v46 = v80[0];
			*(float*)(v17 + 112) = *(float*)(v17 + 112) + 1.0;
			if (v46)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
			sub_1401429A0(qword_140C63678, v92);
			sub_1401429A0(qword_140C63678, v91);
			sub_1401429A0(qword_140C63678, v31);
			sub_1401429A0(qword_140C63678, v27);
			v25 = v63;
		LABEL_45:
			v15 = v52;
		}
		else
		{
			switch (v15)
			{
			case 0:
				*(_QWORD*)&v76 = 0i64;
				TlsValue = &off_140B5E648;
				*((_QWORD*)&v76 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v72 = TlsValue;
				v63 = 0x141D15100i64;
				v73 = v76;
				v48 = sub_140196F30(&dword_140C8A100, 13, &v63, &v72);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v76 + 1));
				if (v48)
					DebugBreak();
				goto LABEL_45;
			case 1:
			case 2:
			case 4:
			case 5:
				goto LABEL_54;
			case 3:
				if (v79[2])
					sub_140100EC0(v17, *(_QWORD*)(v79[1] + 56));
				else
					LABEL_54 :
					sub_140100EC0(v17, *(_QWORD*)(v79[0] + 56));
				break;
			default:
				break;
			}
		}
		if (v16)
		{
			v47 = *(int**)(a1 + 40);
			if (v47 == *(int**)(a1 + 48))
			{
				sub_1400B9430((_QWORD*)(a1 + 24), v47, &v68);
			}
			else
			{
				if (v47)
					*(_QWORD*)v47 = v17;
				*(_QWORD*)(a1 + 40) += 8i64;
			}
		}
		v79[v69 / 8] = v17;
		if ((v25 & *(_DWORD*)(a1 + 56)) != 0)
		{
			if (*(_BYTE*)(a1 + 180))
			{
				v49 = v71 - v67;
				v53 += v71 - v67;
				LODWORD(v98) = v53;
				v67 = v71;
				v71 = (unsigned int)(v49 + v71);
				v58 += v49;
				HIDWORD(v98) = v58;
				v66 += v49;
				LODWORD(v99) = v66;
				v60 += v49;
				HIDWORD(v99) = v60;
				v64 += v49;
				LODWORD(v100) = v64;
				v62 += v49;
				HIDWORD(v100) = v62;
			}
			else
			{
				v50 = v70 - v57;
				v54 += v70 - v57;
				LODWORD(v101) = v54;
				v57 = v70;
				v70 = (unsigned int)(v50 + v70);
				v59 += v50;
				DWORD1(v101) = v59;
				v61 += v50;
				DWORD2(v101) = v61;
				v55 += v50;
				HIDWORD(v101) = v55;
				v65 += v50;
				LODWORD(v102) = v65;
				v56 += v50;
				HIDWORD(v102) = v56;
			}
		}
		if (v18)
			sub_14018B900((__int64)v18, 0);
		v8 = v69 + 8;
		result = 0i64;
		v52 = v15 + 1;
		LODWORD(v63) = __ROL4__(v25, 1);
		v69 += 8i64;
	} while (v15 + 1 < 6);
	return result;
}
// 140A33098: using guessed type wchar_t *off_140A33098[25];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C8A100: using guessed type _DWORD dword_140C8A100;

