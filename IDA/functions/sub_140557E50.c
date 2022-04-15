#include "../winhttp.h"

//----- (0000000140557E50) ----------------------------------------------------
void __fastcall sub_140557E50(__int64 a1)
{
	int v2; // edx
	__int64 v3; // rcx
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int64 v10; // r8
	int v11; // ebp
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // r8
	int v18; // edi
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rax
	int v22; // edx
	int v23; // eax

	if (*(_DWORD*)a1)
	{
		if (*(_DWORD*)(a1 + 8))
		{
			sub_14034BDD0(a1, 0);
			v2 = *(_DWORD*)(a1 + 8);
			v3 = qword_140C65918;
			LODWORD(v4) = 0;
			*(_QWORD*)(a1 + 56) = 0i64;
			*(_DWORD*)(a1 + 64) = 0;
			v5 = sub_1404835C0(v3, v2);
			v6 = v5;
			if (v5)
			{
				v7 = *(_QWORD*)(v5 + 88);
				v8 = qword_140C66650;
				LODWORD(v9) = 0;
				if (*(_DWORD*)(qword_140C66650 + 4 * v7))
				{
					v10 = 0i64;
					while (1)
					{
						v11 = *(_DWORD*)(v8 + 4 * (v7 + v10));
						v12 = sub_1405A8A40(v8, v11);
						if (v12)
						{
							if (sub_140552FD0(v12))
							{
								v14 = sub_14043CFF0(v13, v11);
								v15 = v14;
								if (v14)
								{
									if (*(_DWORD*)(v14 + 4))
										break;
								}
							}
						}
						v7 = *(_QWORD*)(v6 + 88);
						v8 = qword_140C66650;
						v9 = (unsigned int)(v9 + 1);
						v10 = (unsigned int)v9;
						if (!*(_DWORD*)(qword_140C66650 + 4 * (v7 + v9)))
							goto LABEL_11;
					}
				}
				else
				{
				LABEL_11:
					v16 = *(_QWORD*)(v6 + 96);
					if (!*(_DWORD*)(v8 + 4 * v16))
						return;
					v17 = 0i64;
					while (1)
					{
						v18 = *(_DWORD*)(v8 + 4 * (v16 + v17));
						v19 = sub_1405A8A40(v8, v18);
						if (v19)
						{
							if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v19 + 8)) == 2)
							{
								v21 = sub_14043CFF0(v20, v18);
								v15 = v21;
								if (v21)
								{
									if (*(_DWORD*)(v21 + 4))
										break;
								}
							}
						}
						v16 = *(_QWORD*)(v6 + 96);
						v8 = qword_140C66650;
						v4 = (unsigned int)(v4 + 1);
						v17 = (unsigned int)v4;
						if (!*(_DWORD*)(qword_140C66650 + 4 * (v16 + v4)))
							return;
					}
				}
				v22 = *(_DWORD*)(v15 + 4);
				v23 = dword_140C4D060;
				if (*(_DWORD*)qword_140C63750 < dword_140C4D060)
					v23 = *(_DWORD*)qword_140C63750;
				sub_1405581C0((_DWORD*)a1, v22, 0, *((unsigned __int8*)&off_140C4D050 + v23 + 32));
			}
		}
	}
}
// 140557EE3: variable 'v13' is possibly undefined
// 140557F51: variable 'v20' is possibly undefined
// 140C4D050: using guessed type __int64 (__fastcall **off_140C4D050)();
// 140C4D060: using guessed type int dword_140C4D060;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C66650: using guessed type __int64 qword_140C66650;

