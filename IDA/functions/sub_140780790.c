//----- (0000000140780790) ----------------------------------------------------
__int64 __fastcall sub_140780790(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	unsigned __int64 v7; // rax
	_DWORD* v8; // rcx

	result = sub_1403D90D0(qword_140C65898, a2);
	if (result)
	{
		v6 = qword_140C7E688;
		if (!qword_140C7E688)
		{
			qword_140C7E688 = (__int64)sub_14018B280(16768i64, qword_140C7E688);
			sub_1407E4830((int*)qword_140C7E688, 0i64, 0x4180ui64);
			v6 = qword_140C7E688;
		}
		v7 = 0i64;
		v8 = (_DWORD*)v6;
		while (*v8 != a2)
		{
			++v7;
			v8 += 524;
			if (v7 >= 8)
				goto LABEL_9;
		}
		result = v6 + 2096 * v7;
		if (result)
			goto LABEL_10;
	LABEL_9:
		result = sub_1407806E0((__int64)v8, a2);
		if (!result)
			return result;
	LABEL_10:
		*(_DWORD*)(result + 16) = a3;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7E688: using guessed type __int64 qword_140C7E688;

