//----- (00000001405A5EA0) ----------------------------------------------------
void __fastcall sub_1405A5EA0(__int64 a1, _WORD* a2)
{
	unsigned __int64 v3; // rsi
	__int64 v4; // rbx
	unsigned __int64 v5; // rsi
	__int64 v6; // rbx
	__int64 v7; // rcx
	_WORD* v8; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		v8 = a2;
		if (*a2)
		{
			v3 = (*(__int64(__fastcall**)(_WORD**))(a1 + 28000))(&v8);
			v4 = *(_QWORD*)(*(_QWORD*)(a1 + 27992) + 8 * (v3 % *(_QWORD*)(a1 + 27984)));
			if (v4)
			{
				while (v3 != *(_QWORD*)v4 || !(*(unsigned int(__fastcall**)(_WORD**, __int64))(a1 + 28008))(&v8, v4 + 16))
				{
					v4 = *(_QWORD*)(v4 + 8);
					if (!v4)
						return;
				}
				if (v4 != -24
					&& !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 24) + 8i64))(*(_QWORD*)(v4 + 24)))
				{
					v5 = (*(__int64(__fastcall**)(_WORD**))(a1 + 28000))(&v8);
					v6 = *(_QWORD*)(a1 + 27992) + 8 * (v5 % *(_QWORD*)(a1 + 27984));
					if (*(_QWORD*)v6)
					{
						while (v5 != **(_QWORD**)v6
							|| !(*(unsigned int(__fastcall**)(_WORD**, __int64))(a1 + 28008))(&v8, *(_QWORD*)v6 + 16i64))
						{
							v6 = *(_QWORD*)v6 + 8i64;
							if (!*(_QWORD*)v6)
								return;
						}
						v7 = *(_QWORD*)v6;
						*(_QWORD*)v6 = *(_QWORD*)(*(_QWORD*)v6 + 8i64);
						sub_14018B900(v7, 0);
						--* (_QWORD*)(a1 + 27976);
					}
				}
			}
		}
	}
}

