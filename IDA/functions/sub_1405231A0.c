//----- (00000001405231A0) ----------------------------------------------------
char __fastcall sub_1405231A0(__int64 a1)
{
	__int64* v2; // rax

	v2 = (__int64*)sub_140527630(a1, *(_DWORD*)(a1 + 16));
	if (v2)
	{
		LODWORD(v2) = sub_1404AB3B0(v2, *(_DWORD*)(*v2 + 12) * *(_DWORD*)(a1 + 20));
		if ((int)v2 >= 0)
			LOBYTE(v2) = sub_1400D4040(*(_QWORD*)(a1 + 8), "ResourceConversioning", *(char**)(a1 + 8), L"i");
	}
	return (char)v2;
}
// 140B6B8F8: using guessed type wchar_t aI_12[2];

