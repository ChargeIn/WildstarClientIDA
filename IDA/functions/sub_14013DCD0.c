//----- (000000014013DCD0) ----------------------------------------------------
__int64 __fastcall sub_14013DCD0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // r9
	__int64 v6; // rdx
	unsigned __int64 v8; // [rsp+80h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 40);
	v8 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v3 + 176i64))(v3, a2, &v8);
	v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 72i64))(*(_QWORD*)(a1 + 40));
	v5 = v8;
	v6 = *(_QWORD*)(a1 + 40);
	if (v8 > v4)
		v5 = -1i64;
	v8 = v5;
	return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
		qword_140C65680,
		v6,
		0i64);
}
// 140C65680: using guessed type __int64 qword_140C65680;

