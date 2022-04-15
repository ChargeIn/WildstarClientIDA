//----- (0000000140605020) ----------------------------------------------------
void __fastcall sub_140605020(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rax
	int v8; // edx

	v2 = *(_QWORD*)(a1 + 64);
	if (v2)
	{
		if (*(_QWORD*)(v2 + 96) >= 2ui64 && (*(_BYTE*)(v2 + 8) & 1) != 0)
		{
			v5 = *(_QWORD*)(qword_140C65898 + 29272);
			if (!v5 || !*(_DWORD*)(v5 + 20))
			{
				v6 = *(_QWORD*)(qword_140C65898 + 120);
				if (v6)
				{
					if ((dword_140DC3590 & 1) != 0)
					{
						v8 = dword_140DC3594;
					}
					else
					{
						dword_140DC3590 |= 1u;
						v7 = sub_140200220(0x90u);
						if (v7)
						{
							v8 = *(_DWORD*)(v7 + 4);
							dword_140DC3594 = v8;
						}
						else
						{
							v8 = 0;
							dword_140DC3594 = 0;
						}
					}
					if (*(_DWORD*)(v6 + 56) > (unsigned int)(v8 + *(_DWORD*)(*(_QWORD*)(a1 + 64) + 56i64)))
						sub_140604F10(a1, a2, 0);
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3590: using guessed type int dword_140DC3590;
// 140DC3594: using guessed type int dword_140DC3594;

