//----- (000000014010B100) ----------------------------------------------------
__int64 __fastcall sub_14010B100(unsigned int* a1)
{
	__int64 v1; // rdx
	__int64 result; // rax
	__int64 v3; // rcx

	v1 = *a1;
	if ((int)v1 >= 0)
	{
		result = qword_140C63650;
		v3 = *(_QWORD*)(qword_140C63650 + 1832);
		if (v3)
			return (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v3 + 16i64))(
				v3,
				v1,
				0i64,
				0i64,
				0i64,
				0i64,
				0i64);
	}
	else
	{
		result = *((_QWORD*)a1 + 3);
		if (*((_QWORD*)a1 + 2) != result)
			return sub_1400E2370(qword_140C63650, *((_QWORD*)a1 + 2));
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

