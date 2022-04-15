#include "../winhttp.h"

//----- (000000014074B1D0) ----------------------------------------------------
__int64 __fastcall sub_14074B1D0(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // r14d
	int v8; // ebx
	__int64 v9; // rax
	__int64* v10; // rax
	BOOL v11; // ebx
	BOOL* v12; // rcx
	__int64* v13; // rax
	_DWORD* v14; // rax
	__int64* v15; // rax
	int v16; // ebx
	__int64 v17; // rax
	__int64* v18; // rax
	int v19; // ebx
	__int64 v20; // rax
	__int64* v21; // rax
	int* v22; // rbx
	unsigned int v23; // ecx
	char v24; // al
	char v25; // al
	char v26; // al
	char v27; // al
	char v28; // al
	char v29; // al
	char v30; // al
	char v31; // al
	char v32; // al
	unsigned __int64 v33; // rcx
	__int16 v34; // ax
	unsigned __int64 v35; // rax
	unsigned __int64 v36; // rax
	__int64* v37; // rax
	int* v38; // rdx
	int* v39; // rcx
	__int64 v40; // rax
	__int128 v41; // xmm0
	__int128 v42; // xmm1
	__int128 v43; // xmm0
	__int128 v44; // xmm1
	__int128 v45; // xmm0
	__int128 v46; // xmm1
	__int128 v47; // xmm0
	__int128 v48; // xmm1
	__int128 v49; // xmm1
	__int64 v50; // rax
	__int128 v51; // xmm0
	__int64 v52; // rax
	__int64 v53; // rdx
	char v55[32]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v56; // [rsp+50h] [rbp-B0h] BYREF
	int v57; // [rsp+58h] [rbp-A8h]
	__int64 v58; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v59; // [rsp+68h] [rbp-98h]
	_WORD v60[8]; // [rsp+70h] [rbp-90h] BYREF
	__int64(__fastcall * *v61)(); // [rsp+80h] [rbp-80h] BYREF
	int v62; // [rsp+88h] [rbp-78h]
	int* v63; // [rsp+90h] [rbp-70h]
	__int64 v64; // [rsp+98h] [rbp-68h]
	__int64 v65; // [rsp+A0h] [rbp-60h]
	__int64 v66; // [rsp+A8h] [rbp-58h]
	__int64 v67; // [rsp+B0h] [rbp-50h]
	_WORD* v68; // [rsp+B8h] [rbp-48h]
	__int64 v69; // [rsp+C0h] [rbp-40h]
	int v70; // [rsp+C8h] [rbp-38h]
	__int128 v71; // [rsp+D0h] [rbp-30h]
	int v72; // [rsp+E0h] [rbp-20h]
	__int64 v73; // [rsp+E8h] [rbp-18h]
	__int64* v74; // [rsp+F0h] [rbp-10h]
	__int64 v75; // [rsp+FCh] [rbp-4h]
	int v76; // [rsp+104h] [rbp+4h]
	__int64 v77; // [rsp+108h] [rbp+8h]
	__int64 v78; // [rsp+110h] [rbp+10h]
	__int64 v79; // [rsp+118h] [rbp+18h]
	__int128 v80; // [rsp+120h] [rbp+20h]
	__int64 v81; // [rsp+130h] [rbp+30h]
	int v82; // [rsp+14Ch] [rbp+4Ch]
	__int64 v83; // [rsp+198h] [rbp+98h]
	__int64 v84; // [rsp+1A0h] [rbp+A0h]
	__int64 v85; // [rsp+1A8h] [rbp+A8h]
	__int64 v86; // [rsp+1B0h] [rbp+B0h]
	__int64 v87; // [rsp+1B8h] [rbp+B8h]
	__int64 v88[4]; // [rsp+1F0h] [rbp+F0h] BYREF
	int v89[178]; // [rsp+210h] [rbp+110h] BYREF
	__int64 v90; // [rsp+4D8h] [rbp+3D8h]
	__int64 v91; // [rsp+4E0h] [rbp+3E0h]
	__int64 v92; // [rsp+4F0h] [rbp+3F0h]
	int v93; // [rsp+688h] [rbp+588h]
	int v94; // [rsp+690h] [rbp+590h]
	int v95; // [rsp+694h] [rbp+594h]
	int v96[80]; // [rsp+6B0h] [rbp+5B0h] BYREF

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	v7 = 0;
	if (v6)
		v7 = *(_DWORD*)(v6 + 8);
	v8 = *(_DWORD*)a2;
	sub_140058710((__int64)a1, (unsigned __int64*)"nId", 3ui64);
	v9 = a1[2];
	*(_DWORD*)(v9 + 8) = 3;
	*(double*)v9 = (double)v8;
	a1[2] += 16i64;
	v10 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v10, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v11 = *(_DWORD*)(a2 + 4) == v7;
	sub_140058710((__int64)a1, (unsigned __int64*)"bIsMine", 7ui64);
	v12 = (BOOL*)a1[2];
	v12[2] = 1;
	*v12 = v11;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"bIsMoney", 8ui64);
	v14 = (_DWORD*)a1[2];
	*v14 = 0;
	v14[2] = 1;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v16 = *(_DWORD*)(a2 + 24);
	sub_140058710((__int64)a1, (unsigned __int64*)"nQuantity", 9ui64);
	v17 = a1[2];
	*(_DWORD*)(v17 + 8) = 3;
	*(double*)v17 = (double)v16;
	a1[2] += 16i64;
	v18 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v18, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v19 = *(_DWORD*)(a2 + 8);
	sub_140058710((__int64)a1, (unsigned __int64*)"nItemId", 7ui64);
	v20 = a1[2];
	*(_DWORD*)(v20 + 8) = 3;
	*(double*)v20 = (double)v19;
	a1[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v22 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a2 + 8), 0i64);
	if (v22)
	{
		sub_14040FAE0((__int64)v88);
		if (v94 <= 6)
		{
			v88[1] = (__int64)v22;
			v94 = 6;
		}
		v23 = *(_DWORD*)(a2 + 40);
		WORD1(v59) = 0;
		v24 = v23 & 7;
		v23 >>= 3;
		BYTE1(v59) = v24;
		v25 = v23;
		v23 >>= 3;
		LOBYTE(v59) = v25 & 7;
		v26 = v23;
		v23 >>= 1;
		HIDWORD(v59) = v26 & 1;
		v27 = v23;
		v23 >>= 3;
		LOBYTE(v58) = v27 & 7;
		v28 = v23;
		v23 >>= 3;
		BYTE1(v58) = v28 & 7;
		v29 = v23;
		v23 >>= 3;
		BYTE2(v58) = v29 & 7;
		v30 = v23;
		v23 >>= 3;
		BYTE3(v58) = v30 & 7;
		v31 = v23;
		v23 >>= 3;
		BYTE4(v58) = v31 & 7;
		v32 = v23;
		v23 >>= 3;
		BYTE5(v58) = v32 & 7;
		BYTE6(v58) = v23 & 7;
		HIBYTE(v58) = (v23 >> 3) & 7;
		v33 = *(_QWORD*)(a2 + 48) >> 4;
		v60[0] = *(_QWORD*)(a2 + 48) & 0xF;
		v34 = v33;
		v33 >>= 10;
		v60[1] = v34 & 0x3FF;
		v60[2] = v33 & 0x3FF;
		v60[3] = (v33 >> 10) & 0x3FF;
		v56 = 0i64;
		v57 = 0;
		v35 = *(_QWORD*)(a2 + 32);
		if (v35)
		{
			LOBYTE(v56) = *(_QWORD*)(a2 + 32);
			v36 = v35 >> 8;
			BYTE1(v56) = v36;
			v36 >>= 8;
			BYTE2(v56) = v36;
			v36 >>= 8;
			BYTE3(v56) = v36;
			v36 >>= 8;
			BYTE4(v56) = v36;
			v36 >>= 8;
			BYTE5(v56) = v36;
			v36 >>= 8;
			BYTE6(v56) = v36;
			v57 = BYTE1(v36);
		}
		else
		{
			v56 = 0i64;
			v57 = (unsigned int)(v22[80] - 1) > 1;
		}
		v61 = off_140B66A40;
		v62 = 0;
		v71 = 0i64;
		v80 = 0i64;
		v63 = 0i64;
		v64 = 1i64;
		v76 = 1;
		v65 = 0i64;
		v66 = 0i64;
		v67 = 0i64;
		v68 = 0i64;
		v69 = 0i64;
		v70 = 0;
		v72 = 0;
		v73 = 0i64;
		v74 = 0i64;
		v75 = 0i64;
		v77 = 0i64;
		v78 = 0i64;
		v79 = 0i64;
		v81 = 0i64;
		v82 = 0;
		v83 = 0i64;
		v84 = 0i64;
		v85 = 0i64;
		v86 = 0i64;
		v87 = 0i64;
		v37 = (__int64*)sub_140445210((__int64)v55);
		v63 = v22;
		v64 = *v37;
		v65 = v37[1];
		v66 = v37[2];
		v67 = v37[3];
		LODWORD(v37) = *(_DWORD*)(a2 + 56);
		v70 = 5;
		v69 = (unsigned int)v37 | 0x100000000i64;
		v72 = 0;
		*(_QWORD*)&v71 = a2 + 60;
		v73 = 0i64;
		*((_QWORD*)&v71 + 1) = &v56;
		v68 = v60;
		v74 = &v58;
		sub_1400B52A0((__int64)v96);
		if (!(unsigned int)sub_14040C310((__int64)&v61, (__int64)v96, qword_140C658F0, 0i64, 0i64, 0i64))
		{
			if (v93 <= 6)
			{
				v38 = v96;
				v39 = v89;
				if ((((unsigned __int8)v89 | (unsigned __int8)v96) & 0xF) != 0)
				{
					sub_1407DB590(v89, v96, 0x138ui64);
				}
				else
				{
					v40 = 2i64;
					do
					{
						v41 = *(_OWORD*)v38;
						v42 = *((_OWORD*)v38 + 1);
						v39 += 32;
						v38 += 32;
						*((_OWORD*)v39 - 8) = v41;
						v43 = *((_OWORD*)v38 - 6);
						*((_OWORD*)v39 - 7) = v42;
						v44 = *((_OWORD*)v38 - 5);
						*((_OWORD*)v39 - 6) = v43;
						v45 = *((_OWORD*)v38 - 4);
						*((_OWORD*)v39 - 5) = v44;
						v46 = *((_OWORD*)v38 - 3);
						*((_OWORD*)v39 - 4) = v45;
						v47 = *((_OWORD*)v38 - 2);
						*((_OWORD*)v39 - 3) = v46;
						v48 = *((_OWORD*)v38 - 1);
						*((_OWORD*)v39 - 2) = v47;
						*((_OWORD*)v39 - 1) = v48;
						--v40;
					} while (v40);
					v49 = *((_OWORD*)v38 + 1);
					v50 = *((_QWORD*)v38 + 6);
					*(_OWORD*)v39 = *(_OWORD*)v38;
					v51 = *((_OWORD*)v38 + 2);
					*((_OWORD*)v39 + 1) = v49;
					*((_OWORD*)v39 + 2) = v51;
					*((_QWORD*)v39 + 6) = v50;
				}
				v93 = 6;
			}
			if (v95 <= 6)
			{
				v95 = 6;
				v90 = v58;
				v91 = v59;
				if (v88[0])
				{
					v52 = *(_QWORD*)(v88[0] + 88);
					if (v52)
					{
						if (*(int*)(v52 + 8) < 1)
						{
							v95 = 0;
							v90 = 0i64;
							v91 = 0i64;
						}
					}
				}
			}
		}
		sub_140058710((__int64)a1, (unsigned __int64*)"itemTrading", 0xBui64);
		sub_140415BB0(a1, (__int64)v88);
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		sub_1400F0090((__int64)a1, v53, (unsigned __int64*)"strIcon", *((unsigned __int16**)v22 + 61));
		if (v88[0])
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v88[0] + 8i64))(v88[0]);
			v88[0] = 0i64;
		}
		if (v92)
			sub_14018B900(v92, 0);
	}
	return 1i64;
}
// 14074B86C: variable 'v53' is possibly undefined
// 140B66A40: using guessed type __int64 (__fastcall *off_140B66A40[121])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14074B1D0: using guessed type _WORD var_7B0[8];
// 14074B1D0: using guessed type char var_7F0[32];
// 14074B1D0: using guessed type int var_170[80];
// 14074B1D0: using guessed type int var_610[178];

