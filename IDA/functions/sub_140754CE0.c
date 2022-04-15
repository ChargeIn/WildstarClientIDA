//----- (0000000140754CE0) ----------------------------------------------------
__int64 __fastcall sub_140754CE0(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // r8
	unsigned int v9; // edx
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned __int16* v12; // rdx
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	__int64 v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+58h] [rbp+10h]

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
	v8 = *(_QWORD*)(qword_140C659A8 + 104);
	v9 = v7;
	v10 = *(_QWORD*)(v8 + 8);
	v11 = v8;
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < v9)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v11 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v11 == v8 || (v18 = v11, v9 < *(_DWORD*)(v11 + 32)))
		v18 = *(_QWORD*)(qword_140C659A8 + 104);
	v12 = (unsigned __int16*)&unk_1409F0784;
	if (v18 != v8)
		v12 = *(unsigned __int16**)(v18 + 40);
	v13 = (unsigned __int64*)sub_14018F0E0(&v16, v12)[1];
	if (v13)
	{
		v14 = -1i64;
		do
			++v14;
		while (*((_BYTE*)v13 + v14));
		sub_140058710(a1, v13, v14);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v17)
		sub_14018B900(v17, 0);
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C659A8: using guessed type __int64 qword_140C659A8;

