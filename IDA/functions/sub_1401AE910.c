//----- (00000001401AE910) ----------------------------------------------------
void __fastcall sub_1401AE910(__int128** a1, _DWORD* a2)
{
	__int128* v4; // rax
	__int128 v5; // xmm0
	__int128 v6; // xmm3
	int v7; // r8d
	int v8; // ecx
	__int128 v9; // xmm2
	__int128 v10; // xmm1
	__int128 v11; // xmm0
	__int128* v12; // rax
	float v13; // xmm9_4
	float v14; // xmm7_4
	float v15; // xmm8_4
	float v16; // xmm6_4
	float v17; // xmm5_4
	float v18; // xmm4_4
	float v19; // xmm5_4
	float v20; // xmm11_4
	float v21; // xmm4_4
	float v22; // xmm7_4
	float v23; // [rsp+2Ch] [rbp-DCh]
	float v24; // [rsp+30h] [rbp-D8h]
	float v25; // [rsp+38h] [rbp-D0h]
	float v26; // [rsp+48h] [rbp-C0h] BYREF
	float v27; // [rsp+4Ch] [rbp-BCh]
	float v28; // [rsp+50h] [rbp-B8h]
	float v29; // [rsp+54h] [rbp-B4h]
	float v30; // [rsp+58h] [rbp-B0h]
	float v31; // [rsp+5Ch] [rbp-ACh]
	float v32; // [rsp+60h] [rbp-A8h]
	float v33; // [rsp+64h] [rbp-A4h]
	float v34; // [rsp+68h] [rbp-A0h]
	float v35; // [rsp+6Ch] [rbp-9Ch]
	float v36; // [rsp+70h] [rbp-98h]
	float v37; // [rsp+74h] [rbp-94h]
	float v38; // [rsp+78h] [rbp-90h]
	float v39; // [rsp+7Ch] [rbp-8Ch]
	float v40; // [rsp+80h] [rbp-88h]
	float v41; // [rsp+84h] [rbp-84h]
	float v42; // [rsp+88h] [rbp-80h]
	float v43; // [rsp+8Ch] [rbp-7Ch]
	float v44; // [rsp+90h] [rbp-78h]
	float v45; // [rsp+94h] [rbp-74h]
	float v46; // [rsp+98h] [rbp-70h]
	float v47; // [rsp+9Ch] [rbp-6Ch]
	float v48; // [rsp+A0h] [rbp-68h]
	float v49; // [rsp+A4h] [rbp-64h]
	float v50; // [rsp+A8h] [rbp-60h]
	__int128 v51; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v52; // [rsp+C8h] [rbp-40h] BYREF
	int v53; // [rsp+D8h] [rbp-30h]
	__int128 v54; // [rsp+E8h] [rbp-20h] BYREF
	__int128 v55; // [rsp+F8h] [rbp-10h] BYREF
	int v56; // [rsp+108h] [rbp+0h]
	__int128 v57; // [rsp+118h] [rbp+10h] BYREF
	__int128 v58; // [rsp+128h] [rbp+20h] BYREF
	int v59; // [rsp+138h] [rbp+30h]

	v4 = *a1;
	v5 = (*a1)[1];
	v6 = **a1;
	v7 = *((_DWORD*)*a1 + 8);
	v56 = *((_DWORD*)*a1 + 20);
	v8 = *((_DWORD*)v4 + 32);
	v52 = v5;
	v51 = v6;
	v53 = v7;
	v59 = v8;
	v9 = v4[3];
	v10 = v4[6];
	v55 = v4[4];
	v57 = v10;
	v54 = v9;
	v11 = v4[7];
	a2[24] = v10;
	*a2 = v6;
	v12 = a1[1];
	v58 = v11;
	a2[12] = v9;
	LODWORD(v10) = *((_DWORD*)v12 + 6);
	v13 = *((float*)v12 + 2);
	v14 = *((float*)v12 + 8);
	LODWORD(v9) = *(_DWORD*)v12;
	v15 = *((float*)v12 + 4);
	v16 = *((float*)v12 + 10);
	LODWORD(v6) = *((_DWORD*)v12 + 9);
	v17 = *((float*)v12 + 1);
	v18 = *((float*)v12 + 5);
	v27 = -*(float*)&v6;
	v29 = -*(float*)&v10;
	v24 = v14;
	v33 = -v14;
	v26 = v18;
	v28 = v17;
	v30 = v16;
	v31 = -v13;
	v32 = v15;
	v34 = *(float*)&v9;
	sub_1401AE7B0(3ui64, (__int64)&v26, (float*)&v51 + 1, (__int64)(a2 + 1));
	sub_1401AE7B0(3ui64, (__int64)&v26, (float*)&v54 + 1, (__int64)(a2 + 13));
	sub_1401AE7B0(3ui64, (__int64)&v26, (float*)&v57 + 1, (__int64)(a2 + 25));
	v20 = v14 * v15;
	v25 = v14 * v14;
	v23 = v14 * *(float*)&v9;
	*(float*)&v11 = v14 * v21;
	v22 = v14 * 8.6602545;
	v26 = (float)(v15 * v19) + (float)(v21 * *(float*)&v9);
	v27 = (float)-(float)(*(float*)&v6 * v15) - *(float*)&v11;
	v28 = (float)(v22 * *(float*)&v6) * 0.2;
	v29 = (float)-(float)(*(float*)&v6 * *(float*)&v9) - (float)(v24 * v19);
	v30 = (float)(v19 * *(float*)&v9) - (float)(v21 * v15);
	v31 = (float)-(float)(v21 * v13) - (float)(*(float*)&v10 * v19);
	v32 = (float)(*(float*)&v6 * *(float*)&v10) + (float)(v16 * v21);
	v33 = (float)((float)(*(float*)&v6 * 8.6602545) * v16) * -0.2;
	v34 = (float)(*(float*)&v6 * v13) + (float)(v16 * v19);
	v35 = (float)(*(float*)&v10 * v21) - (float)(v13 * v19);
	v36 = (float)((float)((float)(*(float*)&v10 * 1.1547006) * v13)
		- (float)((float)((float)(v15 * *(float*)&v9) * 8.6602545) * 0.06666667))
		- (float)((float)((float)(v21 * v19) * 8.6602545) * 0.06666667);
	v37 = (float)((float)((float)(v20 * 8.6602545) * 0.06666667) - (float)((float)(*(float*)&v10 * 1.1547006) * v16))
		+ (float)((float)((float)(*(float*)&v6 * v21) * 8.6602545) * 0.06666667);
	v38 = (float)((float)(v16 * v16) - (float)(v25 * 0.5)) - (float)((float)(*(float*)&v6 * *(float*)&v6) * 0.5);
	v39 = (float)((float)((float)(v23 * 8.6602545) * 0.06666667) - (float)((float)(v13 * 1.1547006) * v16))
		+ (float)((float)((float)(*(float*)&v6 * v19) * 8.6602545) * 0.06666667);
	v49 = (float)(*(float*)&v6 * v19) - v23;
	v40 = (float)((float)((float)((float)((float)((float)(v13 * v13) * 8.6602545) * 0.06666667)
		- (float)((float)((float)((float)(*(float*)&v10 * *(float*)&v10) * 8.6602545)
			* 0.06666667)
			+ (float)((float)((float)(*(float*)&v9 * *(float*)&v9) * 8.6602545) * 0.033333335)))
		- (float)((float)((float)(v19 * v19) * 8.6602545) * 0.033333335))
		+ (float)((float)((float)(v15 * v15) * 8.6602545) * 0.033333335))
		+ (float)((float)((float)(v21 * v21) * 8.6602545) * 0.033333335);
	v47 = (float)(*(float*)&v6 * v21) - v20;
	v41 = (float)-(float)(*(float*)&v10 * *(float*)&v9) - (float)(v15 * v13);
	v42 = (float)(v24 * *(float*)&v10) + (float)(v16 * v15);
	v43 = (float)(v22 * v16) * -0.2;
	v44 = (float)(v24 * v13) + (float)(v16 * *(float*)&v9);
	v45 = (float)(*(float*)&v10 * v15) - (float)(v13 * *(float*)&v9);
	v46 = (float)(v15 * *(float*)&v9) - (float)(v21 * v19);
	v48 = (float)((float)(v25 * 8.6602545) * 0.1)
		- (float)((float)((float)(*(float*)&v6 * *(float*)&v6) * 8.6602545) * 0.1);
	v50 = (float)((float)((float)((float)(v21 * v21) + (float)(*(float*)&v9 * *(float*)&v9)) * 0.5)
		- (float)((float)(v19 * v19) * 0.5))
		- (float)((float)(v15 * v15) * 0.5);
	sub_1401AE7B0(5ui64, (__int64)&v26, (float*)&v52, (__int64)(a2 + 4));
	sub_1401AE7B0(5ui64, (__int64)&v26, (float*)&v55, (__int64)(a2 + 16));
	sub_1401AE7B0(5ui64, (__int64)&v26, (float*)&v58, (__int64)(a2 + 28));
}
// 1401AEB6C: variable 'v21' is possibly undefined
// 1401AEAD3: variable 'v19' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

