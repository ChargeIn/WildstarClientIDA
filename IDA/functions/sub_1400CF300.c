//----- (00000001400CF300) ----------------------------------------------------
bool __fastcall sub_1400CF300(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	_QWORD* v5; // rbx

	if (!(**(unsigned __int8(__fastcall***)(__int64, __int64))a2)(a2, a1))
		return (*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, a1) != 0;
	v4 = *(_QWORD**)(a1 + 560);
	v5 = (_QWORD*)*v4;
	if ((_QWORD*)*v4 == v4)
		return (*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, a1) != 0;
	while ((unsigned __int8)sub_1400CF300(v5[2], a2))
	{
		v5 = (_QWORD*)*v5;
		if (v5 == *(_QWORD**)(a1 + 560))
			return (*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, a1) != 0;
	}
	return 0;
}

