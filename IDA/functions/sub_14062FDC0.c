//----- (000000014062FDC0) ----------------------------------------------------
__int64 __fastcall sub_14062FDC0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // ecx
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rax
	int v8; // esi
	int v9; // eax
	int v10; // eax
	int* v11; // rax
	int v12; // r11d
	_DWORD* v13; // rcx
	__int64 v14; // rax
	int v15; // ebp
	__int64 v16; // rax
	int v17; // r14d
	int v18; // ebx
	int* v19; // rax
	__int64 v20; // rax
	int v21; // ebp
	int v22; // r14d
	__int64 v23; // rax
	int v24; // r15d
	int v25; // ebx
	int* v26; // rax
	int v27; // r15d
	__int64 v28; // rax
	int v29; // r14d
	int v30; // ebx
	int* v31; // rax
	__int64 v32; // rax
	int v33; // r14d
	__int64 v34; // rax
	int v35; // r15d
	int v36; // ebx
	int* v37; // rax
	__int64 v38; // rax
	__int64 v39; // rax
	int v40; // ebx
	int* v41; // rax
	int v43; // [rsp+50h] [rbp+8h] BYREF

	sub_140019600((_QWORD*)a1);
	v2 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 48) = v2;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 16i64) = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 24i64) = *(_QWORD*)(a1 + 48);
	v3 = sub_140200220(0x4BBu);
	if (v3)
		v4 = *(_DWORD*)(v3 + 4);
	else
		v4 = 4000;
	*(_DWORD*)(a1 + 72) = v4;
	v5 = sub_14018B280(64i64, 0);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 88) = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 16i64) = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 24i64) = *(_QWORD*)(a1 + 88);
	v6 = sub_14018B280(64i64, 0);
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 16i64) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 24i64) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(a1 + 144) = off_140B68F20;
	v7 = sub_140200220(0x4BDu);
	v8 = 500000;
	if (v7)
		v9 = *(_DWORD*)(v7 + 4);
	else
		v9 = 500000;
	*(_DWORD*)(a1 + 152) = v9;
	v10 = dword_140C636A8;
	*(_QWORD*)(a1 + 156) = 0i64;
	*(_DWORD*)(a1 + 164) = v10;
	v11 = sub_14018B280(128i64, 0);
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 176) = v11;
	*(_BYTE*)v11 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 16i64) = *(_QWORD*)(a1 + 176);
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 24i64) = *(_QWORD*)(a1 + 176);
	sub_140200220(0x4C2u);
	sub_1407A00F0((_DWORD*)(a1 + 144));
	*(_DWORD*)(a1 + 156) = v12;
	sub_1407A00F0(v13);
	v43 = 1;
	v14 = sub_140200220(0x422u);
	if (v14)
		v15 = *(_DWORD*)(v14 + 4);
	else
		v15 = 100;
	v16 = sub_140200220(0x4BDu);
	if (v16)
		v17 = *(_DWORD*)(v16 + 4);
	else
		v17 = 500000;
	v18 = dword_140C636A8;
	v19 = sub_140631520(a1 + 80, &v43);
	v43 = 1;
	v19[2] = v17;
	v19[3] = v15;
	v19[4] = v15;
	v19[5] = v18;
	v20 = sub_140200220(0x422u);
	v21 = 1000;
	if (v20)
		v22 = *(_DWORD*)(v20 + 8);
	else
		v22 = 1000;
	v23 = sub_140200220(0x4BDu);
	if (v23)
		v24 = *(_DWORD*)(v23 + 4);
	else
		v24 = 500000;
	v25 = dword_140C636A8;
	v26 = sub_140631520(a1 + 112, &v43);
	v43 = 2;
	v26[2] = v24;
	v26[3] = v22;
	v26[4] = v22;
	v26[5] = v25;
	v27 = *(_DWORD*)(a1 + 72);
	v28 = sub_140200220(0x4BDu);
	if (v28)
		v29 = *(_DWORD*)(v28 + 4);
	else
		v29 = 500000;
	v30 = dword_140C636A8;
	v31 = sub_140631520(a1 + 80, &v43);
	v43 = 3;
	v31[2] = v29;
	v31[3] = v27;
	v31[4] = v27;
	v31[5] = v30;
	v32 = sub_140200220(0x4BCu);
	if (v32)
		v33 = *(_DWORD*)(v32 + 4);
	else
		v33 = 1000;
	v34 = sub_140200220(0x4BDu);
	if (v34)
		v35 = *(_DWORD*)(v34 + 4);
	else
		v35 = 500000;
	v36 = dword_140C636A8;
	v37 = sub_140631520(a1 + 80, &v43);
	v43 = 3;
	v37[2] = v35;
	v37[3] = v33;
	v37[4] = v33;
	v37[5] = v36;
	v38 = sub_140200220(0x4BCu);
	if (v38)
		v21 = *(_DWORD*)(v38 + 8);
	v39 = sub_140200220(0x4BDu);
	if (v39)
		v8 = *(_DWORD*)(v39 + 4);
	v40 = dword_140C636A8;
	v41 = sub_140631520(a1 + 112, &v43);
	v41[2] = v8;
	v41[3] = v21;
	v41[4] = v21;
	v41[5] = v40;
	return a1;
}
// 14062FF29: variable 'v12' is possibly undefined
// 14062FF2D: variable 'v13' is possibly undefined
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();
// 140C636A8: using guessed type int dword_140C636A8;

