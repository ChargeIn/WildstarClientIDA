//----- (0000000140712400) ----------------------------------------------------
__int64 __fastcall sub_140712400(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // r10
	__int64 v4[2]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+30h] [rbp-18h]

	if (!*(_DWORD*)(qword_140C635F0 + 5896))
	{
		v1 = sub_140056AB0(a1, 1u);
		if (v1)
		{
			if (*(_QWORD*)(v1 + 8) && (unsigned int)sub_1400A7FD0((_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 364i64)))
			{
				v5 = 0i64;
				v4[0] = 0i64;
				v4[1] = 0i64;
				v5 = *(_QWORD*)(v2 + 8);
				sub_1403F4900(qword_140C65898, 0x267u, (__int64)v4);
			}
		}
	}
	return 0i64;
}
// 14071246E: variable 'v2' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

