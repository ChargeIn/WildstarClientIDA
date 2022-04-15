//----- (000000014051D2E0) ----------------------------------------------------
char __fastcall sub_14051D2E0(__int64 a1)
{
	__int64 v2; // rdx
	char result; // al
	__int64 v4; // [rsp+20h] [rbp-38h] BYREF
	__int64 v5; // [rsp+28h] [rbp-30h]
	__int64 v6; // [rsp+30h] [rbp-28h]
	__int64 v7; // [rsp+38h] [rbp-20h]
	__int64 v8; // [rsp+40h] [rbp-18h]

	if (*(_DWORD*)(a1 + 16) != -1 && *(_DWORD*)(a1 + 20) != -1)
	{
		v2 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v2)
		{
			if (*(_DWORD*)(v2 + 3408))
			{
				v6 = 0i64;
				v7 = 0i64;
				v4 = 0i64;
				v5 = 0i64;
				v8 = 0i64;
				LOWORD(v4) = *(_WORD*)(a1 + 16);
				WORD1(v4) = *(_WORD*)(a1 + 20);
				v6 = *(_QWORD*)(a1 + 32);
				v7 = *(_QWORD*)(a1 + 64);
				HIDWORD(v4) = *(_DWORD*)(v2 + 3952);
				v5 = *(_QWORD*)(v2 + 3956);
				LODWORD(v8) = *(_DWORD*)(qword_140C7AAC0 + 8);
				sub_1403F4900(qword_140C65898, 0x6D1u, (__int64)&v4);
				return sub_1400D4040(*(_QWORD*)(a1 + 8), "SupportTicketSubmitted", *(char**)(a1 + 8), &byte_140B7B700);
			}
		}
	}
	return result;
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

