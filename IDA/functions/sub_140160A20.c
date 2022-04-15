#include "../winhttp.h"

//----- (0000000140160A20) ----------------------------------------------------
void __fastcall sub_140160A20(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r8d
	int v4; // edx
	int v5; // ecx
	__int64 v6; // rax
	int v7; // eax
	int v8; // r9d
	unsigned int v9; // r8d
	int v10; // r13d
	__int64 v11; // rbx
	__int64 v12; // r15
	__int64 v13; // r11
	__int64 v14; // rax
	int v15; // eax
	unsigned int v16; // edx
	__int64 v17; // rcx
	int i; // r8d
	__int64 v19; // rax
	int v20; // eax
	unsigned __int64 v21; // r8
	__m128* v22; // r8
	_QWORD* v23; // rcx
	int v24; // r14d
	int v25; // r15d
	int v26; // edi
	int v27; // r12d
	unsigned int v28; // eax
	int v29; // r13d
	unsigned __int64 v30; // rbx
	_QWORD* v31; // rax
	int v32; // r11d
	int v33; // r9d
	unsigned int v34; // eax
	int v35; // edi
	int v36; // eax
	__m128* v37; // r8
	unsigned int v38; // eax
	int v39; // r13d
	_QWORD* v40; // rax
	int v41; // r11d
	int v42; // r9d
	unsigned int v43; // eax
	int v44; // edi
	int v45; // eax
	__m128* v46; // r8
	unsigned int v47; // eax
	unsigned int v48; // edi
	unsigned int v49; // ebx
	__int64 v50; // rdx
	__int64 v51; // rcx
	int v52; // r8d
	char v53; // r14
	__int64 v54; // r8
	__int64 v55; // rdx
	int* v56; // rcx
	__int64 v57; // [rsp+58h] [rbp-49h] BYREF
	__int64 v58; // [rsp+60h] [rbp-41h]
	__int64 v59; // [rsp+68h] [rbp-39h]
	int* v60; // [rsp+70h] [rbp-31h] BYREF
	int v61; // [rsp+78h] [rbp-29h] BYREF
	int v62; // [rsp+7Ch] [rbp-25h]
	int v63; // [rsp+80h] [rbp-21h]
	int v64; // [rsp+84h] [rbp-1Dh]
	int v65; // [rsp+88h] [rbp-19h] BYREF
	int v66; // [rsp+8Ch] [rbp-15h]
	int v67; // [rsp+90h] [rbp-11h]
	int v68; // [rsp+94h] [rbp-Dh]
	unsigned int v69; // [rsp+98h] [rbp-9h] BYREF
	int v70; // [rsp+9Ch] [rbp-5h]
	unsigned int v71; // [rsp+A0h] [rbp-1h]
	int v72; // [rsp+A4h] [rbp+3h]
	unsigned int v73[2]; // [rsp+A8h] [rbp+7h] BYREF
	int v74; // [rsp+B0h] [rbp+Fh]
	int v75; // [rsp+B4h] [rbp+13h]
	int* v76; // [rsp+108h] [rbp+67h] BYREF
	unsigned int v77; // [rsp+110h] [rbp+6Fh] BYREF
	__int64 v78; // [rsp+118h] [rbp+77h] BYREF
	__int64 v79; // [rsp+120h] [rbp+7Fh] BYREF

	if ((*(_BYTE*)(a1 + 664) & 2) != 0)
	{
		v2 = *(_DWORD*)(a1 + 724);
		v3 = *(_DWORD*)(a1 + 716);
		v4 = *(_DWORD*)(a1 + 720);
		v5 = *(_DWORD*)(a1 + 1024);
		v71 = v2;
		v6 = *(_QWORD*)(a1 + 464);
		v69 = v3;
		v70 = v4;
		v72 = v4 + v5;
		v7 = v6 ? *(_DWORD*)(v6 + 1300) : 0;
		v8 = *(_DWORD*)(a1 + 1144);
		v9 = v3 - v7;
		v10 = 0;
		v69 = v9;
		LODWORD(v76) = 0;
		if (v8 > 0)
		{
			v11 = 1i64;
			v12 = 0i64;
			v59 = 0i64;
			v58 = 1i64;
			while (1)
			{
				v13 = *(_QWORD*)(a1 + 1136);
				v14 = *(_QWORD*)(v12 + v13);
				if (!*(_BYTE*)(v14 + 1))
					break;
			LABEL_81:
				v8 = *(_DWORD*)(a1 + 1144);
				++v10;
				++v11;
				v12 += 8i64;
				LODWORD(v76) = v10;
				v58 = v11;
				v59 = v12;
				if (v10 >= v8)
					return;
			}
			if (v10 < 0 || v10 >= v8)
			{
				v15 = 0;
			}
			else if (v10 || (*(_BYTE*)(a1 + 664) & 1) != 0 && *(_QWORD*)(a1 + 1144) != 1i64)
			{
				v15 = *(_DWORD*)(v14 + 4);
			}
			else
			{
				v15 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
			}
			v16 = v15 + v9;
			v17 = v11;
			v71 = v15 + v9;
			for (i = v10 + 1; v17 < v8; v71 = v16)
			{
				v19 = *(_QWORD*)(v13 + 8 * v17);
				if (!*(_BYTE*)(v19 + 1))
					break;
				if (v17 < 0 || i >= v8)
					v20 = 0;
				else
					v20 = v17 || (*(_BYTE*)(a1 + 664) & 1) != 0 && *(_QWORD*)(a1 + 1144) != 1i64
					? *(_DWORD*)(v19 + 4)
					: *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
				v16 += v20;
				++v17;
				++i;
			}
			v21 = *(unsigned int*)(a1 + 2184);
			if (v21 >= *(_QWORD*)(qword_140C63678 + 48))
				v22 = *(__m128**)(qword_140C63678 + 40);
			else
				v22 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v21);
			v23 = *(_QWORD**)(a1 + 1208);
			if (v23)
				sub_140103CF0(
					v23,
					&v69,
					v22,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1216)) * *(float*)(a1 + 1220)));
			(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 144i64))(
				qword_140C65680,
				1i64,
				v22);
			v24 = v71 - 4;
			v25 = v72 - 2;
			v26 = v69 + 4;
			v27 = v70 + 2;
			v73[0] = v69 + 4;
			v73[1] = v70 + 2;
			v74 = v71 - 4;
			v75 = v72 - 2;
			if (*(_DWORD*)(a1 + 1060) != v10)
			{
			LABEL_69:
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				v47 = sub_140141F10(qword_140C63678, (__m128*) & xmmword_140C67350);
				v12 = v59;
				v48 = v47;
				v77 = v47;
				LODWORD(v76) = *(_DWORD*)(*(_QWORD*)(v59 + *(_QWORD*)(a1 + 1136)) + 76i64);
				v49 = (unsigned int)v76;
				if ((unsigned __int64)(unsigned int)v76 < *(_QWORD*)(qword_140C63678 + 48))
				{
					v50 = *(_QWORD*)(qword_140C63678 + 40);
					v51 = 32i64 * (unsigned int)v76;
					v52 = *(_DWORD*)(v51 + v50 + 16);
					if ((unsigned int)(v52 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v51 + v50 + 16) = v52 + 1;
				}
				v53 = sub_1401606F0(
					a1,
					v73,
					(__int64*)(*(_QWORD*)(v12 + *(_QWORD*)(a1 + 1136)) + 24i64),
					&v77,
					*(_QWORD*)(*(_QWORD*)(v12 + *(_QWORD*)(a1 + 1136)) + 16i64),
					(unsigned int*)&v76,
					4,
					0i64,
					0i64,
					1);
				sub_1401429A0(qword_140C63678, v49);
				sub_1401429A0(qword_140C63678, v48);
				v54 = *(_QWORD*)(a1 + 1176);
				v55 = *(_QWORD*)(v54 + 8);
				v56 = (int*)v54;
				while (v55)
				{
					if (*(_DWORD*)(v55 + 32) < (unsigned int)v10)
					{
						v55 = *(_QWORD*)(v55 + 24);
					}
					else
					{
						v56 = (int*)v55;
						v55 = *(_QWORD*)(v55 + 16);
					}
				}
				if (v56 == (int*)v54 || v10 < (unsigned int)v56[8])
				{
					v76 = v56;
					LODWORD(v57) = v10;
					BYTE4(v57) = 0;
					sub_140032B30(a1 + 1168, &v60, (__int64*)&v76, &v57);
					v56 = v60;
				}
				v11 = v58;
				*((_BYTE*)v56 + 36) = v53;
				v9 = v71;
				v69 = v71;
				goto LABEL_81;
			}
			if (*(_BYTE*)(a1 + 1064))
			{
				v28 = sub_140141F10(qword_140C63678, (__m128*) & xmmword_140C67350);
				v29 = *(_DWORD*)(a1 + 1096);
				v61 = v26;
				v30 = v28;
				v31 = *(_QWORD**)(a1 + 2088);
				v62 = v27;
				v63 = v24;
				v64 = v25;
				if (!v31)
				{
					v78 = 0i64;
				LABEL_68:
					sub_1401429A0(qword_140C63678, v30);
					v10 = (int)v76;
					v74 = v26;
					goto LABEL_69;
				}
				sub_140101470(v31, (int*)&v78);
				if (SHIDWORD(v78) <= 0)
					goto LABEL_68;
				if ((int)v78 <= 0)
					goto LABEL_68;
				v32 = v24 - v26;
				if (v24 - v26 <= 0)
					goto LABEL_68;
				v33 = v25 - v27;
				if (v25 - v27 <= 0)
					goto LABEL_68;
				v34 = v26 + v29;
				v35 = v27 + v29;
				v62 = v27 + v29;
				v61 = v34;
				v64 = v25 - v29;
				if (SHIDWORD(v78) > v33 || (int)v78 > v32)
				{
					if (SHIDWORD(v78) / v33 > (int)v78 / v32)
					{
						v61 = v24 - v33 * (int)v78 / SHIDWORD(v78);
					LABEL_47:
						if (v30 >= *(_QWORD*)(qword_140C63678 + 48))
							v37 = *(__m128**)(qword_140C63678 + 40);
						else
							v37 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v30);
						sub_140103CF0(
							*(_QWORD**)(a1 + 2088),
							(unsigned int*)&v61,
							v37,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2096)) * *(float*)(a1 + 2100)));
						v26 = v61;
						goto LABEL_68;
					}
					v62 = (v33 - v32 * HIDWORD(v78) / (int)v78) / 2 + v35;
					v36 = v32 * HIDWORD(v78) / (int)v78 + v62;
				}
				else
				{
					v62 = v35 + (v33 - HIDWORD(v78)) / 2;
					v36 = HIDWORD(v78) + v62;
					v61 = v24 - v78;
				}
				v64 = v36;
				goto LABEL_47;
			}
			v38 = sub_140141F10(qword_140C63678, (__m128*) & xmmword_140C67350);
			v39 = *(_DWORD*)(a1 + 1096);
			v65 = v26;
			v30 = v38;
			v40 = *(_QWORD**)(a1 + 2136);
			v66 = v27;
			v67 = v24;
			v68 = v25;
			if (!v40)
			{
				v79 = 0i64;
				goto LABEL_68;
			}
			sub_140101470(v40, (int*)&v79);
			if (SHIDWORD(v79) <= 0)
				goto LABEL_68;
			if ((int)v79 <= 0)
				goto LABEL_68;
			v41 = v24 - v26;
			if (v24 - v26 <= 0)
				goto LABEL_68;
			v42 = v25 - v27;
			if (v25 - v27 <= 0)
				goto LABEL_68;
			v43 = v26 + v39;
			v44 = v27 + v39;
			v66 = v27 + v39;
			v65 = v43;
			v68 = v25 - v39;
			if (SHIDWORD(v79) > v42 || (int)v79 > v41)
			{
				if (SHIDWORD(v79) / v42 > (int)v79 / v41)
				{
					v65 = v24 - v42 * (int)v79 / SHIDWORD(v79);
				LABEL_64:
					if (v30 >= *(_QWORD*)(qword_140C63678 + 48))
						v46 = *(__m128**)(qword_140C63678 + 40);
					else
						v46 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v30);
					sub_140103CF0(
						*(_QWORD**)(a1 + 2136),
						(unsigned int*)&v65,
						v46,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2144)) * *(float*)(a1 + 2148)));
					v26 = v65;
					goto LABEL_68;
				}
				v66 = (v42 - v41 * HIDWORD(v79) / (int)v79) / 2 + v44;
				v45 = v41 * HIDWORD(v79) / (int)v79 + v66;
			}
			else
			{
				v66 = v44 + (v42 - HIDWORD(v79)) / 2;
				v45 = HIDWORD(v79) + v66;
				v65 = v24 - v79;
			}
			v68 = v45;
			goto LABEL_64;
		}
	}
}
// 140160BFC: variable 'v22' is possibly undefined
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C67350: using guessed type __int128 xmmword_140C67350;

