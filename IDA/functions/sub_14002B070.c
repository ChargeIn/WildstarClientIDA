//----- (000000014002B070) ----------------------------------------------------
__int64 __fastcall sub_14002B070(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rbp
	_WORD* v4; // rsi
	__int64 v5; // rbx
	_WORD* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	int v10; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C63608 + 104);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 80i64))(v2, *(_QWORD*)(a1 + 8));
	v3 = *(_QWORD*)(a1 + 16);
	v4 = *(_WORD**)(a1 + 8);
	v5 = (v3 - (__int64)v4) >> 1;
	if (!v5
		|| (HIWORD(v10) = 32, v6 = sub_14002C8A0(v4, v3, v10), v6 == (_WORD*)v3)
		|| (v7 = v6 - v4, v8 = v7 + 1, v7 == -1))
	{
		v8 = (v3 - (__int64)v4) >> 1;
	}
	sub_140111750(v2, v8, v5);
	return 0i64;
}
// 140C63608: using guessed type __int64 qword_140C63608;

