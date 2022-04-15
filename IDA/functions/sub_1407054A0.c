//----- (00000001407054A0) ----------------------------------------------------
__int64 __fastcall sub_1407054A0(__int64 a1)
{
	unsigned __int64 v3; // rbx
	int* v4; // rax
	unsigned __int64* v5; // rsi
	unsigned __int64 v6; // r8

	if (*(_DWORD*)(qword_140C65898 + 32500))
	{
		v3 = 0i64;
		do
			++v3;
		while (*((_BYTE*)&unk_1409E8534 + v3));
		v4 = sub_14018B280(v3 + 17, 0);
		if (v4)
		{
			*((_QWORD*)v4 + 1) = v3;
			*(_QWORD*)v4 = off_140B55060;
		}
		v5 = (unsigned __int64*)(v4 + 4);
		sub_1407DB590(v4 + 4, (int*)&unk_1409E8534, v3);
		*((_BYTE*)v5 + v3) = 0;
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			sub_140058710(a1, v5, v6);
			(*(void(__fastcall**)(unsigned __int64*))(*(v5 - 2) + 8))(v5 - 2);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

