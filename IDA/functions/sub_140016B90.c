//----- (0000000140016B90) ----------------------------------------------------
__int64 __fastcall sub_140016B90(__int64 a1, int* a2)
{
	__int64 v2; // r14
	__int64 v4; // rbx
	int* v5; // rax
	__int64 v6; // rdi
	unsigned __int64 v7; // rbx
	__int64 result; // rax
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	v9 = a1;
	v2 = qword_140C635F0;
	if (a2)
	{
		v4 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v4;
			while (*((_WORD*)a2 + v4));
		}
		v5 = sub_14018B280(2 * v4 + 18, 0);
		if (v5)
		{
			*((_QWORD*)v5 + 1) = v4;
			*(_QWORD*)v5 = off_140B55060;
		}
		else
		{
			v5 = 0i64;
		}
		v6 = (__int64)(v5 + 4);
		v7 = 2 * v4;
		sub_1407DB590(v5 + 4, a2, v7);
		*(_WORD*)(v7 + v6) = 0;
		v9 = v6;
	}
	else
	{
		v9 = 0i64;
	}
	sub_140019B70((__int64*)(v2 + 5960), &v9);
	result = v9;
	if (v9)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

