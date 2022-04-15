#include "../winhttp.h"

//----- (0000000140255150) ----------------------------------------------------
__int64 __fastcall sub_140255150(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int128 v15; // [rsp+38h] [rbp-39h] BYREF
	int v16; // [rsp+4Ch] [rbp-25h]
	int v17; // [rsp+58h] [rbp-19h] BYREF
	__int64 v18; // [rsp+60h] [rbp-11h]
	int v19; // [rsp+6Ch] [rbp-5h]
	int v20; // [rsp+70h] [rbp-1h] BYREF
	__int64 v21; // [rsp+78h] [rbp+7h]
	int v22; // [rsp+84h] [rbp+13h]
	int v23; // [rsp+88h] [rbp+17h] BYREF
	__int64 v24; // [rsp+90h] [rbp+1Fh]
	int v25; // [rsp+9Ch] [rbp+2Bh]

	*((_QWORD*)&v15 + 1) = a1[209];
	v18 = a1[208];
	v21 = a1[207];
	v2 = a1[206];
	LODWORD(v15) = 1;
	v16 = 0;
	v17 = 1;
	v19 = 0;
	v20 = 1;
	v22 = 0;
	v23 = 1;
	v24 = v2;
	v25 = 0;
	(*(void(__fastcall**)(__int64, int*, int*, int*, __int128*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v23,
		&v20,
		&v17,
		&v15);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[211];
	v3 = a1[210];
	v23 = 1;
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v21 = v3;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v20,
		&v23,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[214];
	v4 = a1[213];
	v23 = 1;
	v21 = v4;
	v5 = a1[212];
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v17 = 1;
	v18 = v5;
	v19 = 0;
	(*(void(__fastcall**)(__int64, int*, int*, int*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v17,
		&v20,
		&v23,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[216];
	v23 = 1;
	v25 = 0;
	(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v23,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[243];
	v6 = a1[242];
	v23 = 1;
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v21 = v6;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v20,
		&v23,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[245];
	v7 = a1[244];
	v23 = 1;
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v21 = v7;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v20,
		&v23,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[256];
	v8 = a1[247];
	v23 = 1;
	v21 = v8;
	v9 = a1[246];
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v17 = 1;
	v18 = v9;
	v19 = 0;
	(*(void(__fastcall**)(__int64, int*, int*, int*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v17,
		&v20,
		&v23,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[249];
	v10 = a1[248];
	v23 = 1;
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v21 = v10;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v20,
		&v23,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[251];
	v11 = a1[250];
	v23 = 1;
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v21 = v11;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v20,
		&v23,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[253];
	v12 = a1[252];
	v23 = 1;
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v21 = v12;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v20,
		&v23,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	v24 = a1[255];
	v13 = a1[254];
	v23 = 1;
	v25 = 0;
	v20 = 1;
	v22 = 0;
	v21 = v13;
	(*(void(__fastcall**)(__int64, int*, int*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v20,
		&v23,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v15 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v15);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
}
// 140C65670: using guessed type __int64 qword_140C65670;

