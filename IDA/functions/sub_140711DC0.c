//----- (0000000140711DC0) ----------------------------------------------------
__int64 __fastcall sub_140711DC0(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // eax
	unsigned __int16* v8; // rdx
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

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
	v7 = sub_1400F26A0(v6 + 384, 1);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (v7 <= 2)
		v8 = *(unsigned __int16**)(qword_140C65948 + 8i64 * v7 + 232);
	else
		v8 = (unsigned __int16*)&unk_1409F060C;
	v9 = (unsigned __int64*)sub_14018F0E0(&v12, v8)[1];
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
	if (v13)
		sub_14018B900(v13, 0);
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65948: using guessed type __int64 qword_140C65948;

