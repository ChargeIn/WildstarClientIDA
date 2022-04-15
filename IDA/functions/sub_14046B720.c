//----- (000000014046B720) ----------------------------------------------------
void __fastcall sub_14046B720(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v4; // rdi
	int v5[4]; // [rsp+20h] [rbp-28h] BYREF

	if (a2)
	{
		if (*(int*)(a2 + 4) < 4)
		{
			v5[2] = *(_DWORD*)(a2 + 4);
			v3 = *(_QWORD*)(qword_140C65898 + 27848);
			v5[1] = *(_DWORD*)(a2 + 12);
			v5[0] = *(_DWORD*)(a1 + 8);
			if (v3)
			{
				do
				{
					v4 = *(_QWORD*)(v3 + 40);
					*(_QWORD*)(v3 + 48) = a1;
					*(_QWORD*)(v3 + 56) = v5;
					if (*(_DWORD*)v3)
					{
						if (*(_DWORD*)v3 == 1)
							(*(void(__fastcall**)(_QWORD, _QWORD))(v3 + 16))(*(_QWORD*)(v3 + 8), *(_QWORD*)(v3 + 24));
					}
					else
					{
						(*(void(__fastcall**)(_QWORD))(v3 + 16))(*(_QWORD*)(v3 + 8));
					}
					*(_QWORD*)(v3 + 48) = 0i64;
					*(_QWORD*)(v3 + 56) = 0i64;
					v3 = v4;
				} while (v4);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

