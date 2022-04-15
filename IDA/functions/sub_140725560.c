//----- (0000000140725560) ----------------------------------------------------
void __fastcall sub_140725560(unsigned int* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // r13
	unsigned int v6; // r15d
	__int64 v7; // rbx
	unsigned __int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rsi
	int v13; // eax
	__int64 v14; // rcx
	int v15; // ebx
	__int64 v16; // rdx
	unsigned int v17; // eax
	__int64 v18; // rcx
	unsigned int v19; // ebx
	__int64 v20; // rax

	if (a1[27] != 5)
	{
		v2 = sub_1404C2740((__int64)a1);
		v3 = v2;
		if (v2)
		{
			if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 344i64))(v2))
			{
				v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 344i64))(v3);
				v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
				if (v5)
				{
					v6 = a1[29];
					v7 = 0i64;
					v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 368i64))(v3);
					if (v8)
					{
						while (1)
						{
							v9 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 376i64))(v3, v7);
							v10 = v9;
							if (v9)
							{
								if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9)
									&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 40i64))(v10) == v6)
								{
									break;
								}
							}
							if (++v7 >= v8)
								return;
						}
						v11 = sub_140207D60(a1[27]);
						v12 = v11;
						if (v11)
						{
							v13 = *(_DWORD*)(v11 + 24);
							if ((v13 & 0x20) != 0)
							{
								(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 64i64))(v10, *(unsigned int*)(v12 + 20));
							}
							else if ((v13 & 0x80u) == 0)
							{
								v16 = *(_QWORD*)(v5 + 72);
								v17 = *(_DWORD*)(v16 + 40);
								if (v17)
								{
									v18 = a1[30];
									if (v17 > (unsigned int)v18)
									{
										v19 = *(unsigned __int16*)(*(_QWORD*)(v16 + 48) + 2 * v18);
										v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
										sub_140725700((__int64)a1, v20, v19);
									}
								}
							}
							else
							{
								v14 = *(_QWORD*)(qword_140C65898 + 25744);
								if (v14)
								{
									v15 = *(_DWORD*)(v14 + 6120);
									if (v15 == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 40i64))(v10))
										*(_DWORD*)(qword_140C65898 + 31208) = *(_DWORD*)(v12 + 40);
								}
							}
						}
					}
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

