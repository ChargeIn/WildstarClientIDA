//----- (00000001409057F4) ----------------------------------------------------
__int64 __fastcall sub_1409057F4(_DWORD* a1)
{
	unsigned int v2; // edi
	int v4; // ebp
	int wMonth; // r9d
	int v6; // r8d
	int v7; // eax
	int v8; // r14d
	int v9; // ebx
	int v10; // r9d
	int v11; // ecx
	int v12; // eax
	int wDay; // [rsp+20h] [rbp-58h]
	int wDayOfWeek; // [rsp+28h] [rbp-50h]
	int wHour; // [rsp+38h] [rbp-40h]
	int wMinute; // [rsp+40h] [rbp-38h]
	int wSecond; // [rsp+48h] [rbp-30h]
	int wMilliseconds; // [rsp+50h] [rbp-28h]
	int v19; // [rsp+88h] [rbp+10h] BYREF

	v2 = 0;
	v19 = 0;
	if ((unsigned int)sub_1409056F8(&v19))
	{
		sub_1407DC390();
		JUMPOUT(0x140905A9Ci64);
	}
	if (!v19)
		return 0i64;
	v4 = a1[5];
	if (v4 != dword_140C1B150 || v4 != dword_140C1B160)
	{
		if (dword_140C6347C)
		{
			if (TimeZoneInformation.DaylightDate.wYear)
				sub_140905F08(
					1,
					0,
					v4,
					TimeZoneInformation.DaylightDate.wMonth,
					0,
					0,
					TimeZoneInformation.DaylightDate.wDay,
					TimeZoneInformation.DaylightDate.wHour,
					TimeZoneInformation.DaylightDate.wMinute,
					TimeZoneInformation.DaylightDate.wSecond,
					TimeZoneInformation.DaylightDate.wMilliseconds);
			else
				sub_140905F08(
					1,
					1,
					v4,
					TimeZoneInformation.DaylightDate.wMonth,
					TimeZoneInformation.DaylightDate.wDay,
					TimeZoneInformation.DaylightDate.wDayOfWeek,
					0,
					TimeZoneInformation.DaylightDate.wHour,
					TimeZoneInformation.DaylightDate.wMinute,
					TimeZoneInformation.DaylightDate.wSecond,
					TimeZoneInformation.DaylightDate.wMilliseconds);
			wMonth = TimeZoneInformation.StandardDate.wMonth;
			wMilliseconds = TimeZoneInformation.StandardDate.wMilliseconds;
			wSecond = TimeZoneInformation.StandardDate.wSecond;
			wMinute = TimeZoneInformation.StandardDate.wMinute;
			wHour = TimeZoneInformation.StandardDate.wHour;
			v6 = a1[5];
			if (TimeZoneInformation.StandardDate.wYear)
			{
				sub_140905F08(
					0,
					0,
					v6,
					TimeZoneInformation.StandardDate.wMonth,
					0,
					0,
					TimeZoneInformation.StandardDate.wDay,
					TimeZoneInformation.StandardDate.wHour,
					TimeZoneInformation.StandardDate.wMinute,
					TimeZoneInformation.StandardDate.wSecond,
					TimeZoneInformation.StandardDate.wMilliseconds);
				goto LABEL_17;
			}
			wDayOfWeek = TimeZoneInformation.StandardDate.wDayOfWeek;
			wDay = TimeZoneInformation.StandardDate.wDay;
		}
		else
		{
			v7 = 2;
			v8 = 1;
			v9 = 11;
			v10 = 3;
			if (v4 < 107)
			{
				v10 = 4;
				v7 = 1;
				v9 = 10;
				v8 = 5;
			}
			sub_140905F08(1, 1, v4, v10, v7, 0, 0, 2, 0, 0, 0);
			v6 = a1[5];
			wMilliseconds = 0;
			wSecond = 0;
			wMinute = 0;
			wHour = 2;
			wDayOfWeek = 0;
			wDay = v8;
			wMonth = v9;
		}
		sub_140905F08(0, 1, v6, wMonth, wDay, wDayOfWeek, 0, wHour, wMinute, wSecond, wMilliseconds);
	}
LABEL_17:
	v11 = a1[7];
	if (dword_140C1B154 < dword_140C1B164)
	{
		if (v11 >= dword_140C1B154 && v11 <= dword_140C1B164)
		{
			if (v11 > dword_140C1B154 && v11 < dword_140C1B164)
				return 1i64;
			goto LABEL_27;
		}
		return 0i64;
	}
	if (v11 < dword_140C1B164 || v11 > dword_140C1B154)
		return 1i64;
	if (v11 > dword_140C1B164 && v11 < dword_140C1B154)
		return 0i64;
LABEL_27:
	v12 = 1000 * (*a1 + 60 * (a1[1] + 60 * a1[2]));
	if (v11 == dword_140C1B154)
		LOBYTE(v2) = v12 >= dword_140C1B158;
	else
		LOBYTE(v2) = v12 < dword_140C1B168;
	return v2;
}
// 140905A97: control flows out of bounds to 140905A9C
// 140C1B150: using guessed type int dword_140C1B150;
// 140C1B154: using guessed type int dword_140C1B154;
// 140C1B158: using guessed type int dword_140C1B158;
// 140C1B160: using guessed type int dword_140C1B160;
// 140C1B164: using guessed type int dword_140C1B164;
// 140C1B168: using guessed type int dword_140C1B168;
// 140C6347C: using guessed type int dword_140C6347C;

