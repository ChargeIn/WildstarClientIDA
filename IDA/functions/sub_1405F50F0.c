//----- (00000001405F50F0) ----------------------------------------------------
__int64 __fastcall sub_1405F50F0(__int64 a1, unsigned int* a2)
{
	int v3; // edx
	__int64 v4; // rax
	__int64 v6; // rax

	v3 = a2[1] - 2;
	if (v3)
	{
		if (v3 == 1)
		{
			v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
				qword_140C65980,
				*a2,
				0i64);
			if (v4)
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v4 + 360i64))(v4, *a2, a2[2], a2[3]);
				return 0i64;
			}
		}
	}
	else
	{
		v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
			qword_140C65980,
			*a2,
			0i64);
		if (v6)
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v6 + 352i64))(v6, *a2, a2[2], a2[3]);
	}
	return 0i64;
}
// 140C65980: using guessed type __int64 qword_140C65980;

