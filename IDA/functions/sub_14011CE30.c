//----- (000000014011CE30) ----------------------------------------------------
__int64 __fastcall sub_14011CE30(__int64 a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	v5 = (unsigned __int64*)sub_14018F0E0(&v8, *(unsigned __int16**)(qword_140C63650 + 784))[1];
	if (v5)
	{
		v6 = -1i64;
		do
			++v6;
		while (*((_BYTE*)v5 + v6));
		sub_140058710(a1, v5, v6);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v9)
		sub_14018B900(v9, 0);
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

