//----- (00000001401B85C0) ----------------------------------------------------
__int64 __fastcall sub_1401B85C0(__int64 a1, unsigned int a2, _QWORD* a3)
{
	_QWORD* v3; // rax

	if (!a3)
		return 2147942487i64;
	if (!a2)
		return 2147942487i64;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624))
		return 2147942487i64;
	v3 = (_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * a2);
	if (!v3[1])
		return 2147942487i64;
	*a3 = *v3;
	return 0i64;
}

