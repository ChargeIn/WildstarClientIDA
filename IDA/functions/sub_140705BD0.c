//----- (0000000140705BD0) ----------------------------------------------------
__int64 __fastcall sub_140705BD0(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rcx
	__int64 v4; // rax
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v4 = sub_14070D100(v3, v2 - 1);
	if (v4)
	{
		v5 = (unsigned __int64*)sub_14018F0E0(&v8, *(unsigned __int16**)(v4 + 24))[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			sub_140058710((__int64)a1, v5, v6);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v9)
		{
			sub_14018B900(v9, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140705BE8: variable 'v3' is possibly undefined
