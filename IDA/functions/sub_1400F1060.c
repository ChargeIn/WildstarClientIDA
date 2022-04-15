//----- (00000001400F1060) ----------------------------------------------------
void __fastcall sub_1400F1060(__int64 a1, __int64 a2, _QWORD* a3)
{
	unsigned __int64* v4; // rdx
	unsigned __int64 v5; // r8
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]

	*a3 += 8i64;
	v4 = (unsigned __int64*)sub_14018F0E0(&v6, *(unsigned __int16**)(*a3 - 8i64))[1];
	if (v4)
	{
		v5 = -1i64;
		do
			++v5;
		while (*((_BYTE*)v4 + v5));
		sub_140058710(a2, v4, v5);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
	}
	if (v7)
		sub_14018B900(v7, 0);
}

