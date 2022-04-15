//----- (000000014085CF20) ----------------------------------------------------
__int64* __fastcall sub_14085CF20(__int64* a1, __int64* a2)
{
	__int64 v2; // rcx
	__int64 v4; // rcx
	__int64 v5; // rax

	v2 = *a1;
	*a2 = 0i64;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 72);
		if (v4)
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 248i64))(v4);
			if (v5)
				*a2 = v5;
		}
	}
	return a2;
}

