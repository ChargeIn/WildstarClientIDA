//----- (000000014004D210) ----------------------------------------------------
__int64 __fastcall sub_14004D210(__int64* a1)
{
	int* v3; // rax
	__int64 v4; // rax
	__int64 v5; // rbx
	int v6; // esi

	if (!a1)
		return 2147500035i64;
	v3 = sub_14018B280(464i64, 8u);
	if (!v3)
		return 2147500037i64;
	v4 = sub_14004C2D0((__int64)v3);
	v5 = v4;
	if (!v4)
		return 2147500037i64;
	v6 = sub_14004C8C0(v4);
	if (v6 >= 0)
		*a1 = v5;
	else
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 16i64))(v5, 1i64);
	return (unsigned int)v6;
}

