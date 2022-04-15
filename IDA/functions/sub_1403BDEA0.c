#include "../winhttp.h"

//----- (00000001403BDEA0) ----------------------------------------------------
void __fastcall sub_1403BDEA0(__int64* a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v4; // rsi
	unsigned int v6; // ebx
	unsigned int v8; // r14d
	BOOL v9; // r8d
	__int64 v10; // rcx
	__int64 v11; // r10
	__int64 v12; // rdx
	int v13; // ecx
	int v14; // r9d
	unsigned __int64 v15; // r8
	__int64 v16; // rcx
	__int64 i; // rax
	__int64 v18; // rcx
	__int64 v19; // rax
	int v20; // edx
	unsigned int v21; // esi
	unsigned int v22; // eax
	__int64 v23; // rax
	__int64 v24; // rcx
	BOOL v25; // eax
	int v26; // r10d
	int v27; // ecx
	int v28; // eax
	__int64 v29; // rbx

	if (!a2)
		return;
	v3 = a1[15];
	v4 = 0i64;
	v6 = a2;
	v8 = a2;
	if (v3)
	{
		v9 = *(_QWORD*)(qword_140C65898 + 120) == v3 || *(_QWORD*)(qword_140C65898 + 25744) == v3;
		v10 = 0i64;
		if (v9)
			v10 = qword_140C65898;
		if (v10)
		{
			v11 = sub_1405A5B90(v10, a2);
			if (v11)
				goto LABEL_12;
		}
		a2 = v6;
	}
	v11 = sub_1407A0FD0(qword_140C65B70, a2);
LABEL_12:
	if (v11)
	{
		v12 = *(_QWORD*)(v11 + 112);
		v13 = *(_DWORD*)(v12 + 24);
		if (((v13 - 2) & 0xFFFFFFFA) == 0 && v13 != 3)
		{
			v14 = *(_DWORD*)(v12 + 4);
			if (v14)
			{
				v15 = a1[339];
				v16 = 0i64;
				if (v15)
				{
					for (i = a1[338]; !*(_QWORD*)i || *(_DWORD*)(*(_QWORD*)i + 64i64) != v14; i += 8i64)
					{
						if (++v16 >= v15)
							return;
					}
					v18 = a1[3506];
					if (v18)
					{
						v18 = *(_QWORD*)((*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v18 + 24i64))(
							v18,
							v11,
							a1[15],
							0i64)
							+ 112);
						v6 = *(_DWORD*)v18;
					}
					v19 = a1[3218];
					if (v19)
					{
						v20 = *(_DWORD*)(v19 + 264);
						if (v20)
							v4 = sub_1403D90D0((__int64)a1, v20);
					}
					v21 = sub_1403D3520(v18, v6, a1[15], v4);
					v22 = sub_1403C0190((__int64)a1, v6);
					if (v22)
						v21 = v22;
					v23 = sub_1403ACD90(qword_140C65B70, v21, a1[15]);
					if (v23)
					{
						v24 = *(_QWORD*)(v23 + 112);
						switch (*(_DWORD*)(v24 + 24))
						{
						case 2:
							v28 = dword_140C45E80;
							if (*(_DWORD*)qword_140C63750 < dword_140C45E80)
								v28 = *(_DWORD*)qword_140C63750;
							if (!*((_BYTE*)&off_140C45E70 + v28 + 32))
							{
								v29 = *(_QWORD*)(a1[15] + 5640);
								if (v29)
								{
									while (*(_DWORD*)(v29 + 4) || !*(_QWORD*)(v29 + 32) || !(unsigned int)sub_140195F70(v29 + 16))
									{
										v29 = *(_QWORD*)(v29 + 136);
										if (!v29)
											goto LABEL_33;
									}
									return;
								}
							}
							break;
						case 6:
						LABEL_51:
							sub_1403BE120((__int64)a1, v8, a3);
							return;
						case 7:
							break;
						default:
							return;
						}
					LABEL_33:
						v25 = sub_1403BF980((__int64)a1, v21);
						v27 = v26;
						if (*(_DWORD*)qword_140C63750 < v26)
							v27 = *(_DWORD*)qword_140C63750;
						if (!*((_BYTE*)&off_140C45E70 + v27 + 32) && !v25)
						{
							sub_1403BDB90(a1, v8, a3);
							return;
						}
						if (*(_DWORD*)qword_140C63750 < v26)
							v26 = *(_DWORD*)qword_140C63750;
						if (*((_BYTE*)&off_140C45E70 + v26 + 32) || v25)
							goto LABEL_51;
					}
				}
			}
		}
	}
}
// 1403BDFDB: variable 'v18' is possibly undefined
// 1403BE04F: variable 'v26' is possibly undefined
// 140C45E70: using guessed type __int64 (__fastcall *off_140C45E70)();
// 140C45E80: using guessed type int dword_140C45E80;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

