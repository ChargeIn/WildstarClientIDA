//----- (000000014030B7C0) ----------------------------------------------------
__int64 __fastcall sub_14030B7C0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v4; // r11
	__int64 v5; // r10
	__int64 v6; // r9
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // r11
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // r11
	__int64 v13; // r10
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // r11
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // r11
	__int64 v20; // r10
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // r11
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // r11
	__int64 v27; // r10
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v30; // r11
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // r11
	__int64 v34; // r10
	__int64 v35; // rax
	__int64 v36; // rax
	__int64 v37; // r11
	__int64 v38; // rax
	__int64 v39; // rax
	__int64 v40; // r11
	__int64 v41; // r10
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 result; // rax

	v3 = *((_QWORD*)a3 + 1);
	v4 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v5 = *a3;
	if ((unsigned __int64)(a2 + v3 + 4 * v5) > a1[1])
		return 2147500037i64;
	v6 = 0i64;
	v7 = 0i64;
	if ((_DWORD)v5)
		v7 = v4;
	*((_QWORD*)a3 + 1) = v7;
	v8 = *((_QWORD*)a3 + 2);
	v9 = v8 + a2;
	if ((unsigned __int64)(v8 + a2) < *a1 || (unsigned __int64)(a2 + v8 + 2 * v5) > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	if ((_DWORD)v5)
		v10 = v9;
	*((_QWORD*)a3 + 2) = v10;
	v11 = *((_QWORD*)a3 + 4);
	v12 = v11 + a2;
	if ((unsigned __int64)(v11 + a2) < *a1)
		return 2147500037i64;
	v13 = a3[6];
	if ((unsigned __int64)(a2 + v11 + 4 * v13) > a1[1])
		return 2147500037i64;
	v14 = 0i64;
	if ((_DWORD)v13)
		v14 = v12;
	*((_QWORD*)a3 + 4) = v14;
	v15 = *((_QWORD*)a3 + 5);
	v16 = v15 + a2;
	if ((unsigned __int64)(v15 + a2) < *a1 || (unsigned __int64)(a2 + v15 + 2 * v13) > a1[1])
		return 2147500037i64;
	v17 = 0i64;
	if ((_DWORD)v13)
		v17 = v16;
	*((_QWORD*)a3 + 5) = v17;
	v18 = *((_QWORD*)a3 + 7);
	v19 = v18 + a2;
	if ((unsigned __int64)(v18 + a2) < *a1)
		return 2147500037i64;
	v20 = a3[12];
	if ((unsigned __int64)(a2 + v18 + 4 * v20) > a1[1])
		return 2147500037i64;
	v21 = 0i64;
	if ((_DWORD)v20)
		v21 = v19;
	*((_QWORD*)a3 + 7) = v21;
	v22 = *((_QWORD*)a3 + 8);
	v23 = v22 + a2;
	if ((unsigned __int64)(v22 + a2) < *a1 || (unsigned __int64)(a2 + v22 + 2 * v20) > a1[1])
		return 2147500037i64;
	v24 = 0i64;
	if ((_DWORD)v20)
		v24 = v23;
	*((_QWORD*)a3 + 8) = v24;
	v25 = *((_QWORD*)a3 + 10);
	v26 = v25 + a2;
	if ((unsigned __int64)(v25 + a2) < *a1)
		return 2147500037i64;
	v27 = a3[18];
	if ((unsigned __int64)(a2 + v25 + 4 * v27) > a1[1])
		return 2147500037i64;
	v28 = 0i64;
	if ((_DWORD)v27)
		v28 = v26;
	*((_QWORD*)a3 + 10) = v28;
	v29 = *((_QWORD*)a3 + 11);
	v30 = v29 + a2;
	if ((unsigned __int64)(v29 + a2) < *a1 || (unsigned __int64)(a2 + v29 + 2 * v27) > a1[1])
		return 2147500037i64;
	v31 = 0i64;
	if ((_DWORD)v27)
		v31 = v30;
	*((_QWORD*)a3 + 11) = v31;
	v32 = *((_QWORD*)a3 + 13);
	v33 = v32 + a2;
	if ((unsigned __int64)(v32 + a2) < *a1)
		return 2147500037i64;
	v34 = a3[24];
	if ((unsigned __int64)(a2 + v32 + 4 * v34) > a1[1])
		return 2147500037i64;
	v35 = 0i64;
	if ((_DWORD)v34)
		v35 = v33;
	*((_QWORD*)a3 + 13) = v35;
	v36 = *((_QWORD*)a3 + 14);
	v37 = v36 + a2;
	if ((unsigned __int64)(v36 + a2) < *a1 || (unsigned __int64)(a2 + v36 + 2 * v34) > a1[1])
		return 2147500037i64;
	v38 = 0i64;
	if ((_DWORD)v34)
		v38 = v37;
	*((_QWORD*)a3 + 14) = v38;
	v39 = *((_QWORD*)a3 + 16);
	v40 = v39 + a2;
	if ((unsigned __int64)(v39 + a2) < *a1)
		return 2147500037i64;
	v41 = a3[30];
	if ((unsigned __int64)(a2 + v39 + 4 * v41) > a1[1])
		return 2147500037i64;
	v42 = 0i64;
	if ((_DWORD)v41)
		v42 = v40;
	*((_QWORD*)a3 + 16) = v42;
	v43 = *((_QWORD*)a3 + 17);
	if ((unsigned __int64)(v43 + a2) < *a1 || (unsigned __int64)(a2 + v43 + 2 * v41) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v41)
		v6 = v43 + a2;
	result = 0i64;
	*((_QWORD*)a3 + 17) = v6;
	return result;
}

