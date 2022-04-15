//----- (000000014039CDA0) ----------------------------------------------------
void __fastcall sub_14039CDA0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rdx
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v7 = a1;
	v2 = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
	{
		if (a2)
		{
			v5 = *(_QWORD*)(*(_QWORD*)(a2 + 312) + 112i64);
			v6 = *(_DWORD*)(v5 + 248);
			if ((v6 == 14 || v6 == 36) && (*(_DWORD*)(v5 + 24) != 10 || *(_DWORD*)(a2 + 344) == *(_DWORD*)(v4 + 8)))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
				LODWORD(v7) = *(_DWORD*)(a2 + 92);
				sub_1403F4900(v2, 0x802u, (__int64)&v7);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

