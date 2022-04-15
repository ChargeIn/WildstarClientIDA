//----- (000000014072E480) ----------------------------------------------------
__int64 __fastcall sub_14072E480(_QWORD* a1)
{
	_QWORD* v2; // rbx
	unsigned int v3; // eax
	__int64 v4; // rax

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v2 + 136i64))(*v2, v3);
		if (v4)
			return sub_140663030(a1, v4);
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
	}
	return 0i64;
}

