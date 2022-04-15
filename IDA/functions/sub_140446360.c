#include "../winhttp.h"

//----- (0000000140446360) ----------------------------------------------------
__int64 __fastcall sub_140446360(__int64* a1)
{
	__int64 result; // rax
	int** v3; // r14
	int* v4; // rax
	unsigned int v5; // esi
	int* v6; // rdi
	HANDLE MutexW; // rax
	signed int LastError; // eax
	int v9; // ebx
	int v10; // ebx
	WCHAR Name[64]; // [rsp+30h] [rbp-4C8h] BYREF
	char v12[528]; // [rsp+B0h] [rbp-448h] BYREF
	int v13[132]; // [rsp+2C0h] [rbp-238h] BYREF

	result = sub_14001B370(v12, 260i64, L"ZoneMapClient_%d", 16042i64);
	if ((int)result < 0)
		return result;
	v3 = (int**)(a1 + 7);
	if (a1 == (__int64*)-56i64)
		return 2147942487i64;
	v4 = sub_14018B280(24i64, 0);
	v5 = 0;
	v6 = v4;
	if (v4)
	{
		*(_QWORD*)v4 = off_140B5E770;
		v4[2] = 1;
		*((_QWORD*)v4 + 2) = 0i64;
	}
	else
	{
		v6 = 0i64;
	}
	sub_14019FD40(Name, 64i64, (__int64)L"Mutex", v12, 0);
	MutexW = CreateMutexW(0i64, 0, Name);
	*((_QWORD*)v6 + 2) = MutexW;
	if (MutexW)
	{
		v9 = GetLastError() == 183;
	}
	else
	{
		LastError = GetLastError();
		v9 = LastError;
		if (LastError > 0)
			v9 = (unsigned __int16)LastError | 0x80070000;
		if (v9 < 0)
		{
			(*(void(__fastcall**)(int*))(*(_QWORD*)v6 + 8i64))(v6);
			goto LABEL_14;
		}
	}
	*v3 = v6;
LABEL_14:
	result = (unsigned int)v9;
	if (v9 >= 0)
	{
		if ((*(unsigned int(__fastcall**)(int*, __int64))(*(_QWORD*)*v3 + 16i64))(*v3, 0xFFFFFFFFi64))
		{
			v10 = sub_14001B370(v13, 260i64, L"%s.ZoneToIndices", v12);
			if (v10 >= 0)
				v10 = sub_140446530(a1, v12, v13);
			(*(void(__fastcall**)(int*))(*(_QWORD*)*v3 + 24i64))(*v3);
			if (v10 < 0)
				return (unsigned int)v10;
			return v5;
		}
		else
		{
			return 2147549183i64;
		}
	}
	return result;
}
// 140A44790: using guessed type wchar_t aMutex[6];
// 140B027F8: using guessed type wchar_t aSZonetoindices[17];
// 140B028E8: using guessed type wchar_t aZonemapclientD[17];
// 140B5E770: using guessed type __int64 (__fastcall *off_140B5E770[9])();
// 140446360: using guessed type int var_238[132];

