//----- (000000014048BF80) ----------------------------------------------------
FILETIME* __fastcall sub_14048BF80(FILETIME* a1, FILETIME* a2)
{
	int* v3; // rax
	signed int LastError; // eax
	bool v5; // sf
	int* v6; // rax
	FILETIME v7; // rax
	unsigned __int8 v8; // dl
	int* v9; // rax
	_WORD* v10; // rax
	FILETIME FileTime; // [rsp+20h] [rbp-28h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

	if (!*(_QWORD*)&a1[4])
	{
		v3 = sub_14018B280(18i64, 0);
		if (v3)
		{
			*((_QWORD*)v3 + 1) = 0i64;
			*(_QWORD*)v3 = off_140B55060;
			*((_WORD*)v3 + 8) = 0;
			*a2 = (FILETIME)(v3 + 4);
		}
		else
		{
			MEMORY[0x10] = 0;
			*a2 = (FILETIME)16i64;
		}
		return a2;
	}
	FileTime = a1[4];
	if (!FileTimeToSystemTime(&FileTime, &SystemTime))
	{
		LastError = GetLastError();
		v5 = LastError < 0;
		if (LastError > 0)
			v5 = 1;
		if (v5)
		{
			v6 = sub_14018B280(18i64, 0);
			if (v6)
			{
				*((_QWORD*)v6 + 1) = 0i64;
				v7 = (FILETIME)(v6 + 4);
				*(_QWORD*)(*(_QWORD*)&v7 - 16i64) = off_140B55060;
				*(_WORD*)v7.dwLowDateTime = 0;
			}
			else
			{
				v7 = (FILETIME)16i64;
				MEMORY[0x10] = 0;
			}
			goto LABEL_19;
		}
	}
	FileTime = 0i64;
	if (sub_14034BFC0(&SystemTime, (int**)&FileTime) >= 0)
	{
		v7 = FileTime;
	LABEL_19:
		*a2 = v7;
		return a2;
	}
	sub_1400035B0();
	v9 = sub_14018B280(18i64, v8);
	if (v9)
	{
		*((_QWORD*)v9 + 1) = 0i64;
		*(_QWORD*)v9 = off_140B55060;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = v9 + 4;
	*v10 = 0;
	*a2 = (FILETIME)v10;
	if (FileTime)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)&FileTime - 16i64) + 8i64))(*(_QWORD*)&FileTime - 16i64);
	return a2;
}
// 14048C090: variable 'v8' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

