//----- (0000000140656560) ----------------------------------------------------
__int64 __fastcall sub_140656560(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		return 0i64;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	if (!v3)
		return 0i64;
	v4 = *(int*)(v3 + 440);
	if ((unsigned int)v4 > 0xD)
	{
		sub_140058710(a1, (unsigned __int64*)"Unknown", 7ui64);
	}
	else
	{
		v5 = (unsigned __int64*)sub_14018F0E0(&v8, off_140C3AC50[v4])[1];
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
		{
			sub_14018B900(v9, 0);
			return 1i64;
		}
	}
	return 1i64;
}
// 140C3AC50: using guessed type wchar_t *off_140C3AC50[14];
// 140C65898: using guessed type __int64 qword_140C65898;

