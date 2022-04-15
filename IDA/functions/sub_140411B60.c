#include "../winhttp.h"

//----- (0000000140411B60) ----------------------------------------------------
_BOOL8 __fastcall sub_140411B60(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rbx
	BOOL v5; // r14d
	int* v6; // rax
	int v7; // ecx
	bool v8; // zf
	int v9; // ecx
	unsigned int v10; // edx
	_DWORD* v11; // rax
	__int64 v12; // r8
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rax
	unsigned __int64 v15; // rax
	unsigned int v16; // ecx
	char v17; // al
	unsigned int v18; // eax
	int v19; // eax
	int* v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rax
	__int128 v23; // xmm0
	__int128 v24; // xmm1
	__int128 v25; // xmm0
	__int128 v26; // xmm1
	__int128 v27; // xmm0
	__int128 v28; // xmm1
	__int128 v29; // xmm0
	__int128 v30; // xmm1
	__int128 v31; // xmm1
	__int64 v32; // rax
	__int128 v33; // xmm0
	__int64* v34; // rdx
	int* v35; // rcx
	__int64 v36; // rax
	__int128 v37; // xmm0
	__int128 v38; // xmm1
	__int128 v39; // xmm0
	__int128 v40; // xmm1
	__int128 v41; // xmm0
	__int128 v42; // xmm1
	__int128 v43; // xmm0
	__int128 v44; // xmm1
	unsigned int v45; // eax
	__int64 v46; // rcx
	int v47; // eax
	__int64 v48; // r8
	int* v49; // rdx
	__int64 v50; // rcx
	__int64 v51; // rax
	int* v52; // r15
	__int64 v53; // rdi
	signed __int64 v54; // rdi
	int* v55; // r8
	int v56; // ecx
	__int64* v57; // rcx
	__int64 v58; // r10
	unsigned __int64 v59; // r9
	int* v60; // rdx
	__int64 v61; // r10
	__int16* v62; // rax
	__int64 v63; // rcx
	int* v64; // r12
	__int64 v65; // rdi
	signed __int64 v66; // rdi
	__int64 v67; // r10
	unsigned __int64 v68; // r9
	int* v69; // rdx
	__int64 v70; // r10
	__int64 v72[4]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v73[2]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v74; // [rsp+70h] [rbp-90h] BYREF
	int v75; // [rsp+78h] [rbp-88h]
	unsigned int v76; // [rsp+80h] [rbp-80h] BYREF
	unsigned int v77; // [rsp+84h] [rbp-7Ch]
	__int64 v78; // [rsp+88h] [rbp-78h]
	_WORD v79[8]; // [rsp+90h] [rbp-70h] BYREF
	__int64(__fastcall * *v80)(); // [rsp+A0h] [rbp-60h] BYREF
	int v81; // [rsp+A8h] [rbp-58h]
	__int64 v82; // [rsp+B0h] [rbp-50h]
	__int64 v83; // [rsp+B8h] [rbp-48h]
	__int64 v84; // [rsp+C0h] [rbp-40h]
	__int64 v85; // [rsp+C8h] [rbp-38h]
	__int64 v86; // [rsp+D0h] [rbp-30h]
	_WORD* v87; // [rsp+D8h] [rbp-28h]
	__int64 v88; // [rsp+E0h] [rbp-20h]
	int v89; // [rsp+E8h] [rbp-18h]
	__int128 v90; // [rsp+F0h] [rbp-10h]
	int v91; // [rsp+100h] [rbp+0h]
	__int64 v92; // [rsp+108h] [rbp+8h]
	unsigned int* v93; // [rsp+110h] [rbp+10h]
	__int64 v94; // [rsp+11Ch] [rbp+1Ch]
	int v95; // [rsp+124h] [rbp+24h]
	__int64 v96; // [rsp+128h] [rbp+28h]
	__int64 v97; // [rsp+130h] [rbp+30h]
	__int64 v98; // [rsp+138h] [rbp+38h]
	__int128 v99; // [rsp+140h] [rbp+40h]
	__int64 v100; // [rsp+150h] [rbp+50h]
	int v101; // [rsp+16Ch] [rbp+6Ch]
	__int64 v102; // [rsp+1B8h] [rbp+B8h]
	__int64 v103; // [rsp+1C0h] [rbp+C0h]
	__int64 v104; // [rsp+1C8h] [rbp+C8h]
	__int64 v105; // [rsp+1D0h] [rbp+D0h]
	__int64 v106; // [rsp+1D8h] [rbp+D8h]
	__int64 v107[7]; // [rsp+210h] [rbp+110h] BYREF
	int v108; // [rsp+248h] [rbp+148h]
	int v109[80]; // [rsp+3A0h] [rbp+2A0h] BYREF
	int v110[20]; // [rsp+4E0h] [rbp+3E0h] BYREF

	v4 = 0i64;
	v5 = sub_140410300(a1, 0i64, 0) != 0;
	v6 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a2 + 16), 0i64);
	v7 = *(_DWORD*)(a1 + 1184);
	if (v7 > 6)
		goto LABEL_11;
	if (!v6)
	{
		if (!v7)
			goto LABEL_11;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 1184) = 0;
		goto LABEL_10;
	}
	if (v6 != *(int**)(a1 + 8) || (v8 = v7 == 6, v9 = 0, !v8))
		v9 = 1;
	*(_QWORD*)(a1 + 8) = v6;
	*(_DWORD*)(a1 + 1184) = 6;
	if (v9)
		LABEL_10:
	v5 = 1;
LABEL_11:
	if (*(_QWORD*)(a2 + 40)
		|| *(_DWORD*)(a2 + 48)
		|| *(_QWORD*)(a2 + 56)
		|| *(_BYTE*)(a2 + 116)
		|| *(_BYTE*)(a2 + 128)
		|| *(_DWORD*)(a2 + 112)
		|| *(_DWORD*)(a2 + 160))
	{
		v10 = *(_DWORD*)(a2 + 160);
		v80 = off_140B66A40;
		v90 = 0i64;
		v99 = 0i64;
		v81 = 0;
		v82 = 0i64;
		v95 = 1;
		v83 = 1i64;
		v84 = 0i64;
		v85 = 0i64;
		v86 = 0i64;
		v87 = 0i64;
		v88 = 0i64;
		v89 = 0;
		v91 = 0;
		v92 = 0i64;
		v93 = 0i64;
		v94 = 0i64;
		v96 = 0i64;
		v97 = 0i64;
		v98 = 0i64;
		v100 = 0i64;
		v101 = 0;
		v102 = 0i64;
		v103 = 0i64;
		v104 = 0i64;
		v105 = 0i64;
		v106 = 0i64;
		v11 = sub_140445320(v72, v10);
		v12 = *(_QWORD*)(a1 + 8);
		v82 = v12;
		v83 = *(_QWORD*)v11;
		v84 = *((_QWORD*)v11 + 1);
		LODWORD(v85) = v11[4];
		v13 = *(_QWORD*)(a2 + 56);
		HIDWORD(v85) = v11[5];
		v86 = *((_QWORD*)v11 + 3);
		LOBYTE(v11) = v13;
		v13 >>= 4;
		v79[0] = (unsigned __int8)v11 & 0xF;
		LOWORD(v11) = v13;
		v13 >>= 10;
		v79[1] = (unsigned __int16)v11 & 0x3FF;
		v79[2] = v13 & 0x3FF;
		v79[3] = (v13 >> 10) & 0x3FF;
		v87 = v79;
		v74 = 0i64;
		v75 = 0;
		v14 = *(_QWORD*)(a2 + 40);
		if (v14)
		{
			LOBYTE(v74) = *(_QWORD*)(a2 + 40);
			v15 = v14 >> 8;
			BYTE1(v74) = v15;
			v15 >>= 8;
			BYTE2(v74) = v15;
			v15 >>= 8;
			BYTE3(v74) = v15;
			v15 >>= 8;
			BYTE4(v74) = v15;
			v15 >>= 8;
			BYTE5(v74) = v15;
			v15 >>= 8;
			BYTE6(v74) = v15;
			v75 = BYTE1(v15);
		}
		else
		{
			v74 = 0i64;
			v75 = 1;
			if (v12 && (unsigned int)(*(_DWORD*)(v12 + 320) - 1) <= 1)
				v75 = 0;
		}
		v16 = *(_DWORD*)(a2 + 48);
		v88 = *(unsigned int*)(a2 + 112) | 0x100000000i64;
		v89 = *(unsigned __int8*)(a2 + 116);
		*(_QWORD*)&v90 = *(_QWORD*)(a2 + 120);
		*((_QWORD*)&v90 + 1) = &v74;
		WORD1(v78) = 0;
		v17 = v16 & 7;
		v16 >>= 3;
		BYTE1(v78) = v17;
		LOBYTE(v78) = v16 & 7;
		v18 = v16 >> 3;
		v16 >>= 4;
		HIDWORD(v78) = v18 & 1;
		LOBYTE(v18) = v16;
		v16 >>= 3;
		LOBYTE(v76) = v18 & 7;
		LOBYTE(v18) = v16;
		v16 >>= 3;
		BYTE1(v76) = v18 & 7;
		LOBYTE(v18) = v16;
		v16 >>= 3;
		BYTE2(v76) = v18 & 7;
		LOBYTE(v18) = v16;
		v16 >>= 3;
		HIBYTE(v76) = v18 & 7;
		LOBYTE(v18) = v16;
		v16 >>= 3;
		LOBYTE(v77) = v18 & 7;
		LOBYTE(v18) = v16;
		v16 >>= 3;
		BYTE1(v77) = v18 & 7;
		HIWORD(v77) = v16 & 7;
		v19 = *(unsigned __int8*)(a2 + 128);
		HIBYTE(v77) = (v16 >> 3) & 7;
		v91 = v19;
		v92 = *(_QWORD*)(a2 + 136);
		v93 = &v76;
		sub_1400B52A0((__int64)v109);
		sub_1407E4830((int*)v107, 0i64, 0x190ui64);
		sub_1407E4830((int*)v107, 0i64, 0x90ui64);
		v107[0] = 0xC5000000C5i64;
		v107[1] = 0xC5000000C5i64;
		v107[2] = 0xC5000000C5i64;
		v107[3] = 0xC5000000C5i64;
		v107[4] = 0xC5000000C5i64;
		v107[5] = 0xC5000000C5i64;
		v107[6] = 0xC5000000C5i64;
		v108 = 197;
		sub_14040C310((__int64)&v80, (__int64)v109, qword_140C658F0, (__int64)v107, 0i64, 0i64);
		if (*(int*)(a1 + 1176) <= 6)
		{
			v20 = v109;
			v21 = a1 + 32;
			if ((((unsigned __int8)(a1 + 32) | (unsigned __int8)v109) & 0xF) != 0)
			{
				sub_1407DB590((int*)v21, v109, 0x138ui64);
			}
			else
			{
				v22 = 2i64;
				do
				{
					v23 = *(_OWORD*)v20;
					v24 = *((_OWORD*)v20 + 1);
					v21 += 128i64;
					v20 += 32;
					*(_OWORD*)(v21 - 128) = v23;
					v25 = *((_OWORD*)v20 - 6);
					*(_OWORD*)(v21 - 112) = v24;
					v26 = *((_OWORD*)v20 - 5);
					*(_OWORD*)(v21 - 96) = v25;
					v27 = *((_OWORD*)v20 - 4);
					*(_OWORD*)(v21 - 80) = v26;
					v28 = *((_OWORD*)v20 - 3);
					*(_OWORD*)(v21 - 64) = v27;
					v29 = *((_OWORD*)v20 - 2);
					*(_OWORD*)(v21 - 48) = v28;
					v30 = *((_OWORD*)v20 - 1);
					*(_OWORD*)(v21 - 32) = v29;
					*(_OWORD*)(v21 - 16) = v30;
					--v22;
				} while (v22);
				v31 = *((_OWORD*)v20 + 1);
				v32 = *((_QWORD*)v20 + 6);
				*(_OWORD*)v21 = *(_OWORD*)v20;
				v33 = *((_OWORD*)v20 + 2);
				*(_OWORD*)(v21 + 16) = v31;
				*(_OWORD*)(v21 + 32) = v33;
				*(_QWORD*)(v21 + 48) = v32;
			}
			*(_DWORD*)(a1 + 1176) = 6;
			v5 = 1;
		}
		if (*(int*)(a1 + 1180) <= 6)
		{
			v34 = v107;
			v35 = (int*)(a1 + 344);
			if ((((unsigned __int8)(a1 + 88) | (unsigned __int8)v107) & 0xF) != 0)
			{
				sub_1407DB590(v35, (int*)v107, 0x190ui64);
			}
			else
			{
				v36 = 3i64;
				do
				{
					v37 = *(_OWORD*)v34;
					v38 = *((_OWORD*)v34 + 1);
					v35 += 32;
					v34 += 16;
					*((_OWORD*)v35 - 8) = v37;
					v39 = *((_OWORD*)v34 - 6);
					*((_OWORD*)v35 - 7) = v38;
					v40 = *((_OWORD*)v34 - 5);
					*((_OWORD*)v35 - 6) = v39;
					v41 = *((_OWORD*)v34 - 4);
					*((_OWORD*)v35 - 5) = v40;
					v42 = *((_OWORD*)v34 - 3);
					*((_OWORD*)v35 - 4) = v41;
					v43 = *((_OWORD*)v34 - 2);
					*((_OWORD*)v35 - 3) = v42;
					v44 = *((_OWORD*)v34 - 1);
					*((_OWORD*)v35 - 2) = v43;
					*((_OWORD*)v35 - 1) = v44;
					--v36;
				} while (v36);
				*(_OWORD*)v35 = *(_OWORD*)v34;
			}
			*(_DWORD*)(a1 + 1180) = 6;
			v5 = 1;
		}
		if (*(int*)(a1 + 1188) <= 6)
		{
			v45 = v76;
			*(_DWORD*)(a1 + 1188) = 6;
			*(_QWORD*)(a1 + 744) = __PAIR64__(v77, v45);
			*(_QWORD*)(a1 + 752) = v78;
			if (*(_QWORD*)a1)
			{
				v46 = *(_QWORD*)(*(_QWORD*)a1 + 88i64);
				if (v46)
				{
					if (*(int*)(v46 + 8) <= 0)
					{
						*(_QWORD*)(a1 + 744) = 0i64;
						*(_QWORD*)(a1 + 752) = 0i64;
						*(_DWORD*)(a1 + 1188) = 0;
					}
				}
			}
			v5 = 1;
		}
		v47 = *(_DWORD*)(a1 + 1192);
		v48 = *(unsigned __int8*)(a2 + 128);
		v49 = *(int**)(a2 + 136);
		if (v47 <= 6)
		{
			if (v49 && (unsigned int)v48 <= 8)
			{
				*(_QWORD*)(a1 + 1144) = 0i64;
				*(_QWORD*)(a1 + 1152) = 0i64;
				*(_QWORD*)(a1 + 1160) = 0i64;
				*(_QWORD*)(a1 + 1168) = 0i64;
				sub_1407DB590((int*)(a1 + 1144), v49, 4 * v48);
				*(_DWORD*)(a1 + 1192) = 6;
			}
			else
			{
				if (!v47)
					goto LABEL_50;
				*(_DWORD*)(a1 + 1192) = 0;
			}
			v5 = 1;
		}
	}
LABEL_50:
	if (!*(_QWORD*)(a2 + 8))
		return v5;
	v72[1] = *(_QWORD*)(a2 + 8);
	LODWORD(v72[0]) = *(_DWORD*)(qword_140C635F0 + 5760);
	v73[1] = 0i64;
	v73[0] = 0i64;
	if (!(unsigned int)sub_1403F82F0(qword_140C65898, 9, v72, v110, 0x21u, v73, 0i64))
	{
		v62 = sub_14034BDD0(v50, 479255);
		v63 = 0i64;
		v52 = 0i64;
		v64 = (int*)v62;
		if (*v62)
		{
			do
				++v63;
			while (v62[v63]);
		}
		v65 = (2 * v63) >> 1;
		if ((unsigned __int64)(v65 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v52 = sub_14018B280(2 * (v65 + 1), 0);
		v66 = 2 * v65;
		sub_1407DB590(v52, v64, v66);
		v55 = (int*)((char*)v52 + v66);
		if ((int*)((char*)v52 + v66))
			*(_WORD*)v55 = 0;
		v56 = *(_DWORD*)(a1 + 1196);
		if (v56 > 6)
			goto LABEL_84;
		if (v66 >> 1)
		{
			v57 = (__int64*)(a1 + 760);
			v67 = *(_QWORD*)(a1 + 768);
			v68 = (*(_QWORD*)(a1 + 776) - v67) >> 1;
			if (v68 == v66 >> 1 && v68)
			{
				v69 = v52;
				v70 = v67 - (_QWORD)v52;
				do
				{
					if (*(_WORD*)((char*)v69 + v70) != *(_WORD*)v69)
						break;
					++v4;
					v69 = (int*)((char*)v69 + 2);
				} while (v4 < v68);
			}
			goto LABEL_79;
		}
	LABEL_82:
		if (v56)
		{
			sub_14001C2B0(a1 + 760, *(int**)(a1 + 768), *(int**)(a1 + 776));
			*(_DWORD*)(a1 + 1196) = 0;
		}
		goto LABEL_84;
	}
	v51 = 0i64;
	v52 = 0i64;
	if (LOWORD(v110[0]))
	{
		do
			++v51;
		while (*((_WORD*)v110 + v51));
	}
	v53 = (2 * v51) >> 1;
	if ((unsigned __int64)(v53 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v52 = sub_14018B280(2 * (v53 + 1), 0);
	v54 = 2 * v53;
	sub_1407DB590(v52, v110, v54);
	v55 = (int*)((char*)v52 + v54);
	if ((int*)((char*)v52 + v54))
		*(_WORD*)v55 = 0;
	v56 = *(_DWORD*)(a1 + 1196);
	if (v56 > 6)
		goto LABEL_84;
	if (!(v54 >> 1))
		goto LABEL_82;
	v57 = (__int64*)(a1 + 760);
	v58 = *(_QWORD*)(a1 + 768);
	v59 = (*(_QWORD*)(a1 + 776) - v58) >> 1;
	if (v59 == v54 >> 1 && v59)
	{
		v60 = v52;
		v61 = v58 - (_QWORD)v52;
		do
		{
			if (*(_WORD*)((char*)v60 + v61) != *(_WORD*)v60)
				break;
			++v4;
			v60 = (int*)((char*)v60 + 2);
		} while (v4 < v59);
	}
LABEL_79:
	if (v72 != v57)
		sub_14001C480((__int64)v57, v52, v55);
	*(_DWORD*)(a1 + 1196) = 6;
LABEL_84:
	if (v52)
		sub_14018B900((__int64)v52, 0);
	return v5;
}
// 1404120D6: conditional instruction was optimized away because rcx.8!=0
// 1404122AE: variable 'v50' is possibly undefined
// 140B66A40: using guessed type __int64 (__fastcall *off_140B66A40[121])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140411B60: using guessed type _WORD var_4D0[8];
// 140411B60: using guessed type int var_1C0[80];

