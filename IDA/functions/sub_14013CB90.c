//----- (000000014013CB90) ----------------------------------------------------
__int64 __fastcall sub_14013CB90(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = *(_QWORD*)(v6 + 2528);
	if (v7)
	{
		v9 = (unsigned __int64*)sub_14018F0E0(&v11, *(unsigned __int16**)(v7 + 160))[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			sub_140058710(a1, v9, v10);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v12)
			sub_14018B900(v12, 0);
		return 1i64;
	}
	else
	{
		sub_140058710(a1, (unsigned __int64*)&unk_1409D057E, 0i64);
		return 1i64;
	}
}
// 140C63650: using guessed type __int64 qword_140C63650;

