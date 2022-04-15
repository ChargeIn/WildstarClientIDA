//----- (00000001405DC9A0) ----------------------------------------------------
__int64 __fastcall sub_1405DC9A0(__int64 a1, int* a2)
{
	__int64 v2; // r15
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 96);
	if (a2)
	{
		v5 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v5;
			while (*((_WORD*)a2 + v5));
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			*(_QWORD*)v6 = off_140B55060;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, a2, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*(_QWORD*)(a1 + 96) = v7;
	}
	else
	{
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	result = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a1 + 56) = result;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

