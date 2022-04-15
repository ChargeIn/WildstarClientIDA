//----- (0000000140618780) ----------------------------------------------------
__int64 __fastcall sub_140618780(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx

	v1 = *(_QWORD**)(a1 + 56);
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 == v1)
		return 0i64;
	while (!(unsigned int)sub_1403C92E0(a1, *(_DWORD*)(*(_QWORD*)(v3[2] + 8i64) + 20i64)))
	{
		v3 = (_QWORD*)*v3;
		if (v3 == *(_QWORD**)(a1 + 56))
			return 0i64;
	}
	return v3[2];
}
// 1406187AB: variable 'a1' is possibly undefined

