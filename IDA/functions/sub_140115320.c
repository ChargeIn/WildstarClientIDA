//----- (0000000140115320) ----------------------------------------------------
__int64 __fastcall sub_140115320(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // r15
	__int64* v4; // r8
	__int64 v5; // rbp
	int v6; // ecx
	int v7; // eax
	int v8; // esi
	char* v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rbx
	__int64 v12; // r14
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v17; // [rsp+30h] [rbp-68h] BYREF
	__int64 v18; // [rsp+38h] [rbp-60h]
	__int64 v19; // [rsp+40h] [rbp-58h]
	__int64(__fastcall * *v20)(); // [rsp+50h] [rbp-48h] BYREF
	int v21; // [rsp+58h] [rbp-40h]
	_QWORD* v22; // [rsp+60h] [rbp-38h]
	__int64 v23; // [rsp+A8h] [rbp+10h] BYREF

	v2 = sub_140114A30(a1);
	v3 = dword_140A12138;
	v4 = (__int64*)dword_140A12138;
	v5 = v2;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (__int64*)(a1[3] + 16i64);
	v6 = *((_DWORD*)v4 + 2);
	if (v6 == 3)
		goto LABEL_7;
	if (v6 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v23))
	{
		LODWORD(v18) = 3;
		v4 = &v17;
		v17 = v23;
	LABEL_7:
		v7 = (int)*(double*)v4;
		goto LABEL_8;
	}
	v7 = 0;
LABEL_8:
	v8 = v7;
	if (v7 > (unsigned __int64)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v5 + 1080) + 72i64))(*(_QWORD*)(v5 + 1080)))
		v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v5 + 1080) + 72i64))(*(_QWORD*)(v5 + 1080));
	v9 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v17, v9);
	v11 = v18;
	v12 = v19;
	if (v18 != v19)
	{
		v22 = a1;
		v21 = -2;
		v20 = off_140B56A08;
		sub_1400579E0((__int64)a1, v10, -2);
		v13 = (__int64)v22;
		v14 = v22[2];
		if (v22[3] + 48i64 < v14)
			v3 = (_DWORD*)(v22[3] + 48i64);
		*(_QWORD*)v14 = *(_QWORD*)v3;
		*(_DWORD*)(v14 + 8) = v3[2];
		*(_QWORD*)(v13 + 16) += 16i64;
		v21 = sub_1400578C0((__int64)v22);
		sub_14010ED20(v5, v8, v11, (v12 - v11) >> 1, (__int64)&v20);
		v20 = off_140B56A08;
		if (v22)
			sub_1400579E0((__int64)v22, v15, v21);
	}
	if (v11)
		sub_14018B900(v11, 0);
	return 0i64;
}
// 140115431: variable 'v10' is possibly undefined
// 1401154AB: variable 'v15' is possibly undefined
// 14010ED20: using guessed type __int64 __fastcall sub_14010ED20(_DWORD, _DWORD, _DWORD, _DWORD, __int64);
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

