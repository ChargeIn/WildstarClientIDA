//----- (0000000140217A60) ----------------------------------------------------
__int64 sub_140217A60()
{
	int* v0; // rax
	__int64 v1; // r8
	__int64 v2; // rbx
	void(__fastcall * **v3)(_QWORD); // rcx
	int v4; // edi
	int* v6; // rax
	int* v7; // rax
	_DWORD* v8; // rax

	if (qword_140C65358)
		goto LABEL_25;
	if (qword_140C63970 && (unsigned int)sub_1401E84A0(L"ModelAttachment"))
	{
		v0 = sub_14018B280(80i64, 0);
		v2 = (__int64)v0;
		if (v0)
		{
			v3 = (void(__fastcall***)(_QWORD))qword_140C63970;
			v0[2] = 1;
			*(_QWORD*)v0 = off_140B79650;
			v0[8] = 0;
			*((_QWORD*)v0 + 2) = v3;
			*((_QWORD*)v0 + 5) = 0i64;
			v0[12] = 0;
			*((_QWORD*)v0 + 3) = &off_140ACFEF8;
			*((_QWORD*)v0 + 7) = 0i64;
			*((_QWORD*)v0 + 8) = 0i64;
			v0[18] = 0;
			(**v3)(v3);
		}
		else
		{
			v2 = 0i64;
		}
		v4 = sub_1407BEFC0(v2, 0i64, v1);
		if (v4 < 0)
		{
			if (v2)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
				return (unsigned int)v4;
			}
			return (unsigned int)v4;
		}
		goto LABEL_24;
	}
	if (dword_140C63950)
	{
		if (!dword_140C64D54)
			goto LABEL_12;
	LABEL_15:
		v7 = sub_14018B280(48i64, 0);
		v2 = (__int64)v7;
		if (v7)
		{
			v7[2] = 1;
			*((_QWORD*)v7 + 3) = 0i64;
			*((_QWORD*)v7 + 2) = &off_140ACFEF8;
			*((_QWORD*)v7 + 4) = 0i64;
			*(_QWORD*)v7 = off_140B79850;
			*((_QWORD*)v7 + 5) = 0i64;
		}
		else
		{
			v2 = 0i64;
		}
		v8 = sub_1407C0C50(*((_QWORD**)&unk_140C66660 + qword_140C66658), *(__int16***)(v2 + 16));
		*(_QWORD*)(v2 + 40) = v8;
		if (!v8)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
			return 2147500037i64;
		}
		goto LABEL_24;
	}
	if (dword_140C1E48C)
		goto LABEL_15;
LABEL_12:
	v6 = sub_14018B280(48i64, 0);
	v2 = (__int64)v6;
	if (v6)
	{
		v6[2] = 1;
		*((_QWORD*)v6 + 3) = 0i64;
		*(_QWORD*)v6 = off_140B798C0;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 2) = &off_140ACFEF8;
		*((_QWORD*)v6 + 5) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	v4 = (*(__int64(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v2 + 96i64))(v2, L"DB\\ModelAttachment.tbl");
	if (v4 < 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		return (unsigned int)v4;
	}
LABEL_24:
	qword_140C65358 = v2;
	if (v2)
		LABEL_25:
	dword_140C64C4C = 0;
	return 0i64;
}
// 140217AFC: variable 'v1' is possibly undefined
// 140A937D8: using guessed type wchar_t aModelattachmen[16];
// 140A938F8: using guessed type wchar_t aDbModelattachm[23];
// 140ACFEF8: using guessed type wchar_t *off_140ACFEF8;
// 140B79650: using guessed type __int64 (__fastcall *off_140B79650[12])();
// 140B79850: using guessed type __int64 (__fastcall *off_140B79850[13])();
// 140B798C0: using guessed type __int64 (__fastcall *off_140B798C0[13])();
// 140C1E48C: using guessed type int dword_140C1E48C;
// 140C63950: using guessed type int dword_140C63950;
// 140C63970: using guessed type __int64 qword_140C63970;
// 140C64C4C: using guessed type int dword_140C64C4C;
// 140C64D54: using guessed type int dword_140C64D54;
// 140C65358: using guessed type __int64 qword_140C65358;
// 140C66658: using guessed type __int64 qword_140C66658;
