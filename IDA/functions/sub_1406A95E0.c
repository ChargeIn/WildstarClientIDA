//----- (00000001406A95E0) ----------------------------------------------------
__int64 __fastcall sub_1406A95E0(_QWORD* a1)
{
	__int64 v2; // rax
	int* v4; // rax
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]

	v2 = sub_1406A93C0(a1);
	if (v2)
	{
		v4 = sub_1405B04E0(v2);
		v5 = (unsigned __int64*)sub_14018F0E0(&v7, (unsigned __int16*)v4)[1];
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
		if (v8)
			sub_14018B900(v8, 0);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

