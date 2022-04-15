#include "../winhttp.h"

//----- (00000001403B8A60) ----------------------------------------------------
__int64 __fastcall sub_1403B8A60(
	__int64 a1,
	int a2,
	unsigned int a3,
	int a4,
	__int64 a5,
	int a6,
	__int64 a7,
	int a8,
	int* a9,
	int* a10,
	__int64 a11,
	__int64* a12,
	int a13)
{
	int* v17; // rax
	int* v18; // r9
	int v19; // edi
	__int64 v20; // rsi
	__int64 v21; // rax
	__int64 v22; // rax
	int v23; // edx
	int v24; // r8d
	int v25; // r9d
	int v26; // r10d
	int v27; // r11d
	int v28; // ebx
	int v29; // eax
	__int64 v31; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v32; // [rsp+50h] [rbp-B8h]
	__int64 v33; // [rsp+58h] [rbp-B0h]
	int v34; // [rsp+60h] [rbp-A8h]
	int v35; // [rsp+64h] [rbp-A4h]
	__int64 v36; // [rsp+68h] [rbp-A0h]
	__int64 v37; // [rsp+70h] [rbp-98h]
	__int64 v38; // [rsp+78h] [rbp-90h]
	int v39; // [rsp+80h] [rbp-88h]
	__int64 v40; // [rsp+88h] [rbp-80h]
	int v41; // [rsp+90h] [rbp-78h]
	int v42; // [rsp+94h] [rbp-74h]
	int v43; // [rsp+98h] [rbp-70h]
	int v44; // [rsp+9Ch] [rbp-6Ch]
	int v45; // [rsp+A0h] [rbp-68h]
	int v46; // [rsp+A4h] [rbp-64h]
	int v47; // [rsp+A8h] [rbp-60h]
	int v48; // [rsp+ACh] [rbp-5Ch]
	int v49; // [rsp+B0h] [rbp-58h]
	int v50; // [rsp+B4h] [rbp-54h]
	int v51; // [rsp+B8h] [rbp-50h]
	int v52; // [rsp+BCh] [rbp-4Ch]
	int v53; // [rsp+C0h] [rbp-48h]
	int v54; // [rsp+C4h] [rbp-44h]
	int v55; // [rsp+C8h] [rbp-40h]
	__int64 v56; // [rsp+D0h] [rbp-38h]
	__int64 v57; // [rsp+D8h] [rbp-30h]
	__int64 v58; // [rsp+E0h] [rbp-28h]
	__int64 v59; // [rsp+E8h] [rbp-20h]
	__int64 v60; // [rsp+F0h] [rbp-18h]
	__int64 v61; // [rsp+F8h] [rbp-10h]
	__int64 v62; // [rsp+100h] [rbp-8h]
	__int64 v63; // [rsp+108h] [rbp+0h]
	__int64 v64; // [rsp+110h] [rbp+8h]
	__int64 v65; // [rsp+118h] [rbp+10h]
	__int64 v66; // [rsp+120h] [rbp+18h]
	__int64 v67; // [rsp+128h] [rbp+20h]
	int v68; // [rsp+130h] [rbp+28h]
	__int64 v69; // [rsp+134h] [rbp+2Ch]
	int v70; // [rsp+13Ch] [rbp+34h]
	int v71; // [rsp+140h] [rbp+38h]

	sub_1403B8CE0(&v31);
	sub_1407E4830((int*)&v31, 0i64, 0x100ui64);
	LODWORD(v31) = a2;
	v17 = sub_1400B5DF0(qword_140C658F0, a3, 0i64);
	v18 = v17;
	if (v17)
	{
		LODWORD(v32) = a3;
		v19 = 0;
		LODWORD(v36) = a4;
		v20 = *((_QWORD*)v17 + 61);
		v61 = 0i64;
		v60 = 1i64;
		v62 = *a12;
		v21 = a12[1];
		v57 = 1i64;
		v63 = v21;
		v64 = a12[2];
		v65 = a12[3];
		v22 = a12[4];
		v56 = 0i64;
		v66 = v22;
		v67 = a12[5];
		LODWORD(v22) = v18[120];
		v58 = 0i64;
		v34 = v22;
		LODWORD(v22) = v18[119];
		v59 = 0i64;
		v68 = v22;
		v69 = 0i64;
		v38 = a5;
		v70 = 0;
		v39 = a6;
		v33 = v20;
		v40 = a7;
		v37 = a11;
		v35 = 1;
		v41 = a8;
		v42 = *a9;
		v43 = a9[1];
		v44 = a9[2];
		v45 = a9[3];
		v46 = a9[4];
		v23 = a10[1];
		v24 = a10[2];
		v25 = a10[3];
		v26 = a10[4];
		v27 = a10[5];
		v28 = a10[6];
		v29 = a10[7];
		if (*a10)
			v19 = 1;
		v48 = *a10;
		v49 = v23;
		v50 = v24;
		v51 = v25;
		v52 = v26;
		v53 = v27;
		v54 = v28;
		v55 = v29;
		if (v23)
			v19 = 2;
		if (v24)
			v19 = 3;
		if (v25)
			v19 = 4;
		if (v26)
			v19 = 5;
		if (v27)
			v19 = 6;
		if (v28)
			v19 = 7;
		v71 = a13;
		if (v29)
			v19 = 8;
		v47 = v19;
	}
	else
	{
		v20 = v33;
	}
	if (!v20)
		return 2147500037i64;
	sub_1403D3040((__int64*)(a1 + 25392), (int*)&v31);
	return 0i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

