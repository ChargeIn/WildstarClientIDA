//----- (0000000140180400) ----------------------------------------------------
void __fastcall sub_140180400(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // r9
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r8
	__int128 v11; // [rsp+60h] [rbp-38h] BYREF
	int v12; // [rsp+74h] [rbp-24h]

	v2 = *(_QWORD*)(a1 + 2136);
	if (v2)
	{
		if (*(_QWORD*)(a1 + 2128))
		{
			LODWORD(v11) = 0;
			if ((*(unsigned int(__fastcall**)(__int64, __int128*, __int64))(*(_QWORD*)v2 + 24i64))(v2, &v11, 1i64))
			{
				v3 = *(_QWORD*)(a1 + 2088);
				LODWORD(v11) = 0;
				if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v3 + 32i64))(v3, &v11))
				{
					v4 = *(_QWORD*)(a1 + 2104);
					LODWORD(v11) = 0;
					if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v4 + 32i64))(v4, &v11))
					{
						v5 = *(_QWORD*)(a1 + 2120);
						LODWORD(v11) = 0;
						if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v5 + 32i64))(v5, &v11))
						{
							if (!*(_DWORD*)(a1 + 1028))
							{
								*(_DWORD*)(a1 + 1028) = 1;
								sub_1400D4070(a1, 0x4Fu, (char*)a1, byte_1409D066E);
							}
							(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2128) + 48i64))(
								*(_QWORD*)(a1 + 2128),
								(unsigned int)dword_140C636A8,
								0i64);
							(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2136) + 296i64))(
								*(_QWORD*)(a1 + 2136),
								1i64);
							(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2136) + 320i64))(
								*(_QWORD*)(a1 + 2136),
								1i64);
							(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, _DWORD))(**(_QWORD**)(a1 + 2128) + 80i64))(
								*(_QWORD*)(a1 + 2128),
								a1 + 1072,
								a1 + 1136,
								a1 + 1060,
								0);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
							*((_QWORD*)&v11 + 1) = *(_QWORD*)(a1 + 2096);
							LODWORD(v11) = 1;
							v12 = 0;
							(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
								qword_140C65670,
								&v11,
								&unk_140C3FE88,
								&unk_140C3FE88,
								&unk_140C3FE88);
							(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
								qword_140C65670,
								&unk_140C3FE88,
								1i64);
							v6 = *(_QWORD*)(a1 + 2128);
							v7 = a1 + 1264;
							v8 = a1 + 1200;
							v9 = a1 + 1060;
							if ((*(_BYTE*)(a1 + 664) & 4) != 0)
								(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int, int, int, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)v6 + 128i64))(
									v6,
									v8,
									v9,
									v7,
									2,
									3,
									-1,
									*(_QWORD*)(a1 + 2120),
									0i64,
									1065353216,
									0);
							else
								(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int, int, _DWORD, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)v6 + 128i64))(
									v6,
									v8,
									v9,
									v7,
									2,
									3,
									0,
									0i64,
									0i64,
									1065353216,
									0);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
							*((_QWORD*)&v11 + 1) = *(_QWORD*)(a1 + 2112);
							LODWORD(v11) = 1;
							v12 = 0;
							(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
								qword_140C65670,
								&v11,
								&unk_140C3FE88,
								&unk_140C3FE88,
								&unk_140C3FE88);
							v11 = 0i64;
							(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
								qword_140C65670,
								1i64,
								&v11);
							(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
								qword_140C65670,
								0i64,
								*(_QWORD*)(a1 + 2088),
								0i64,
								0i64);
							(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
								qword_140C65670,
								1i64,
								*(_QWORD*)(a1 + 2096));
							(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
								qword_140C65670,
								2i64,
								*(_QWORD*)(a1 + 2104));
							(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
								qword_140C65670,
								*(_QWORD*)(a1 + 2144),
								0i64);
							(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670
								+ 664i64))(
									qword_140C65670,
									0xFFFFFFFFi64,
									v10,
									0i64,
									0i64,
									0i64);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
							*(_DWORD*)(a1 + 1024) = 0;
						}
					}
				}
			}
		}
	}
}
// 140180778: variable 'v10' is possibly undefined
// 1409D066E: using guessed type _BYTE byte_1409D066E[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;

