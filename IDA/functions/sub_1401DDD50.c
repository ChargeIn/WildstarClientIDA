//----- (00000001401DDD50) ----------------------------------------------------
int* __fastcall sub_1401DDD50(__int64 a1, int* a2)
{
	__int64 v3; // rax
	int* v4; // rbx
	char v6[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v7; // [rsp+28h] [rbp-50h]
	__int64 v8; // [rsp+30h] [rbp-48h]
	int v9; // [rsp+40h] [rbp-38h] BYREF
	char v10[8]; // [rsp+48h] [rbp-30h] BYREF
	__int64 v11; // [rsp+50h] [rbp-28h]
	__int64 v12; // [rsp+80h] [rbp+8h] BYREF
	int* v13; // [rsp+90h] [rbp+18h] BYREF

	v12 = a1;
	v3 = *(_QWORD*)(qword_140C79A48 + 8);
	v4 = (int*)qword_140C79A48;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < (unsigned int)*a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == (int*)qword_140C79A48 || *a2 < (unsigned int)v4[8])
	{
		v7 = sub_14018B280(56i64, 0);
		v8 = 0i64;
		*(_BYTE*)v7 = 0;
		*((_QWORD*)v7 + 1) = 0i64;
		*((_QWORD*)v7 + 2) = v7;
		*((_QWORD*)v7 + 3) = v7;
		v9 = *a2;
		sub_1401DE080((__int64)v10, (__int64)v6);
		v12 = (__int64)v4;
		sub_1401DE370((__int64)&unk_140C79A40, &v13, &v12, &v9);
		v4 = v13;
		sub_140008410((__int64)v10);
		sub_14018B900(v11, 0);
		sub_140008410((__int64)v6);
		sub_14018B900((__int64)v7, 0);
	}
	return v4 + 10;
}
// 140C79A48: using guessed type __int64 qword_140C79A48;
// 1401DDD50: using guessed type char var_58[8];
// 1401DDD50: using guessed type char var_30[8];

