//----- (00000001407C0F60) ----------------------------------------------------
__int64 sub_1407C0F60()
{
	__int64 result; // rax
	unsigned __int64 i; // rbx
	__int64 v2; // rcx
	__int64 v3; // rcx

	dword_140C66690 = 0;
	if (qword_140C66688)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C66688 + 8i64))(qword_140C66688);
		qword_140C66688 = 0i64;
	}
	if (qword_140C66680)
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C66680 + 72i64))(qword_140C66680, 1i64);
	qword_140C66680 = 0i64;
	for (i = 0i64; i < 0x10; i += 8i64)
	{
		v2 = *(_QWORD*)((char*)&unk_140C66670 + i);
		if (v2)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
			*(_QWORD*)((char*)&unk_140C66670 + i) = 0i64;
		}
		v3 = *(_QWORD*)((char*)&unk_140C66660 + i);
		if (v3)
			result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 72i64))(v3, 1i64);
		*(_QWORD*)((char*)&unk_140C66660 + i) = 0i64;
	}
	qword_140C66658 = 0i64;
	return result;
}
// 140C66658: using guessed type __int64 qword_140C66658;
// 140C66680: using guessed type __int64 qword_140C66680;
// 140C66688: using guessed type __int64 qword_140C66688;
// 140C66690: using guessed type int dword_140C66690;

