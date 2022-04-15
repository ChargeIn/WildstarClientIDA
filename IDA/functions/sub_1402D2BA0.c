//----- (00000001402D2BA0) ----------------------------------------------------
__int64 __fastcall sub_1402D2BA0(__int64 a1, int a2, __int64 a3, __int64* a4)
{
	__int64 v4; // rdi
	_QWORD* v5; // rsi
	__int64 v7; // rbx
	__int64 v8; // rbx
	__int128* v9; // rax
	__int64 v10; // rdx
	__int128 v11; // xmm0
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	_BYTE* v18; // [rsp+20h] [rbp-48h]
	__int128 v19[2]; // [rsp+30h] [rbp-38h] BYREF
	int v20; // [rsp+50h] [rbp-18h]
	int v21; // [rsp+54h] [rbp-14h]
	int v22; // [rsp+58h] [rbp-10h]
	int v23; // [rsp+5Ch] [rbp-Ch]

	v4 = *a4;
	v5 = *(_QWORD**)(*a4 + 48);
	v7 = v5[41];
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		*(_QWORD*)(v7 + 88),
		14i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(qword_140C65670, *(_QWORD*)(v7 + 96));
	v8 = (*(__int64(__fastcall**)(_QWORD*))(*v5 + 16i64))(v5);
	v9 = (__int128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 104i64))(v8);
	v10 = *(_QWORD*)v8;
	v19[0] = *v9;
	v11 = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(v10 + 120))(v8);
	v12 = *(_QWORD*)v8;
	v19[1] = v11;
	*(float*)&v11 = (*(float(__fastcall**)(__int64))(v12 + 136))(v8);
	v13 = *(_QWORD*)v8;
	v20 = v11;
	*(float*)&v11 = (*(float(__fastcall**)(__int64))(v13 + 168))(v8);
	v14 = *(_QWORD*)v8;
	v21 = v11;
	*(float*)&v11 = (*(float(__fastcall**)(__int64))(v14 + 184))(v8);
	v15 = *(_QWORD*)v8;
	v22 = v11;
	*(float*)&v11 = (*(float(__fastcall**)(__int64))(v15 + 200))(v8);
	v16 = *(unsigned __int8*)(*(_QWORD*)(v4 + 56) + 20i64);
	v18 = *(_BYTE**)(v4 + 56);
	v23 = v11;
	sub_1402D8010(v5[38] + 192 * v16, a2, (__int64)v19, (__int64)v5, v18);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

