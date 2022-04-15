//----- (00000001406EAE90) ----------------------------------------------------
__int64 __fastcall sub_1406EAE90(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int v3; // edx
	unsigned __int64 v4; // rcx
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rax
	unsigned __int16* v8; // rdx
	unsigned __int16* v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v2 = sub_1406E8880(a1, 1u);
	v3 = 0;
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = v2;
	if (v4)
	{
		v6 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v6) + 400i64) == a1)
				break;
			v6 = ++v3;
		} while (v3 < v4);
	}
	v7 = *(_QWORD*)(v5 + 1336);
	if (v7)
	{
		v9 = *(unsigned __int16**)(v7 + 32);
		v8 = (unsigned __int16*)&word_140B7B704;
		if (v9)
			v8 = v9;
	}
	else
	{
		v8 = 0i64;
	}
	v10 = (unsigned __int64*)sub_14018F0E0(&v13, v8)[1];
	if (v10)
	{
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v10 + v11));
		sub_140058710((__int64)a1, v10, v11);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v14)
		sub_14018B900(v14, 0);
	return 1i64;
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;

