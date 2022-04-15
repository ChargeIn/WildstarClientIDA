//----- (000000014051BA60) ----------------------------------------------------
char __fastcall sub_14051BA60(__int64 a1)
{
	__int64 v2; // rax
	char v4; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140245C00(*(_DWORD*)(qword_140C65898 + 6864));
	if (v2)
	{
		v4 = 0;
		sub_1403F4900(qword_140C65898, 0x84Du, (__int64)&v4);
		LOBYTE(v2) = sub_1400D4040(*(_QWORD*)(a1 + 8), "CraftingBotched", *(char**)(a1 + 8), &byte_140B7B700);
	}
	return v2;
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C65898: using guessed type __int64 qword_140C65898;

