//----- (0000000140584B00) ----------------------------------------------------
void __fastcall sub_140584B00(__int64 a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rcx
	unsigned __int64 v3; // r8
	unsigned __int64 v4; // rbx
	unsigned __int64* v5; // rax
	_QWORD* v6; // rax
	__int64 v7; // rdi

	v2 = 0i64;
	v3 = qword_140C7DE20;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v4 = v2 + ((v3 - v2) >> 1);
			v5 = *(unsigned __int64**)(qword_140C7DE18 + 8 * v4);
			if (a2 == *v5)
				break;
			if (a2 <= *v5)
				v2 = v4 + 1;
			else
				v3 = v2 + ((v3 - v2) >> 1);
			if (v2 >= v3)
				goto LABEL_7;
		}
	}
	else
	{
	LABEL_7:
		v4 = v2;
	}
	if (v4 < qword_140C7DE20)
	{
		v6 = *(_QWORD**)(qword_140C7DE18 + 8 * v4);
		if (a2 == *v6)
		{
			v7 = *(_QWORD*)(qword_140C7DE18 + 8 * v4);
			if (v6)
			{
				sub_14057B140((__int64)v6);
				sub_14018B900(v7, 0);
			}
			sub_140007270((__int64)&qword_140C7DE18, v4);
		}
	}
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

