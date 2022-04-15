#include "../winhttp.h"

//----- (00000001406FB2E0) ----------------------------------------------------
__int64 __fastcall sub_1406FB2E0(_QWORD* a1)
{
	__int128* v2; // rax
	_DWORD* v3; // rsi
	__int128* v4; // rcx
	int v5; // eax
	unsigned int v6; // r12d
	__int128* v7; // rcx
	int v8; // eax
	unsigned int v9; // r15d
	unsigned int v10; // r14d
	unsigned __int64 v11; // rax
	_DWORD* v12; // rbx
	__int64(__fastcall * *v13)(); // rax
	__int64 v14; // r9
	double v15; // xmm6_8
	__int64 v16; // rcx
	int v17; // eax
	__int64 v18; // rax
	int v19; // ecx
	__int64(__fastcall * **v20)(); // rax
	double v21; // xmm0_8
	float v22; // xmm0_4
	__int64 v23; // rax
	_DWORD* v24; // rax
	_DWORD* v25; // rbx
	__int64(__fastcall * *v26)(); // rax
	__int64 v27; // r9
	__int64 v28; // rcx
	int v29; // eax
	__int64 v30; // rax
	int v31; // ecx
	__int64(__fastcall * **v32)(); // rax
	double v33; // xmm0_8
	float v34; // xmm0_4
	__int64 v35; // rax
	_DWORD* v36; // rax
	__int64(__fastcall * *v37)(); // rax
	__int64 v38; // r9
	__int64 v39; // rcx
	int v40; // eax
	__int64 v41; // rax
	__int64(__fastcall * **v42)(); // rax
	__int64 v43; // rsi
	__int64 v44; // rcx
	__int64 v45; // rbx
	__int64 v46; // rax
	__int64 v47; // rdx
	int v48; // ebx
	_QWORD* v49; // rax
	__int128 v51; // [rsp+48h] [rbp-19h] BYREF
	__int64(__fastcall * *v52)(); // [rsp+58h] [rbp-9h] BYREF
	int v53; // [rsp+60h] [rbp-1h]
	__int64(__fastcall * *v54)(); // [rsp+68h] [rbp+7h] BYREF
	int v55; // [rsp+70h] [rbp+Fh]
	_QWORD* v56; // [rsp+78h] [rbp+17h]
	__int128 v57; // [rsp+80h] [rbp+1Fh]
	__int64(__fastcall * *v58)(); // [rsp+C8h] [rbp+67h] BYREF

	v2 = (__int128*)a1[3];
	v3 = dword_140A12138;
	v4 = (__int128*)dword_140A12138;
	if ((unsigned __int64)v2 < a1[2])
		v4 = v2;
	v5 = *((_DWORD*)v4 + 2);
	if (v5 == 3)
		goto LABEL_7;
	if (v5 == 4 && sub_14005AC80((char*)(*(_QWORD*)v4 + 32i64), (unsigned __int64*)&v58))
	{
		DWORD2(v51) = 3;
		v4 = &v51;
		*(_QWORD*)&v51 = v58;
	LABEL_7:
		v6 = (int)*(double*)v4;
		goto LABEL_8;
	}
	v6 = 0;
LABEL_8:
	v7 = (__int128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v7 = (__int128*)(a1[3] + 16i64);
	v8 = *((_DWORD*)v7 + 2);
	if (v8 == 3)
		goto LABEL_14;
	if (v8 == 4 && sub_14005AC80((char*)(*(_QWORD*)v7 + 32i64), (unsigned __int64*)&v58))
	{
		DWORD2(v51) = 3;
		v7 = &v51;
		*(_QWORD*)&v51 = v58;
	LABEL_14:
		v9 = (int)*(double*)v7;
		goto LABEL_15;
	}
	v9 = 0;
LABEL_15:
	v10 = 1;
	v11 = a1[3] + 32i64;
	v12 = dword_140A12138;
	v51 = 0i64;
	if (v11 < a1[2])
		v12 = (_DWORD*)v11;
	v13 = (__int64(__fastcall**)())sub_140062650((__int64)a1, (unsigned __int64*)L"x", 1ui64);
	v14 = a1[2];
	v52 = v13;
	v53 = 4;
	sub_14005E8E0((__int64)a1, (__int64)v12, (int*)&v52, v14);
	v15 = 0.0;
	a1[2] += 16i64;
	v16 = a1[2];
	v17 = *(_DWORD*)(v16 - 8);
	if (v17 == 3 || v17 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v16 - 16) + 32i64), (unsigned __int64*)&v58))
	{
		v18 = a1[2];
		v19 = *(_DWORD*)(v18 - 8);
		v20 = (__int64(__fastcall***)())(v18 - 16);
		if (v19 != 3)
		{
			if (v19 != 4 || !sub_14005AC80((char*)*v20 + 32, (unsigned __int64*)&v58))
			{
				v21 = 0.0;
				goto LABEL_25;
			}
			v53 = 3;
			v20 = &v52;
			v52 = v58;
		}
		v21 = *(double*)v20;
	LABEL_25:
		v22 = v21;
		*(float*)&v51 = v22;
	}
	v23 = a1[3];
	a1[2] -= 16i64;
	v24 = (_DWORD*)(v23 + 32);
	v25 = dword_140A12138;
	if ((unsigned __int64)v24 < a1[2])
		v25 = v24;
	v26 = (__int64(__fastcall**)())sub_140062650((__int64)a1, (unsigned __int64*)"y", 1ui64);
	v27 = a1[2];
	v52 = v26;
	v53 = 4;
	sub_14005E8E0((__int64)a1, (__int64)v25, (int*)&v52, v27);
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = *(_DWORD*)(v28 - 8);
	if (v29 == 3 || v29 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v28 - 16) + 32i64), (unsigned __int64*)&v58))
	{
		v30 = a1[2];
		v31 = *(_DWORD*)(v30 - 8);
		v32 = (__int64(__fastcall***)())(v30 - 16);
		if (v31 != 3)
		{
			if (v31 != 4 || !sub_14005AC80((char*)*v32 + 32, (unsigned __int64*)&v58))
			{
				v33 = 0.0;
				goto LABEL_36;
			}
			v53 = 3;
			v32 = &v52;
			v52 = v58;
		}
		v33 = *(double*)v32;
	LABEL_36:
		v34 = v33;
		*((float*)&v51 + 1) = v34;
	}
	v35 = a1[3];
	a1[2] -= 16i64;
	v36 = (_DWORD*)(v35 + 32);
	if ((unsigned __int64)v36 < a1[2])
		v3 = v36;
	v37 = (__int64(__fastcall**)())sub_140062650((__int64)a1, (unsigned __int64*)"z", 1ui64);
	v38 = a1[2];
	v52 = v37;
	v53 = 4;
	sub_14005E8E0((__int64)a1, (__int64)v3, (int*)&v52, v38);
	a1[2] += 16i64;
	v39 = a1[2];
	v40 = *(_DWORD*)(v39 - 8);
	if (v40 == 3 || v40 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v39 - 16) + 32i64), (unsigned __int64*)&v58))
	{
		v41 = a1[2];
		v39 = *(unsigned int*)(v41 - 8);
		v42 = (__int64(__fastcall***)())(v41 - 16);
		if ((_DWORD)v39 != 3)
		{
			if ((_DWORD)v39 != 4 || !sub_14005AC80((char*)*v42 + 32, (unsigned __int64*)&v58))
				goto LABEL_47;
			v55 = 3;
			v42 = &v54;
			v54 = v58;
		}
		v15 = *(double*)v42;
	LABEL_47:
		*((float*)&v51 + 2) = v15;
	}
	a1[2] -= 16i64;
	if (qword_140C658F8)
	{
		v58 = (__int64(__fastcall**)())qword_140C77760;
		v43 = sub_140448BE0(v39, v6, v9, (float*)&v51, 0i64, 1, (__int64*)&v58);
	}
	else
	{
		v43 = 0i64;
	}
	v44 = a1[4];
	v56 = a1;
	LODWORD(v57) = 1;
	v54 = off_140B569F0;
	if (*(_QWORD*)(v44 + 120) >= *(_QWORD*)(v44 + 112))
		sub_14005E2C0((__int64)a1);
	v45 = a1[2];
	v46 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v45 + 8) = 5;
	*(_QWORD*)v45 = v46;
	a1[2] += 16i64;
	v48 = sub_1400578C0((__int64)a1);
	v55 = v48;
	if (v43 && (int)sub_14052ED60(v43, (__int64)&v54) >= 0)
	{
		v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v48);
		v47 = a1[2];
		*(_QWORD*)v47 = *v49;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v49 + 2);
		a1[2] += 16i64;
	}
	else
	{
		v10 = 0;
	}
	sub_1400579E0((__int64)a1, v47, v48);
	return v10;
}
// 1406FB652: variable 'v39' is possibly undefined
// 1406FB72B: variable 'v47' is possibly undefined
// 1409F82CC: using guessed type wchar_t asc_1409F82CC[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;

