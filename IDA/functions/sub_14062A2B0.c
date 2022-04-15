//----- (000000014062A2B0) ----------------------------------------------------
__int64 __fastcall sub_14062A2B0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rdi

	if (*(_DWORD*)(a2 + 8))
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i");
		return 0i64;
	}
	else
	{
		v4 = sub_140629AF0(a1, *(_QWORD*)a2);
		v5 = v4;
		if (v4)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v4 + 8i64))(v4, a2 + 12, 1i64);
			sub_140430A40(*(_QWORD*)(qword_140C65898 + 29504), *(_QWORD*)(v5 + 8));
		}
		return 0i64;
	}
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C65898: using guessed type __int64 qword_140C65898;

