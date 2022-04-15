//----- (0000000140440230) ----------------------------------------------------
void __fastcall sub_140440230(__int64 a1)
{
	__int64 v2; // r8
	unsigned __int64 v3; // rdx
	__int64 v4; // [rsp+20h] [rbp-58h] BYREF
	int* v5; // [rsp+28h] [rbp-50h]
	int* v6; // [rsp+38h] [rbp-40h]
	__int64 v7; // [rsp+40h] [rbp-38h]
	int* v8; // [rsp+58h] [rbp-20h]
	__int64 v9; // [rsp+60h] [rbp-18h]

	v5 = sub_14018B280(32i64, 0);
	*(_QWORD*)v5 = v5;
	*((_QWORD*)v5 + 1) = v5;
	v6 = sub_14018B280(56i64, 0);
	v7 = 0i64;
	*(_BYTE*)v6 = 0;
	*((_QWORD*)v6 + 1) = 0i64;
	*((_QWORD*)v6 + 2) = v6;
	*((_QWORD*)v6 + 3) = v6;
	v9 = 0i64;
	v8 = sub_14018B280(40i64, 0);
	*(_BYTE*)v8 = 0;
	*((_QWORD*)v8 + 1) = 0i64;
	*((_QWORD*)v8 + 2) = v8;
	*((_QWORD*)v8 + 3) = v8;
	v2 = *(_QWORD*)(a1 + 8);
	v3 = (*(_QWORD*)(a1 + 16) - v2) / 80;
	if (v3 <= 3)
		sub_140440670((_QWORD*)a1, *(char**)(a1 + 16), 3 - v3, (__int64)&v4);
	else
		sub_140440330(a1, v2 + 240, *(_QWORD*)(a1 + 16));
	sub_1404400D0(&v4);
}

