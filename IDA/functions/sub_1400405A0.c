//----- (00000001400405A0) ----------------------------------------------------
__int64 sub_1400405A0()
{
	__int64 v0; // rbx
	__int64 v1; // rbx
	__int64* v2; // rbx
	__int64 v3; // rcx
	__int64 v4; // rcx

	v0 = qword_140C63650;
	sub_1401981B0((__int64**)(qword_140C63650 + 1992));
	v1 = v0 + 1960;
	if (*(_QWORD*)(v1 + 16))
	{
		sub_140044CA0(v1, *(_QWORD**)(*(_QWORD*)(v1 + 8) + 8i64));
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 16i64) = *(_QWORD*)(v1 + 8);
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24i64) = *(_QWORD*)(v1 + 8);
		*(_QWORD*)(v1 + 16) = 0i64;
	}
	v2 = (__int64*)qword_140C66E38;
	if (qword_140C66E38)
	{
		do
		{
			v3 = v2[17];
			if (v3)
			{
				sub_14018B900(v3, 0);
				v2[17] = 0i64;
			}
			v4 = v2[9];
			if (v4)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 8i64))(v4, 1i64);
				v2[9] = 0i64;
			}
			sub_140040310(v2);
			v2 = (__int64*)v2[20];
		} while (v2);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C66E38: using guessed type __int64 qword_140C66E38;

