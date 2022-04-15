//----- (000000014049D6D0) ----------------------------------------------------
__int64 __fastcall sub_14049D6D0(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v6; // r8d
	unsigned __int64 v7; // rdx
	__int64 v8; // rax
	unsigned int v9; // ecx
	int v10; // r10d

	if (!a2 || a2 != *(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	v6 = 0;
	v7 = 0i64;
	v8 = 384i64 * *(unsigned int*)(qword_140C65898 + 28140) + qword_140C65898 + 2752;
	while (!*(_QWORD*)v8 || *(_DWORD*)(*(_QWORD*)v8 + 280i64) != a4)
	{
		++v7;
		v8 += 8i64;
		if (v7 >= 0xC)
		{
			v9 = 0;
			goto LABEL_9;
		}
	}
	v9 = 1;
LABEL_9:
	v10 = a3 - 1;
	if (v10)
	{
		if (v10 == 1)
		{
			LOBYTE(v6) = v9 == 0;
			return v6;
		}
	}
	else
	{
		return v9;
	}
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

