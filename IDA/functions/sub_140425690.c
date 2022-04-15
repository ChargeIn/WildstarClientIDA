//----- (0000000140425690) ----------------------------------------------------
__int64 __fastcall sub_140425690(__int64 a1, __int64 a2)
{
	int* v3; // rsi
	__int64 v4; // rdi
	int* v5; // rax
	int* v6; // rbx
	unsigned __int64 v7; // rdi
	unsigned __int64 v8; // rsi
	__int64 v9; // rax
	unsigned __int64 v10; // rdi
	__int64 v11; // rax
	int* v12; // rsi
	__int64 result; // rax

	if ((dword_140DC2880 & 1) == 0)
	{
		dword_140DC2890 = 0;
		dword_140DC2880 |= 1u;
	}
	v3 = (int*)&word_140B7B704;
	if (*(_QWORD*)(a2 + 536))
		v3 = *(int**)(a2 + 536);
	if (v3)
	{
		v4 = 0i64;
		if (*(_WORD*)v3)
		{
			do
				++v4;
			while (*((_WORD*)v3 + v4));
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
		v6 = v5 + 4;
		v7 = 2 * v4;
		sub_1407DB590(v5 + 4, v3, v7);
		*(_WORD*)((char*)v6 + v7) = 0;
	}
	else
	{
		v6 = 0i64;
	}
	v8 = *((_QWORD*)v6 - 1);
	if (dword_140DC2890)
	{
		v10 = qword_140DC2888;
	}
	else
	{
		dword_140DC2890 = 1;
		v9 = sub_140200220(0x947u);
		if (v9)
		{
			v10 = *(unsigned int*)(v9 + 12);
			qword_140DC2888 = v10;
		}
		else
		{
			v10 = 0i64;
			qword_140DC2888 = 0i64;
		}
	}
	if (v8 > v10)
	{
		if (!dword_140DC2890)
		{
			dword_140DC2890 = 1;
			v11 = sub_140200220(0x947u);
			if (v11)
			{
				v10 = *(unsigned int*)(v11 + 12);
				qword_140DC2888 = v10;
			}
			else
			{
				v10 = 0i64;
				qword_140DC2888 = 0i64;
			}
		}
		v12 = v6;
		v6 = (int*)sub_14018D140(v6, v10);
		*((_WORD*)v6 + v10) = 0;
		if (v12 != v6 && v12)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
	}
	result = sub_140434460(
		(__int64*)(qword_140C65898 + 72),
		*(_QWORD*)(qword_140C635F0 + 5792),
		(unsigned int)(dword_140C636A8 - *(_DWORD*)(a2 + 952)),
		(__int64)v6);
	if (v6)
		return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2880: using guessed type int dword_140DC2880;
// 140DC2888: using guessed type __int64 qword_140DC2888;
// 140DC2890: using guessed type int dword_140DC2890;

