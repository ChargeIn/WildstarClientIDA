//----- (0000000140440180) ----------------------------------------------------
void __fastcall sub_140440180(__int64 a1)
{
	__int64* v1; // rdi
	__int64 v2; // rbx
	unsigned __int64 v4; // rax
	__int64* v5; // rbx
	__int64* v6; // rax
	char v7[8]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v8; // [rsp+38h] [rbp-20h]
	__int64 v9; // [rsp+40h] [rbp-18h]
	__int64 v10; // [rsp+48h] [rbp-10h]

	v1 = *(__int64**)(a1 + 16);
	v2 = *(_QWORD*)(a1 + 8);
	v8 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v4 = ((__int64)v1 - v2) >> 5;
	if (v4 <= 0x11)
	{
		sub_1404403D0(a1, v1, 17 - v4, (__int64)v7);
	}
	else
	{
		v5 = (__int64*)(v2 + 544);
		v6 = sub_140441CA0((__int64)v1, (__int64)v1, v5);
		sub_1404409D0(v6, *(__int64**)(a1 + 16));
		*(_QWORD*)(a1 + 16) += -32 * (((char*)v1 - (char*)v5) >> 5);
	}
}
// 140440180: using guessed type char var_28[8];

