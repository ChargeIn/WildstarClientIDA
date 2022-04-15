#include "../winhttp.h"

//----- (000000014086B080) ----------------------------------------------------
__int64 __fastcall sub_14086B080(__int64 a1, unsigned int a2, __int64 a3)
{
	_QWORD* v6; // rdi
	__int64* v7; // rcx
	int v8; // eax
	__int128 v9; // xmm0
	__int128 v10; // xmm1
	__int64 v11; // rax
	__int128 v12; // xmm0
	__int128 v13; // xmm1
	__int64 v14; // rax
	_DWORD* v15; // rax
	int v16; // eax
	unsigned int v17; // eax
	unsigned int v18; // ebx
	__int64 v19; // rcx
	int v21; // [rsp+20h] [rbp-59h] BYREF
	_QWORD* v22; // [rsp+28h] [rbp-51h]
	__int64 v23; // [rsp+30h] [rbp-49h]
	int* v24; // [rsp+38h] [rbp-41h]
	__int64 v25; // [rsp+40h] [rbp-39h]
	int v26; // [rsp+48h] [rbp-31h]
	_DWORD* v27; // [rsp+50h] [rbp-29h]
	int v28; // [rsp+58h] [rbp-21h]
	__int128 v29; // [rsp+60h] [rbp-19h]
	__int128 v30; // [rsp+70h] [rbp-9h]
	__int128 v31; // [rsp+80h] [rbp+7h]
	__int128 v32; // [rsp+90h] [rbp+17h]
	__int64 v33; // [rsp+A0h] [rbp+27h]
	int v34; // [rsp+A8h] [rbp+2Fh]
	int v35; // [rsp+ACh] [rbp+33h]
	__int64 v36; // [rsp+B0h] [rbp+37h]
	int v37; // [rsp+B8h] [rbp+3Fh]
	char v38; // [rsp+BCh] [rbp+43h]
	__int16 v39; // [rsp+BDh] [rbp+44h]
	int v40; // [rsp+F8h] [rbp+7Fh] BYREF
	int v41; // [rsp+FCh] [rbp+83h]

	v6 = (_QWORD*)sub_140830F00(qword_140C61BA8, a2, 0);
	if (!v6)
		return 2i64;
	v7 = *(__int64**)(a1 + 312);
	v41 = 4;
	if (!v7)
		goto LABEL_5;
	while (*((_DWORD*)v7 + 2) != a2)
	{
		v7 = (__int64*)*v7;
		if (!v7)
			goto LABEL_5;
	}
	v19 = (__int64)v7 + 12;
	if (v19)
		v8 = *(_DWORD*)(v19 + 4);
	else
		LABEL_5:
	v8 = 0;
	v9 = *(_OWORD*)(a3 + 40);
	v10 = *(_OWORD*)(a3 + 56);
	v40 = v8;
	v11 = *(_QWORD*)(a3 + 32);
	v27 = 0i64;
	v39 = 1;
	v23 = v11;
	v29 = v9;
	v30 = v10;
	v12 = *(_OWORD*)(a3 + 72);
	v13 = *(_OWORD*)(a3 + 88);
	v24 = &v40;
	LODWORD(v11) = *(_DWORD*)(a3 + 24);
	v38 = 0;
	v31 = v12;
	v32 = v13;
	*(_QWORD*)&v12 = *(_QWORD*)(a3 + 104);
	v28 = v11;
	v14 = *(_QWORD*)a3;
	v21 = 0;
	v33 = v12;
	v25 = v14;
	LODWORD(v14) = *(_DWORD*)(a3 + 8);
	v22 = v6;
	v26 = v14;
	v15 = *(_DWORD**)(a3 + 16);
	if (v15)
		++* v15;
	v27 = v15;
	v16 = *(_DWORD*)(a3 + 112);
	v35 = 0;
	v36 = 0i64;
	v37 = 0;
	v34 = v16;
	v17 = sub_14084ED10(v6, (__int64)&v21);
	v18 = v17;
	if (v17 == 3)
	{
		v18 = 1;
	}
	else if (v17 == 1)
	{
		v18 = (*(__int64(__fastcall**)(_QWORD*, int*))(*v6 + 632i64))(v6, &v21);
	}
	(*(void(__fastcall**)(_QWORD*))(*v6 + 16i64))(v6);
	if (v27)
		sub_140828460(v27);
	return v18;
}

