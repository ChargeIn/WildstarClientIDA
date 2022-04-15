//----- (00000001407F0014) ----------------------------------------------------
void __fastcall sub_1407F0014(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx

	if (a1)
	{
		if (*(_DWORD*)a1 == -529697949
			&& *(_DWORD*)(a1 + 24) == 4
			&& (unsigned int)(*(_DWORD*)(a1 + 32) - 429065504) <= 2)
		{
			v1 = *(_QWORD*)(a1 + 48);
			if (v1)
			{
				if (*(_DWORD*)(v1 + 4))
				{
					((void(__fastcall*)(_QWORD))(*(int*)(v1 + 4) + *(_QWORD*)(a1 + 56)))(*(_QWORD*)(a1 + 40));
				}
				else if ((*(_BYTE*)v1 & 0x10) != 0)
				{
					v2 = **(_QWORD**)(a1 + 40);
					if (v2)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
				}
			}
		}
	}
}

