//----- (0000000140905AA0) ----------------------------------------------------
void sub_140905AA0()
{
	int v0; // r15d
	int v1; // esi
	LPSTR* v2; // r14
	UINT v3; // ebx
	unsigned __int8* v4; // rax
	char* v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rax
	int v8; // ebx
	int v9; // ebx
	int v10; // ebx
	unsigned __int8* v11; // rdi
	int v12; // ecx
	int v13; // eax
	int v14; // eax
	int v15; // ebx
	int v16; // ebx
	int v17; // [rsp+90h] [rbp+8h] BYREF
	int v18; // [rsp+98h] [rbp+10h] BYREF
	int v19; // [rsp+A0h] [rbp+18h] BYREF
	BOOL UsedDefaultChar; // [rsp+A8h] [rbp+20h] BYREF

	v0 = 0;
	v1 = 0;
	v17 = 0;
	v18 = 0;
	v19 = 0;
	sub_1407E2340(7);
	v2 = (LPSTR*)sub_1409056F0();
	if ((unsigned int)sub_140905758(&v17))
		goto LABEL_59;
	if ((unsigned int)sub_1409056F8(&v18))
	{
	LABEL_58:
		sub_1407DC390();
	LABEL_59:
		sub_1407DC390();
		return;
	}
	if ((unsigned int)sub_140905728(&v19))
	{
	LABEL_57:
		sub_1407DC390();
		goto LABEL_58;
	}
	v3 = sub_1407E493C();
	dword_140C6347C = 0;
	dword_140C1B160 = -1;
	dword_140C1B150 = -1;
	v4 = (unsigned __int8*)sub_140901DEC("TZ");
	v5 = (char*)v4;
	if (!v4 || !*v4)
	{
	LABEL_13:
		if (qword_140C63470)
		{
			sub_1407E14C0(qword_140C63470);
			qword_140C63470 = 0i64;
		}
		if (GetTimeZoneInformation(&TimeZoneInformation) != -1)
		{
			dword_140C6347C = 1;
			v17 = 60 * TimeZoneInformation.Bias;
			if (TimeZoneInformation.StandardDate.wMonth)
				v17 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation.Bias;
			if (TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias)
			{
				v18 = 1;
				v19 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
			}
			else
			{
				v18 = 0;
				v19 = 0;
			}
			if (!WideCharToMultiByte(v3, 0, TimeZoneInformation.StandardName, -1, *v2, 63, 0i64, &UsedDefaultChar)
				|| UsedDefaultChar)
			{
				**v2 = 0;
			}
			else
			{
				(*v2)[63] = 0;
			}
			if (!WideCharToMultiByte(v3, 0, TimeZoneInformation.DaylightName, -1, v2[1], 63, 0i64, &UsedDefaultChar)
				|| UsedDefaultChar)
			{
				*v2[1] = 0;
			}
			else
			{
				v2[1][63] = 0;
			}
		}
		goto LABEL_30;
	}
	if (qword_140C63470)
	{
		if (!(unsigned int)sub_1407EA540(v4, (__int64)qword_140C63470))
			goto LABEL_30;
		if (qword_140C63470)
			sub_1407E14C0(qword_140C63470);
	}
	v6 = sub_1407E1990((__int64)v5);
	qword_140C63470 = sub_1407E2C30(v6 + 1);
	if (qword_140C63470)
	{
		v7 = sub_1407E1990((__int64)v5);
		if (!(unsigned int)sub_1407EA194(qword_140C63470, v7 + 1, v5))
			goto LABEL_31;
		sub_1407DC390();
		goto LABEL_13;
	}
LABEL_30:
	v1 = 1;
LABEL_31:
	v8 = v17;
	*sub_1409056E8() = v8;
	v9 = v18;
	*sub_1409056D8() = v9;
	v10 = v19;
	*sub_1409056E0() = v10;
	sub_1407E2528(7);
	if (v1)
		return;
	if ((unsigned int)sub_1407EA1F8(*v2, 64i64, v5, 3i64))
	{
		sub_1407DC390();
		goto LABEL_57;
	}
	v11 = (unsigned __int8*)(v5 + 3);
	if (*v11 == 45)
	{
		v0 = 1;
		++v11;
	}
	v12 = 3600 * sub_1407DF3E4(v11);
	v17 = v12;
	while (*v11 == 43 || (unsigned __int8)(*v11 - 48) <= 9u)
		++v11;
	if (*v11 == 58)
	{
		v13 = sub_1407DF3E4(++v11);
		v12 = 60 * v13 + v17;
		v17 = v12;
		while ((char)*v11 >= 48 && (char)*v11 <= 57)
			++v11;
		if (*v11 == 58)
		{
			v14 = sub_1407DF3E4(++v11);
			v12 = v14 + v17;
			v17 += v14;
			while ((char)*v11 >= 48 && (char)*v11 <= 57)
				++v11;
		}
	}
	if (v0)
		v17 = -v12;
	if (*v11)
	{
		v18 = 1;
		if ((unsigned int)sub_1407EA1F8(v2[1], 64i64, (char*)v11, 3i64))
		{
			sub_1407DC390();
			__debugbreak();
		}
	}
	else
	{
		v18 = 0;
		*v2[1] = 0;
	}
	v15 = v17;
	*sub_1409056E8() = v15;
	v16 = v18;
	*sub_1409056D8() = v16;
}
// 140C1B150: using guessed type int dword_140C1B150;
// 140C1B160: using guessed type int dword_140C1B160;
// 140C6347C: using guessed type int dword_140C6347C;

