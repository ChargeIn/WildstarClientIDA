//----- (00000001405CF120) ----------------------------------------------------
void __fastcall sub_1405CF120(__int64 a1, __int64 a2, double a3)
{
	double v3; // xmm8_8
	float v5; // xmm11_4
	float v6; // xmm0_4
	double v7; // xmm0_8
	int* v8; // rax
	__int64 v9; // rcx
	int v10; // [rsp+20h] [rbp-A8h] BYREF
	__int64 v11; // [rsp+24h] [rbp-A4h]
	int* v12; // [rsp+30h] [rbp-98h]
	unsigned __int64 v13; // [rsp+38h] [rbp-90h] BYREF
	__int64 v14; // [rsp+40h] [rbp-88h]
	__int64 v15; // [rsp+48h] [rbp-80h]
	__int64 v16; // [rsp+50h] [rbp-78h]

	*(_QWORD*)&v3 = *(unsigned int*)(a2 + 12);
	v11 = 8i64;
	v5 = -sub_1408FE3D0(v3);
	v6 = sub_1408FC950(v3);
	LODWORD(v3) = sub_1408FD190(-v5, -(float)-v6);
	v7 = sub_1408FCF3C(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fmaxf(-1.0, fminf(0.0, 1.0)))));
	v8 = sub_14018C320(0i64, 0x240ui64, 8u);
	*v8 = 14;
	v9 = (__int64)v8;
	*((_QWORD*)v8 + 2) = 0i64;
	v8[2] = LODWORD(v3);
	v8[3] = LODWORD(v7);
	v12 = v8;
	v10 = 1;
	v13 = 0i64;
	v14 = 0i64;
	v15 = 0i64;
	v16 = 0i64;
	LODWORD(v8) = *(_DWORD*)(a2 + 8);
	v16 = v9;
	v13 = __PAIR64__(dword_140C636A8, (unsigned int)v8);
	v14 = 0x100000001i64;
	LODWORD(v15) = 1;
	sub_14057A830(qword_140C65898, (int*)&v13, a3);
	sub_14079A4F0((__int64)&v10);
	sub_14018B900((__int64)v12, 0);
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

