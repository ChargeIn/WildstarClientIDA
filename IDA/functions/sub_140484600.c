//----- (0000000140484600) ----------------------------------------------------
int* __fastcall sub_140484600(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v4; // rax
	int* v5; // rbx
	char v7[8]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v8; // [rsp+28h] [rbp-50h]
	__int64 v9; // [rsp+30h] [rbp-48h]
	__int64 v10; // [rsp+38h] [rbp-40h]
	int v11; // [rsp+40h] [rbp-38h] BYREF
	__int64 v12; // [rsp+48h] [rbp-30h] BYREF
	__int64 v13; // [rsp+50h] [rbp-28h]
	int* v14; // [rsp+80h] [rbp+8h] BYREF
	int* v15; // [rsp+90h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = (int*)v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < (unsigned int)*a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = (int*)v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == (int*)v2 || *a2 < (unsigned int)v5[8])
	{
		v8 = 0i64;
		v9 = 0i64;
		v10 = 0i64;
		v11 = *a2;
		sub_140484740(&v12, (__int64)v7);
		v14 = v5;
		sub_1404847E0(a1, &v15, (__int64*)&v14, &v11);
		v5 = v15;
		if (v13)
			sub_14018B900(v13, 0);
	}
	return v5 + 10;
}
// 140484600: using guessed type char var_58[8];

