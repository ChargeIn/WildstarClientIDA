//----- (0000000140117AE0) ----------------------------------------------------
__int64 __fastcall sub_140117AE0(_QWORD* a1)
{
	__int64 v2; // rdi
	char* v3; // rax
	_QWORD* v4; // rax
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]

	v2 = sub_140117A50(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v4 = sub_14018F2D0(&v6, v3);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 88i64))(v2, v4[1]);
	if (v7)
		sub_14018B900(v7, 0);
	return 0i64;
}

