//----- (00000001407A83E0) ----------------------------------------------------
__int64 __fastcall sub_1407A83E0(_QWORD* a1, int a2, int a3)
{
	_QWORD* v4; // rax

	if (a3 == 1)
		return *(_QWORD*)(a1[13] + 8i64 * a2);
	v4 = a1 + 15;
	if (a3 != 2)
		v4 = a1 + 17;
	return *(_QWORD*)(*v4 + 8i64 * a2);
}

