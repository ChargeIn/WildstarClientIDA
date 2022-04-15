//----- (0000000140724E30) ----------------------------------------------------
void __fastcall sub_140724E30(__int64 a1, int a2)
{
	__int64 v4; // rbp
	_QWORD* v5; // rcx
	unsigned __int64 v6; // rsi
	__int64 v7; // rcx
	__int64* v8; // rdx
	__int64* v9; // r8
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rdi
	unsigned __int64 v13; // rbp
	int* v14; // rax
	__int64 v15; // rcx
	bool v16; // zf
	__int64 v17; // r14
	__int64 v18; // rdi
	unsigned int* v19; // rbx
	int* v20; // rax
	__int64 v21; // rcx
	int* v22; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v23; // [rsp+28h] [rbp-10h]

	v4 = sub_140207D60(*(_DWORD*)(a1 + 108));
	if (v4)
	{
		v5 = *(_QWORD**)(a1 + 856);
		v6 = 0i64;
		if (v5)
		{
			sub_1405F9B60(v5);
			*(_QWORD*)(a1 + 856) = 0i64;
		}
		if ((*(_DWORD*)(v4 + 24) & 0x180) != 0)
			*(_DWORD*)(qword_140C65898 + 31208) = 0;
		if ((*(_DWORD*)(v4 + 24) & 0x200) != 0)
		{
			if (sub_140207D60(*(_DWORD*)(a1 + 108)))
			{
				v7 = *(_QWORD*)(qword_140C659F0 + 824);
				v8 = *(__int64**)(v7 + 16);
				v9 = *(__int64**)(v7 + 24);
				if (v8 != v9)
				{
					while (1)
					{
						v10 = *v8;
						if (*(_DWORD*)(*v8 + 188) == a2)
							break;
						if (++v8 == v9)
							return;
					}
					v11 = *v8;
					if (v10)
					{
						v12 = sub_1402070A0(*(_DWORD*)(v10 + 64));
						if (v12)
						{
							v13 = 1i64;
							v14 = sub_14018DB00(0i64, 1ui64, 8i64);
							v23 = 1i64;
							*(_QWORD*)v14 = v12;
							v16 = *(_DWORD*)(v11 + 48) == 5;
							v17 = (__int64)v14;
							v22 = v14;
							if (v16)
							{
								sub_1405B1A30(v15, (__int64*)&v22);
								v13 = v23;
								v17 = (__int64)v22;
							}
							if (v13)
							{
								do
								{
									v18 = 4i64;
									v19 = (unsigned int*)(*(_QWORD*)(v17 + 8 * v6) + 36i64);
									do
									{
										if (*v19)
										{
											v20 = (int*)sub_14024B540(*v19);
											if (v20)
											{
												if (qword_140C65878)
													sub_140350D70(v21, v20);
											}
										}
										++v19;
										--v18;
									} while (v18);
									++v6;
								} while (v6 < v13);
							}
							if (v17)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
						}
					}
				}
			}
		}
	}
}
// 140724F3B: variable 'v15' is possibly undefined
// 140724F7D: variable 'v21' is possibly undefined
// 140C65878: using guessed type __int64 qword_140C65878;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

