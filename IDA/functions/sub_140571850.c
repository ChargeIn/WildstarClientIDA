#include "../winhttp.h"

//----- (0000000140571850) ----------------------------------------------------
__int64 __fastcall sub_140571850(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rbp
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rsi
	__int64 v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v20; // r8
	__int64 v21; // r9
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // [rsp+50h] [rbp+8h] BYREF

	v24 = a1;
	v3 = qword_140C65970;
	if (!qword_140C65970)
		return 101i64;
	if (*(_DWORD*)(qword_140C65970 + 8) != 3)
		return 101i64;
	if (!a2)
		return 101i64;
	v6 = *(_QWORD*)(a2 + 24);
	if (!v6 || !*(_QWORD*)(qword_140C65970 + 88))
		return 101i64;
	v7 = *(_QWORD*)(v6 + 472);
	if (!v7
		|| (v8 = sub_1404804A0(qword_140C65970, **(_DWORD**)(v7 + 8), 13), (v9 = v8) == 0)
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 56i64))(v8)
		|| ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 88i64))(v9) & 0x40000000) != 0)
	{
		v11 = *(_QWORD*)(v3 + 136);
		v12 = *(_QWORD*)(v11 + 16);
		if (v12 == v11)
		{
		LABEL_30:
			if (!(unsigned int)sub_14077D4E0(v3, a2, 0, a3))
			{
				if (!qword_140C65970)
					return 101i64;
				if (*(_DWORD*)(qword_140C65970 + 8) != 3)
					return 101i64;
				if (!*(_QWORD*)(a2 + 24))
					return 101i64;
				v22 = sub_140573630(v3, a2, v20, v21, &v24);
				v23 = v22;
				if (!v22
					|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v22 + 56i64))(v22)
					|| *(_DWORD*)(a2 + 13816) == -1
					|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v23 + 80i64))(v23))
				{
					return 101i64;
				}
				if (a3)
					*a3 = v23;
			}
			return 31i64;
		}
		while (1)
		{
			if (*(_DWORD*)(a2 + 8) == *(_DWORD*)(v12 + 36))
			{
				v13 = sub_140722000(a1, *(_DWORD*)(v12 + 32));
				v14 = v13;
				if (v13)
				{
					a1 = *(_QWORD*)(v13 + 24);
					if (a1)
					{
						v15 = sub_1404804A0(v3, **(_DWORD**)(a1 + 8), 13);
						v16 = v15;
						if (v15)
						{
							if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v15 + 56i64))(v15)
								&& ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 88i64))(v16) & 0x40000000) != 0
								&& !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v16 + 80i64))(
									v16,
									*(unsigned int*)(v14 + 8)))
							{
								break;
							}
						}
					}
				}
			}
			v17 = *(_QWORD*)(v12 + 24);
			if (v17)
			{
				v12 = *(_QWORD*)(v12 + 24);
				for (i = *(_QWORD*)(v17 + 16); i; i = *(_QWORD*)(i + 16))
					v12 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v12 + 8); v12 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v12 = j;
				if (*(_QWORD*)(v12 + 24) != j)
					v12 = j;
			}
			if (v12 == *(_QWORD*)(v3 + 136))
				goto LABEL_30;
		}
		if (a3)
			*a3 = v16;
		return 35i64;
	}
	else
	{
		if (a3)
			*a3 = v9;
		return 34i64;
	}
}
// 14057192E: variable 'a1' is possibly undefined
// 140571A34: variable 'v20' is possibly undefined
// 140571A34: variable 'v21' is possibly undefined
// 140C65970: using guessed type __int64 qword_140C65970;

