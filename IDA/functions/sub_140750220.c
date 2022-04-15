#include "../winhttp.h"

//----- (0000000140750220) ----------------------------------------------------
__int64 __fastcall sub_140750220(__int64 a1, _QWORD* a2)
{
	int* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	_DWORD* v11; // rax
	float v12; // xmm1_4
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // r9
	_DWORD* v16; // rax
	float v17; // xmm1_4
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // r9
	_DWORD* v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // r9
	_DWORD* v25; // rax
	float v26; // xmm1_4
	__int64 v27; // rbx
	__int64 v28; // rax
	__int64 v29; // r9
	_DWORD* v30; // rax
	float v31; // xmm1_4
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // r9
	_DWORD* v35; // rax
	float v36; // xmm1_4
	__int64 v37; // rbx
	__int64 v38; // rax
	__int64 v39; // r9
	_DWORD* v40; // rax
	float v41; // xmm1_4
	float v42; // xmm1_4
	float v43; // xmm0_4
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // r9
	_DWORD* v47; // rax
	float v48; // xmm1_4
	__int64 v49; // rbx
	__int64 v50; // rax
	__int64 v51; // r9
	_DWORD* v52; // rax
	float v53; // xmm1_4
	float v54; // xmm1_4
	float v55; // xmm0_4
	__int64 v56; // rbx
	__int64 v57; // rax
	__int64 v58; // r9
	_DWORD* v59; // rax
	float v60; // xmm1_4
	__int64 v61; // rbx
	__int64 v62; // rax
	__int64 v63; // r9
	_DWORD* v64; // rax
	float v65; // xmm1_4
	float v66; // xmm1_4
	float v67; // xmm0_4
	__int64 v68; // rbx
	__int64 v69; // rax
	__int64 v70; // r9
	_DWORD* v71; // rax
	float v72; // xmm1_4
	__int64 v73; // rbx
	__int64 v74; // rax
	__int64 v75; // r9
	_DWORD* v76; // rax
	float v77; // xmm1_4
	float v78; // xmm1_4
	float v79; // xmm0_4
	__int64 v81; // [rsp+20h] [rbp-20h] BYREF
	int v82; // [rsp+28h] [rbp-18h]

	*(_DWORD*)(a1 + 40) = 1065353216;
	*(_QWORD*)(a1 + 44) = 1065353216i64;
	*(_DWORD*)(a1 + 36) = -1;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 52) = 0i64;
	*(_QWORD*)(a1 + 60) = 0i64;
	*(_DWORD*)(a1 + 68) = 0;
	v4 = (int*)sub_1400580E0((__int64)a2, -1);
	v5 = v4[2];
	if ((_DWORD)v5 == 5 || (_DWORD)v5 == 7)
		v6 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	else
		v6 = *(_QWORD*)(a2[4] + 8 * v5 + 224);
	if (v6)
	{
		v7 = a2[2];
		*(_QWORD*)v7 = v6;
		*(_DWORD*)(v7 + 8) = 5;
		a2[2] += 16i64;
	}
	v8 = a2[2];
	v9 = sub_140062650((__int64)a2, (unsigned __int64*)"fTime", 5ui64);
	v10 = a2[2];
	v81 = v9;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v8 - 16, (int*)&v81, v10);
	a2[2] += 16i64;
	v11 = (_DWORD*)(a2[2] - 16i64);
	if (v11 == dword_140A12138 || v11[2])
	{
		v12 = sub_140056C40(a2, 0xFFFFFFFF);
		*(_DWORD*)a1 = (int)(float)(v12 * 1000.0);
	}
	a2[2] -= 16i64;
	v13 = a2[2];
	v14 = sub_140062650((__int64)a2, (unsigned __int64*)"fScale", 6ui64);
	v15 = a2[2];
	v81 = v14;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v13 - 16, (int*)&v81, v15);
	a2[2] += 16i64;
	v16 = (_DWORD*)(a2[2] - 16i64);
	if (v16 == dword_140A12138 || v16[2])
	{
		*(_DWORD*)(a1 + 56) = 1;
		v17 = sub_140056C40(a2, 0xFFFFFFFF);
		*(float*)(a1 + 44) = v17;
	}
	a2[2] -= 16i64;
	v18 = a2[2];
	v19 = sub_140062650((__int64)a2, (unsigned __int64*)"nColor", 6ui64);
	v20 = a2[2];
	v81 = v19;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v18 - 16, (int*)&v81, v20);
	a2[2] += 16i64;
	v21 = (_DWORD*)(a2[2] - 16i64);
	if (v21 == dword_140A12138 || v21[2])
	{
		*(_DWORD*)(a1 + 60) = 1;
		*(_DWORD*)(a1 + 36) = sub_140056D60(a2, 0xFFFFFFFF) - 0x1000000;
	}
	a2[2] -= 16i64;
	v22 = a2[2];
	v23 = sub_140062650((__int64)a2, (unsigned __int64*)"fAlpha", 6ui64);
	v24 = a2[2];
	v81 = v23;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v22 - 16, (int*)&v81, v24);
	a2[2] += 16i64;
	v25 = (_DWORD*)(a2[2] - 16i64);
	if (v25 == dword_140A12138 || v25[2])
	{
		*(_DWORD*)(a1 + 64) = 1;
		v26 = sub_140056C40(a2, 0xFFFFFFFF);
		*(float*)(a1 + 40) = v26;
	}
	a2[2] -= 16i64;
	v27 = a2[2];
	v28 = sub_140062650((__int64)a2, (unsigned __int64*)"fRotation", 9ui64);
	v29 = a2[2];
	v81 = v28;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v27 - 16, (int*)&v81, v29);
	a2[2] += 16i64;
	v30 = (_DWORD*)(a2[2] - 16i64);
	if (v30 == dword_140A12138 || v30[2])
	{
		*(_DWORD*)(a1 + 68) = 1;
		v31 = sub_140056C40(a2, 0xFFFFFFFF);
		*(float*)(a1 + 48) = v31;
	}
	a2[2] -= 16i64;
	v32 = a2[2];
	v33 = sub_140062650((__int64)a2, (unsigned __int64*)"fVelocityDirection", 0x12ui64);
	v34 = a2[2];
	v81 = v33;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v32 - 16, (int*)&v81, v34);
	a2[2] += 16i64;
	v35 = (_DWORD*)(a2[2] - 16i64);
	if (v35 == dword_140A12138 || v35[2])
	{
		*(_DWORD*)(a1 + 52) = 1;
		v36 = sub_140056C40(a2, 0xFFFFFFFF);
		*(float*)(a1 + 4) = v36;
		*(float*)(a1 + 8) = v36;
	}
	a2[2] -= 16i64;
	v37 = a2[2];
	v38 = sub_140062650((__int64)a2, (unsigned __int64*)"fVelocityDirectionRange", 0x17ui64);
	v39 = a2[2];
	v81 = v38;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v37 - 16, (int*)&v81, v39);
	a2[2] += 16i64;
	v40 = (_DWORD*)(a2[2] - 16i64);
	if (v40 == dword_140A12138 || v40[2])
	{
		*(_DWORD*)(a1 + 52) = 1;
		v41 = sub_140056C40(a2, 0xFFFFFFFF);
		v42 = v41 * 0.5;
		v43 = *(float*)(a1 + 4) - v42;
		*(float*)(a1 + 8) = v42 + *(float*)(a1 + 8);
		*(float*)(a1 + 4) = v43;
	}
	a2[2] -= 16i64;
	v44 = a2[2];
	v45 = sub_140062650((__int64)a2, (unsigned __int64*)"fVelocityMagnitude", 0x12ui64);
	v46 = a2[2];
	v81 = v45;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v44 - 16, (int*)&v81, v46);
	a2[2] += 16i64;
	v47 = (_DWORD*)(a2[2] - 16i64);
	if (v47 == dword_140A12138 || v47[2])
	{
		*(_DWORD*)(a1 + 52) = 1;
		v48 = sub_140056C40(a2, 0xFFFFFFFF);
		*(float*)(a1 + 12) = v48;
		*(float*)(a1 + 16) = v48;
	}
	a2[2] -= 16i64;
	v49 = a2[2];
	v50 = sub_140062650((__int64)a2, (unsigned __int64*)"fVelocityMagnitudeRange", 0x17ui64);
	v51 = a2[2];
	v81 = v50;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v49 - 16, (int*)&v81, v51);
	a2[2] += 16i64;
	v52 = (_DWORD*)(a2[2] - 16i64);
	if (v52 == dword_140A12138 || v52[2])
	{
		*(_DWORD*)(a1 + 52) = 1;
		v53 = sub_140056C40(a2, 0xFFFFFFFF);
		v54 = v53 * 0.5;
		v55 = *(float*)(a1 + 12) - v54;
		*(float*)(a1 + 16) = v54 + *(float*)(a1 + 16);
		*(float*)(a1 + 12) = v55;
	}
	a2[2] -= 16i64;
	v56 = a2[2];
	v57 = sub_140062650((__int64)a2, (unsigned __int64*)"fAccelerationDirection", 0x16ui64);
	v58 = a2[2];
	v81 = v57;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v56 - 16, (int*)&v81, v58);
	a2[2] += 16i64;
	v59 = (_DWORD*)(a2[2] - 16i64);
	if (v59 == dword_140A12138 || v59[2])
	{
		*(_DWORD*)(a1 + 52) = 1;
		v60 = sub_140056C40(a2, 0xFFFFFFFF);
		*(float*)(a1 + 20) = v60;
		*(float*)(a1 + 24) = v60;
	}
	a2[2] -= 16i64;
	v61 = a2[2];
	v62 = sub_140062650((__int64)a2, (unsigned __int64*)"fAccelerationDirectionRange", 0x1Bui64);
	v63 = a2[2];
	v81 = v62;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v61 - 16, (int*)&v81, v63);
	a2[2] += 16i64;
	v64 = (_DWORD*)(a2[2] - 16i64);
	if (v64 == dword_140A12138 || v64[2])
	{
		*(_DWORD*)(a1 + 52) = 1;
		v65 = sub_140056C40(a2, 0xFFFFFFFF);
		v66 = v65 * 0.5;
		v67 = *(float*)(a1 + 20) - v66;
		*(float*)(a1 + 24) = v66 + *(float*)(a1 + 24);
		*(float*)(a1 + 20) = v67;
	}
	a2[2] -= 16i64;
	v68 = a2[2];
	v69 = sub_140062650((__int64)a2, (unsigned __int64*)"fAccelerationMagnitude", 0x16ui64);
	v70 = a2[2];
	v81 = v69;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v68 - 16, (int*)&v81, v70);
	a2[2] += 16i64;
	v71 = (_DWORD*)(a2[2] - 16i64);
	if (v71 == dword_140A12138 || v71[2])
	{
		*(_DWORD*)(a1 + 52) = 1;
		v72 = sub_140056C40(a2, 0xFFFFFFFF);
		*(float*)(a1 + 28) = v72;
		*(float*)(a1 + 32) = v72;
	}
	a2[2] -= 16i64;
	v73 = a2[2];
	v74 = sub_140062650((__int64)a2, (unsigned __int64*)"fAccelerationMagnitudeRange", 0x1Bui64);
	v75 = a2[2];
	v81 = v74;
	v82 = 4;
	sub_14005E8E0((__int64)a2, v73 - 16, (int*)&v81, v75);
	a2[2] += 16i64;
	v76 = (_DWORD*)(a2[2] - 16i64);
	if (v76 == dword_140A12138 || v76[2])
	{
		*(_DWORD*)(a1 + 52) = 1;
		v77 = sub_140056C40(a2, 0xFFFFFFFF);
		v78 = v77 * 0.5;
		v79 = *(float*)(a1 + 28) - v78;
		*(float*)(a1 + 32) = v78 + *(float*)(a1 + 32);
		*(float*)(a1 + 28) = v79;
	}
	a2[2] -= 16i64;
	return a1;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

