//----- (0000000140450280) ----------------------------------------------------
__int64 __fastcall sub_140450280(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64(__fastcall * v4)(wchar_t**, _QWORD, __int64); // r9
	__int64 i; // rdi
	__int64 v6; // rax
	unsigned int v7; // esi
	__int64 v8; // rax

	v2 = 0i64;
	if (!*(_QWORD*)(a2 + 16))
		return 1i64;
	v4 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	for (i = 0i64; ; i += 16i64)
	{
		v6 = *(_QWORD*)(a2 + 8);
		if (*(_DWORD*)(v6 + i))
			goto LABEL_12;
		v7 = *(_DWORD*)(v6 + i + 4);
		if (v4)
			break;
		if (!dword_140C64170)
		{
			if ((int)sub_1401E89C0() >= 0)
			{
				v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v7);
				goto LABEL_9;
			}
		LABEL_11:
			v4 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		}
	LABEL_12:
		if ((unsigned __int64)++v2 >= *(_QWORD*)(a2 + 16))
			return 1i64;
	}
	v8 = v4(off_140A690C8, v7, qword_140C63858);
LABEL_9:
	if (!v8 || (*(_BYTE*)(v8 + 4) & 1) == 0)
		goto LABEL_11;
	return 0i64;
}
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;

