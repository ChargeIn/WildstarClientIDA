//----- (0000000140167800) ----------------------------------------------------
__int64 __fastcall sub_140167800(_QWORD* a1)
{
	__int64 v2; // rdi
	char* v3; // rax
	__m128i* v4; // rbx
	__int64 v5; // rdx
	__int64 v7; // [rsp+30h] [rbp-78h] BYREF
	__m128i* v8; // [rsp+38h] [rbp-70h]
	__int64 v9; // [rsp+50h] [rbp-58h] BYREF
	char v10; // [rsp+58h] [rbp-50h]
	__int128 v11; // [rsp+60h] [rbp-48h]
	__int128 v12; // [rsp+70h] [rbp-38h]
	__int128 v13; // [rsp+80h] [rbp-28h]
	__int64 v14; // [rsp+90h] [rbp-18h]

	v2 = sub_1401657E0(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v7, v3);
	sub_140056AB0(a1, 3u);
	v4 = v8;
	v5 = *(_QWORD*)(v2 + 32);
	v12 = 0i64;
	v9 = 0i64;
	v11 = 0i64;
	v13 = 0i64;
	v10 = 0;
	v14 = 0i64;
	sub_14010B330(&v9, v5, v8, 0i64);
	sub_1400C3730(v2 + 1624, (__int64)&v9);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 0i64;
}

