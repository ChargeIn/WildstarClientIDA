#include "../winhttp.h"

//----- (0000000140856DB0) ----------------------------------------------------
__int64 __fastcall sub_140856DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v4; // eax
	int v5; // r8d
	__int64 v7; // rcx
	unsigned int v9; // esi
	_QWORD* v10; // rdi
	char v11; // cl
	__int64 v12; // r14
	__int64* v13; // r15
	__int128 v14; // xmm0
	__int128 v15; // xmm1
	int v16; // eax
	__int64 v17; // rax
	__int128 v18; // xmm0
	__int128 v19; // xmm1
	__int64 v20; // rax
	_DWORD* v21; // rax
	unsigned int v22; // eax
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v26[3]; // [rsp+20h] [rbp-99h] BYREF
	char v27; // [rsp+38h] [rbp-81h]
	bool v28; // [rsp+39h] [rbp-80h]
	__int64 v29; // [rsp+40h] [rbp-79h]
	int v30; // [rsp+48h] [rbp-71h]
	int v31; // [rsp+50h] [rbp-69h] BYREF
	__int64 v32; // [rsp+58h] [rbp-61h]
	__int64 v33; // [rsp+60h] [rbp-59h]
	__int64* v34; // [rsp+68h] [rbp-51h]
	__int64 v35; // [rsp+70h] [rbp-49h]
	int v36; // [rsp+78h] [rbp-41h]
	_DWORD* v37; // [rsp+80h] [rbp-39h]
	int v38; // [rsp+88h] [rbp-31h]
	__int128 v39; // [rsp+90h] [rbp-29h]
	__int128 v40; // [rsp+A0h] [rbp-19h]
	__int128 v41; // [rsp+B0h] [rbp-9h]
	__int128 v42; // [rsp+C0h] [rbp+7h]
	__int64 v43; // [rsp+D0h] [rbp+17h]
	int v44; // [rsp+D8h] [rbp+1Fh]
	int v45; // [rsp+DCh] [rbp+23h]
	__int64* v46; // [rsp+E0h] [rbp+27h]
	int v47; // [rsp+E8h] [rbp+2Fh]
	char v48; // [rsp+ECh] [rbp+33h]
	char v49; // [rsp+EDh] [rbp+34h]
	char v50; // [rsp+EEh] [rbp+35h]
	__int64 v51; // [rsp+120h] [rbp+67h] BYREF

	v4 = *(_DWORD*)(a1 + 200);
	v5 = 4;
	v7 = *(_QWORD*)(a1 + 192);
	v51 = v4 | 0x400000000i64;
	v9 = 1;
	if (v7)
	{
		if ((*(_BYTE*)(v7 + 640) & 0xF) == 2)
			v5 = 1;
		HIDWORD(v51) = v5;
		sub_140860EA0(v7, &v51, 1i64, a4);
	}
	v10 = (_QWORD*)sub_140855940(a1);
	if (!v10)
		return 15i64;
	v11 = *(_BYTE*)(a1 + 88);
	v26[0] = *(_QWORD*)(a1 + 72);
	v12 = *(_QWORD*)(a1 + 112);
	v26[1] = *(_QWORD*)(a1 + 80);
	v30 = *(_DWORD*)(a1 + 240);
	v13 = (__int64*)(a1 + 96);
	v28 = (v11 & 2) != 0;
	v29 = 0i64;
	v26[2] = a1 + 96;
	v27 = v11 & 1;
	if (v12)
		sub_140865FB0(v12);
	v29 = v12;
	v14 = *(_OWORD*)(a1 + 120);
	v15 = *(_OWORD*)(a1 + 136);
	v50 = *(_BYTE*)(a1 + 214);
	v16 = *(_DWORD*)(a1 + 216);
	v37 = 0i64;
	v39 = v14;
	v40 = v15;
	v31 = v16;
	v17 = *(_QWORD*)(a1 + 232);
	v48 = 0;
	v18 = *(_OWORD*)(a1 + 152);
	v19 = *(_OWORD*)(a1 + 168);
	v32 = v17;
	v20 = *(_QWORD*)(a2 + 72);
	v41 = v18;
	v42 = v19;
	*(_QWORD*)&v18 = *(_QWORD*)(a1 + 184);
	v33 = v20;
	LODWORD(v20) = *(_DWORD*)(a2 + 56);
	v43 = v18;
	v38 = v20;
	v35 = *(_QWORD*)(a2 + 32);
	v36 = *(_DWORD*)(a2 + 40);
	v21 = *(_DWORD**)(a2 + 48);
	if (v21)
		++* v21;
	v37 = v21;
	v44 = *(_DWORD*)(a1 + 204);
	v45 = *(_DWORD*)(a2 + 20);
	v49 = *(_BYTE*)(a1 + 213);
	v47 = *(_DWORD*)(a1 + 208);
	v46 = v26;
	v34 = &v51;
	v22 = sub_14084ED10(v10, (__int64)&v31);
	if (v22 != 3)
	{
		if (v22 == 1)
			v22 = (*(__int64(__fastcall**)(_QWORD*, int*))(*v10 + 632i64))(v10, &v31);
		v9 = v22;
	}
	++dword_140C62410;
	v23 = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(a1 + 112) = 0i64;
	if (v23)
		sub_140866000(v23);
	if (*v13)
	{
		sub_14083A740((__int64**)qword_140C61B98, *v13);
		*v13 = 0i64;
		*(_DWORD*)(a1 + 104) = 0;
	}
	v24 = *(_QWORD*)(a1 + 248);
	if (v24)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
		*(_QWORD*)(a1 + 248) = 0i64;
	}
	(*(void(__fastcall**)(_QWORD*))(*v10 + 16i64))(v10);
	if (v37)
		sub_140828460(v37);
	if (v29)
		sub_140866000(v29);
	return v9;
}
// 140856EA0: conditional instruction was optimized away because rdx.8==0
// 140C61B98: using guessed type __int64 qword_140C61B98;
// 140C62410: using guessed type int dword_140C62410;

