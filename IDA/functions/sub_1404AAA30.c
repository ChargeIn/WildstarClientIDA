//----- (00000001404AAA30) ----------------------------------------------------
__int64 __fastcall sub_1404AAA30(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rax
	int v5; // ecx
	int v7; // [rsp+30h] [rbp+8h] BYREF

	v2 = 4i64;
	v7 = 0;
	sub_1404AADC0((__int64*)(a1 + 24), 4ui64, &v7);
	v3 = 3i64;
	do
	{
		if (qword_140C63840)
		{
			v4 = qword_140C63840(off_140A6A408, 1196i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
				goto LABEL_9;
			v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 1196i64);
		}
		if (v4)
		{
			v5 = *(_DWORD*)(v2 + v4 + 4);
			goto LABEL_10;
		}
	LABEL_9:
		v5 = 0;
	LABEL_10:
		v2 += 4i64;
		*(_DWORD*)(v2 + *(_QWORD*)(a1 + 24) - 4) = v5;
		--v3;
	} while (v3);
	return sub_1404AABA0(a1);
}
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;

