//----- (000000014018B710) ----------------------------------------------------
unsigned __int64 __fastcall sub_14018B710(unsigned __int64 a1, unsigned __int8 a2)
{
	unsigned __int64 v4; // rdi
	bool v5; // zf
	SIZE_T v6; // rcx
	__int64 v7; // rbx
	SIZE_T v8; // rcx
	unsigned __int64 v9; // r8
	unsigned __int64 result; // rax
	__int64 v11; // rbx

	if ((*(_BYTE*)(a1 + 7) & 0x7Fu) > 0x20)
	{
		v4 = *(_QWORD*)(a1 + 8) & 0xFFFFFFFFFFFi64;
		v11 = ~qword_140C7F968 & (v4 + qword_140C7F968 + 16);
		VirtualFree((LPVOID)a1, 0i64, 0x8000u);
		result = (v4 + 0x10000000Fi64) & 0xFFFFFFFF00000000ui64;
		qword_140C87970 -= result;
		qword_140C87978 -= v11;
	}
	else
	{
		v4 = *(unsigned int*)(a1 + 8);
		v5 = (qword_140C7F968 & a1) == 0;
		v6 = dwSize;
		if (v5 && v4 + 16 > dwSize)
		{
			v7 = ~qword_140C7F968 & (qword_140C7F968 + v4 + 16);
			VirtualFree((LPVOID)(a1 + dwSize), v7 - dwSize, 0x4000u);
			v6 = dwSize;
			qword_140C87978 += dwSize - v7;
		}
		v8 = v6 - 16;
		if (((a2 | (unsigned __int8)dword_140C7F934) & 4) != 0)
		{
			v9 = v4;
			if (v8 < v4)
				v9 = v8;
			sub_1407E4830((int*)(a1 + 16), 0i64, v9);
		}
		result = sub_14018B570(a1);
	}
	qword_140C87980 -= v4;
	return result;
}
// 140C7F934: using guessed type int dword_140C7F934;
// 140C7F968: using guessed type __int64 qword_140C7F968;
// 140C87970: using guessed type __int64 qword_140C87970;
// 140C87978: using guessed type __int64 qword_140C87978;
// 140C87980: using guessed type __int64 qword_140C87980;

