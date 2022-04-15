//----- (000000014041C710) ----------------------------------------------------
__int64 __fastcall sub_14041C710(_QWORD* a1)
{
	int* v2; // rax
	unsigned __int64* v4; // rdx
	unsigned __int64 v5; // r8
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v4 = (unsigned __int64*)sub_14018F0E0(&v6, *((unsigned __int16**)v2 + 61))[1];
		if (v4)
		{
			v5 = -1i64;
			do
				++v5;
			while (*((_BYTE*)v4 + v5));
			sub_140058710((__int64)a1, v4, v5);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v7)
			sub_14018B900(v7, 0);
		return 1i64;
	}
	else
	{
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D091A, 0i64);
		return 1i64;
	}
}

