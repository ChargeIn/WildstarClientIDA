//----- (0000000140119860) ----------------------------------------------------
int* __fastcall sub_140119860(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64 v7; // rax
	char** v8; // rdi
	char* v9; // rsi
	__int64 v10; // rax
	__int64 v11; // r8
	_QWORD* v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	unsigned __int64* v15; // r10
	unsigned __int64 v16; // r8
	__int64* v17; // rsi
	__int64 v18; // rax
	unsigned int* v19; // r9
	__int64 v21; // [rsp+20h] [rbp-18h] BYREF
	int v22; // [rsp+28h] [rbp-10h]

	v1 = *(_QWORD**)(a1 + 400);
	sub_1400F2440(a1 + 384, (__int64)"Apollo", (__int64)sub_140119250);
	sub_140119250(v1);
	sub_14014FD00(v1);
	sub_140154AC0(v1);
	sub_1401339D0(v1);
	sub_140145270(v1);
	sub_140146ED0(v1);
	sub_140148DA0(v1);
	sub_14014ABE0(v1);
	sub_14014D4A0(v1);
	sub_140184370(v1);
	sub_140121730(v1);
	sub_1400569B0((__int64)v1, (unsigned __int64*)"CColor");
	v3 = v1[2];
	*(_QWORD*)v3 = *(_QWORD*)(v3 - 16);
	*(_DWORD*)(v3 + 8) = *(_DWORD*)(v3 - 8);
	v1[2] += 16i64;
	v4 = v1[2];
	v5 = sub_140062650((__int64)v1, (unsigned __int64*)"__index", 7ui64);
	v6 = (unsigned int*)(v1[2] - 16i64);
	v21 = v5;
	v22 = 4;
	sub_14005EA50((__int64)v1, (__int64*)(v4 - 32), (int*)&v21, v6);
	v1[2] -= 16i64;
	v7 = v1[2];
	v8 = &off_140C2C810;
	if (off_140C2C810)
	{
		do
		{
			v9 = v8[1];
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v10 = v1[5];
			if (v10 == v1[10])
				v11 = v1[15];
			else
				v11 = *(_QWORD*)(**(_QWORD**)(v10 + 8) + 24i64);
			v12 = sub_140060AB0((__int64)v1, 0, v11);
			v12[4] = v9;
			v13 = v1[2];
			*(_QWORD*)v13 = v12;
			*(_DWORD*)(v13 + 8) = 6;
			v1[2] += 16i64;
			v14 = (__int64*)sub_1400580E0((__int64)v1, -2);
			v16 = -1i64;
			v17 = v14;
			do
				++v16;
			while (*((_BYTE*)v15 + v16));
			v18 = sub_140062650((__int64)v1, v15, v16);
			v19 = (unsigned int*)(v1[2] - 16i64);
			v21 = v18;
			v22 = 4;
			sub_14005EA50((__int64)v1, v17, (int*)&v21, v19);
			v1[2] -= 16i64;
			v7 = v1[2];
			v8 += 2;
		} while (*v8);
	}
	v1[2] = v7 - 16;
	sub_140057020(v1, "CColor", &off_140C2C7D0);
	v1[2] -= 16i64;
	sub_1400F2440(a1 + 384, (__int64)"GenericDialog", (__int64)sub_140121700);
	sub_1400D5220(a1);
	sub_140131300(a1);
	sub_140114700(a1);
	sub_14015C540(a1);
	sub_1401654B0(a1);
	sub_14016ABD0(a1);
	sub_140171B80(a1);
	sub_1401765B0(a1);
	sub_140173DF0(a1);
	sub_140177720(a1);
	sub_14017F360(a1);
	sub_1401849F0(a1);
	sub_14017A7D0(a1);
	sub_1401176D0(a1);
	sub_14012A350(a1);
	sub_14017C140(a1);
	sub_140181D80(a1);
	return sub_1401832D0(a1);
}
// 1401199F3: variable 'v15' is possibly undefined
// 140C2C7D0: using guessed type char *off_140C2C7D0;
// 140C2C810: using guessed type char *off_140C2C810;

