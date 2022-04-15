#include "../winhttp.h"

//----- (000000014047ABA0) ----------------------------------------------------
__int64 __fastcall sub_14047ABA0(__int64 a1, __int64 a2)
{
	int v4; // edx
	int v5; // edx
	__int64 v6; // rax
	__int64 v7; // r10
	unsigned __int64 v8; // rcx
	__int64 v9; // r9
	__int64 v10; // r15
	unsigned int v11; // eax
	__int64 v12; // r11
	int v13; // eax
	__int64 v14; // rdi
	__int64 v15; // rsi
	__int64 v16; // rax
	__int64 v17; // rsi
	__int64 v18; // r14
	__int64* v19; // rdx
	int* v20; // r8
	__int64 v21; // r10
	int v22; // eax
	__int64 v23; // rax
	unsigned __int64 v24; // rax
	unsigned int v25; // edi
	unsigned int v26; // r11d
	unsigned int v27; // ecx
	int* v28; // rax
	int* v29; // r14
	signed __int64 v31; // r8
	__int64* v32; // rcx
	int* v33; // rdx
	__int64 v34; // r10
	int v35; // eax
	unsigned __int64 v36; // rax
	unsigned int v37; // esi
	unsigned int v38; // edi
	unsigned int v39; // r11d
	__int64 v40; // rax
	__int64 v41; // rax
	__int64 v42; // rax
	float v43; // xmm2_4
	float v44; // xmm3_4
	unsigned __int64 v45; // rcx
	float v46; // xmm1_4
	unsigned __int64 v47; // rcx
	float v48; // xmm1_4
	unsigned __int64 v49; // rcx
	float v50; // xmm1_4
	unsigned __int64 v51; // rcx
	float v52; // xmm1_4
	__int64 v53; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v54; // [rsp+40h] [rbp-C0h]
	__int64 v55; // [rsp+48h] [rbp-B8h]
	__int64 v56; // [rsp+50h] [rbp-B0h]
	__int64 v57; // [rsp+58h] [rbp-A8h]
	__int64 v58; // [rsp+60h] [rbp-A0h]
	__int64 v59; // [rsp+68h] [rbp-98h] BYREF
	__int64 v60; // [rsp+70h] [rbp-90h]
	__int64 v61; // [rsp+78h] [rbp-88h]
	__int64 v62; // [rsp+80h] [rbp-80h]
	__int64 v63; // [rsp+88h] [rbp-78h]
	__int64 v64; // [rsp+90h] [rbp-70h]
	__int64 v65; // [rsp+A0h] [rbp-60h] BYREF
	int v66; // [rsp+A8h] [rbp-58h]
	__int64 v67; // [rsp+B0h] [rbp-50h]
	int v68; // [rsp+B8h] [rbp-48h]
	int v69; // [rsp+BCh] [rbp-44h]
	int v70; // [rsp+C0h] [rbp-40h]
	__int64 v71; // [rsp+D0h] [rbp-30h]
	int v72; // [rsp+D8h] [rbp-28h]
	__int64 v73; // [rsp+128h] [rbp+28h]
	__int64 v74; // [rsp+130h] [rbp+30h]
	__int64 v75; // [rsp+138h] [rbp+38h]
	__int64 v76; // [rsp+140h] [rbp+40h]
	__int64 v77; // [rsp+148h] [rbp+48h]
	__int64 v78; // [rsp+150h] [rbp+50h]
	__int64 v79; // [rsp+158h] [rbp+58h]
	__int64 v80; // [rsp+160h] [rbp+60h]
	__int64 v81; // [rsp+168h] [rbp+68h]
	__int64 v82; // [rsp+170h] [rbp+70h]
	__int64 v83; // [rsp+178h] [rbp+78h]
	__int64 v84; // [rsp+180h] [rbp+80h]
	int v85; // [rsp+188h] [rbp+88h]
	int v86; // [rsp+18Ch] [rbp+8Ch]
	int v87; // [rsp+190h] [rbp+90h]
	int v88; // [rsp+194h] [rbp+94h]

	sub_1403B8CE0(&v65);
	sub_1407E4830((int*)&v65, 0i64, 0x100ui64);
	v4 = *(_DWORD*)(a2 + 4);
	if (!v4)
	{
		v28 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a2 + 8), 0i64);
		v29 = v28;
		if (v28)
		{
			v10 = *((_QWORD*)v28 + 61);
			v68 = v28[120];
			v70 = v28[107];
			v67 = v10;
			v53 = 0i64;
			v54 = 1i64;
			v55 = 0i64;
			v31 = (char*)v28 - (char*)&v53;
			v56 = 0i64;
			v57 = 1i64;
			v58 = 0i64;
			v32 = &v53;
			v33 = (int*)(a2 + 52);
			v34 = 2i64;
			do
			{
				v35 = *v33;
				if (*v33)
				{
					if (v35 == 3)
						v37 = v33[2];
					else
						v37 = 0;
					if (v35 == 1)
						v38 = v33[2];
					else
						v38 = 0;
					if (v35 == 2)
						v39 = v33[2];
					else
						v39 = 15;
					*v32 = (unsigned int)v33[1];
					v32[1] = v39;
					v36 = __PAIR64__(v37, v38);
				}
				else
				{
					*v32 = *(__int64*)((char*)v32 + v31 + 48);
					v32[1] = *(__int64*)((char*)v32 + v31 + 56);
					v36 = *(__int64*)((char*)v32 + v31 + 64);
				}
				v32[2] = v36;
				v32 += 3;
				v33 += 3;
				--v34;
			} while (v34);
			v15 = *((_QWORD*)v29 + 15);
			v12 = v53;
			v14 = v56;
			v9 = *((_QWORD*)v29 + 12);
			v77 = v57;
			v40 = *((_QWORD*)v29 + 13);
			v74 = v54;
			v75 = v55;
			v80 = v40;
			v41 = *((_QWORD*)v29 + 14);
			v78 = v58;
			v81 = v41;
			v42 = *((_QWORD*)v29 + 16);
			v82 = v15;
			v83 = v42;
			v84 = *((_QWORD*)v29 + 17);
			v13 = v29[119];
			goto LABEL_44;
		}
		return 2147500037i64;
	}
	v5 = v4 - 4;
	if (!v5)
	{
		v16 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(a2 + 8), a1);
		v17 = v16;
		if (v16)
		{
			v18 = *(_QWORD*)(v16 + 8);
			v9 = 0i64;
			v70 = 1;
			v10 = *(_QWORD*)v18;
			v68 = 0;
			v59 = 0i64;
			v60 = 1i64;
			v61 = 0i64;
			v62 = 0i64;
			v67 = v10;
			v63 = 1i64;
			v64 = 0i64;
			v19 = &v59;
			v20 = (int*)(a2 + 52);
			v21 = 2i64;
			do
			{
				v22 = *v20;
				if (*v20)
				{
					if (v22 == 3)
						v25 = v20[2];
					else
						v25 = 0;
					if (v22 == 1)
						v26 = v20[2];
					else
						v26 = 0;
					if (v22 == 2)
						v27 = v20[2];
					else
						v27 = 15;
					*v19 = (unsigned int)v20[1];
					v19[1] = v27;
					v24 = __PAIR64__(v25, v26);
				}
				else
				{
					v23 = *(_QWORD*)(v17 + 112);
					v54 = 1i64;
					v55 = 0i64;
					*v19 = *(unsigned int*)(v23 + 400);
					v19[1] = 1i64;
					v24 = 0i64;
				}
				v19[2] = v24;
				v19 += 3;
				v20 += 3;
				--v21;
			} while (v21);
			v12 = v59;
			v14 = v62;
			v77 = v63;
			v74 = v60;
			v78 = v64;
			v83 = 1i64;
			v13 = *(_DWORD*)(v18 + 16);
			v75 = v61;
			LODWORD(v15) = 0;
			v80 = 1i64;
			v81 = 0i64;
			v82 = 0i64;
			v84 = 0i64;
		LABEL_44:
			v76 = v14;
			goto LABEL_45;
		}
		return 2147500037i64;
	}
	if (v5 != 1)
		return 2147500037i64;
	v6 = sub_1401FA4A0(*(_DWORD*)(a2 + 8));
	v7 = v6;
	if (!v6)
		return 2147500037i64;
	v8 = *(_QWORD*)(v6 + 24);
	v9 = 0i64;
	if (v8)
	{
		if (v8 <= qword_140C3FE70)
			v10 = v8 + qword_140C3FE68;
		else
			v10 = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = *(_DWORD*)(a2 + 12);
	v12 = *(unsigned int*)(a2 + 24);
	v77 = 1i64;
	v74 = v11;
	v54 = 1i64;
	v75 = 0i64;
	v55 = 0i64;
	v83 = 1i64;
	v13 = *(_DWORD*)(v7 + 16);
	v67 = v10;
	v68 = 0;
	v70 = 1;
	LODWORD(v14) = 0;
	v76 = 0i64;
	v78 = 0i64;
	v55 = 0i64;
	v80 = 1i64;
	v81 = 0i64;
	LODWORD(v15) = 0;
	v82 = 0i64;
	v84 = 0i64;
LABEL_45:
	v73 = v12;
	v79 = v9;
	v85 = v13;
	if (!v10)
		return 2147500037i64;
	v43 = *(float*)(a1 + 14044);
	v44 = *(float*)(a1 + 14048);
	HIDWORD(v65) = *(_DWORD*)(a2 + 4);
	v66 = *(_DWORD*)(a2 + 8);
	LODWORD(v65) = *(_DWORD*)a2;
	v69 = *(_DWORD*)(a2 + 16);
	v86 = *(_DWORD*)(a2 + 20);
	v87 = *(_DWORD*)(a2 + 28);
	v88 = *(_DWORD*)(a2 + 32);
	v71 = *(_QWORD*)(a2 + 40);
	v72 = *(_DWORD*)(a2 + 48);
	if ((_DWORD)v74 == 1)
	{
		v45 = 0i64;
		v46 = (float)(int)v12 * v43;
		if (v46 >= 9.223372e18)
		{
			v46 = v46 - 9.223372e18;
			if (v46 < 9.223372e18)
				v45 = 0x8000000000000000ui64;
		}
		v73 = v45 + (unsigned int)(int)v46;
	}
	if ((_DWORD)v77 == 1)
	{
		v47 = 0i64;
		v48 = (float)(int)v14 * v43;
		if (v48 >= 9.223372e18)
		{
			v48 = v48 - 9.223372e18;
			if (v48 < 9.223372e18)
				v47 = 0x8000000000000000ui64;
		}
		v76 = v47 + (unsigned int)(int)v48;
	}
	if ((_DWORD)v80 == 1)
	{
		v49 = 0i64;
		v50 = (float)(int)v9 * v44;
		if (v50 >= 9.223372e18)
		{
			v50 = v50 - 9.223372e18;
			if (v50 < 9.223372e18)
				v49 = 0x8000000000000000ui64;
		}
		v79 = v49 + (unsigned int)(int)v50;
	}
	if ((_DWORD)v83 == 1)
	{
		v51 = 0i64;
		v52 = (float)(int)v15 * v44;
		if (v52 >= 9.223372e18)
		{
			v52 = v52 - 9.223372e18;
			if (v52 < 9.223372e18)
				v51 = 0x8000000000000000ui64;
		}
		v82 = v51 + (unsigned int)(int)v52;
	}
	sub_1403D3040((__int64*)(a1 + 14000), (int*)&v65);
	return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

