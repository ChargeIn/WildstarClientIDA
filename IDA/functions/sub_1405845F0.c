//----- (00000001405845F0) ----------------------------------------------------
__int64 __fastcall sub_1405845F0(__int64 a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // r9
	unsigned __int64 v3; // r8
	unsigned __int64 v4; // rax
	unsigned __int64* v5; // rcx

	v2 = qword_140C7DE20;
	v3 = 0i64;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v4 = v3 + ((v2 - v3) >> 1);
			v5 = *(unsigned __int64**)(qword_140C7DE18 + 8 * v4);
			if (a2 == *v5)
				break;
			if (a2 <= *v5)
				v3 = v4 + 1;
			else
				v2 = v3 + ((v2 - v3) >> 1);
			if (v3 >= v2)
				goto LABEL_7;
		}
	}
	else
	{
	LABEL_7:
		v4 = v3;
	}
	if (v4 < qword_140C7DE20 && a2 == **(_QWORD**)(qword_140C7DE18 + 8 * v4))
		return *(_QWORD*)(qword_140C7DE18 + 8 * v4);
	else
		return 0i64;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

