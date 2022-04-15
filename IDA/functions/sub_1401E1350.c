#include "../winhttp.h"

//----- (00000001401E1350) ----------------------------------------------------
__int64 __fastcall sub_1401E1350(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // edx
	__int64 v4; // rsi
	int* v5; // rax
	__int64 v6; // rbx
	int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rsi
	int* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rsi
	int* v16; // rax
	__int64 v17; // rsi
	int* v18; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // [rsp+28h] [rbp-20h]

	v2 = *(_QWORD*)(a1 + 272);
	if (v2)
	{
		v3 = *(_DWORD*)(a1 + 40);
		if (v3)
		{
			if (v3 == 1)
			{
				if (!*(_QWORD*)(a1 + 344))
				{
					LODWORD(v24) = 0;
					v4 = sub_14020BD20(*(_DWORD*)(v2 + 100));
					if (v4)
					{
						v5 = sub_14018B280(120i64, 0);
						v6 = (__int64)v5;
						if (v5)
						{
							*(_QWORD*)v5 = off_140B55048;
							v5[2] = 1;
							*(_QWORD*)v5 = off_140B60300;
							*((_QWORD*)v5 + 6) = 0i64;
							*((_QWORD*)v5 + 7) = 0i64;
							*((_QWORD*)v5 + 9) = 0i64;
							*((_QWORD*)v5 + 10) = 0i64;
							*((_QWORD*)v5 + 11) = 0i64;
							*(_QWORD*)(v5 + 27) = 0i64;
							*((_QWORD*)v5 + 2) = a1;
						}
						else
						{
							v6 = 0i64;
						}
						*(_QWORD*)(v6 + 24) = v4;
						*(_DWORD*)(v6 + 40) = 2;
						*(_DWORD*)(v6 + 44) = 1;
						*(_QWORD*)(v6 + 64) = 0i64;
						*(_QWORD*)(v6 + 32) = v24;
						v7 = sub_1401E6BF0(v6);
						if (v7 == -2147023728)
						{
							v8 = sub_1401E6B70(v6);
							if (!v8)
								goto LABEL_60;
							*(_QWORD*)(v6 + 24) = v8;
							v7 = sub_1401E6BF0(v6);
						}
						if (v7 < 0)
							goto LABEL_60;
						if (*(_DWORD*)(*(_QWORD*)(v6 + 16) + 2868i64))
						{
							v9 = *(_QWORD*)(v6 + 24);
							*(_DWORD*)(v6 + 100) = *(_DWORD*)(v9 + 144);
							*(_DWORD*)(v6 + 104) = *(_DWORD*)(v9 + 148);
							sub_1401E7DE0(v6);
						}
						else
						{
							*(_QWORD*)(v6 + 100) = 0i64;
						}
						if (*(_QWORD*)(*(_QWORD*)(v6 + 16) + 288i64) != *(_QWORD*)(*(_QWORD*)(v6 + 16) + 304i64))
						{
							v7 = sub_1401E7940(v6);
							if (v7 < 0)
								goto LABEL_60;
						}
						if (*(_DWORD*)(v6 + 100))
							*(_DWORD*)(a1 + 3168) &= ~4u;
						*(_QWORD*)(a1 + 344) = v6;
					}
				}
				if (!*(_QWORD*)(a1 + 336))
				{
					LODWORD(v24) = 0;
					v10 = sub_14020BD20(*(_DWORD*)(*(_QWORD*)(a1 + 272) + 104i64));
					if (v10)
					{
						v11 = sub_14018B280(120i64, 0);
						v6 = (__int64)v11;
						if (v11)
						{
							*(_QWORD*)v11 = off_140B55048;
							v11[2] = 1;
							*(_QWORD*)v11 = off_140B60300;
							*((_QWORD*)v11 + 6) = 0i64;
							*((_QWORD*)v11 + 7) = 0i64;
							*((_QWORD*)v11 + 9) = 0i64;
							*((_QWORD*)v11 + 10) = 0i64;
							*((_QWORD*)v11 + 11) = 0i64;
							*(_QWORD*)(v11 + 27) = 0i64;
							*((_QWORD*)v11 + 2) = a1;
						}
						else
						{
							v6 = 0i64;
						}
						*(_QWORD*)(v6 + 24) = v10;
						*(_DWORD*)(v6 + 40) = 1;
						*(_DWORD*)(v6 + 44) = 1;
						*(_QWORD*)(v6 + 64) = 0i64;
						*(_QWORD*)(v6 + 32) = v24;
						v7 = sub_1401E6BF0(v6);
						if (v7 == -2147023728)
						{
							v12 = sub_1401E6B70(v6);
							if (!v12)
								goto LABEL_60;
							*(_QWORD*)(v6 + 24) = v12;
							v7 = sub_1401E6BF0(v6);
						}
						if (v7 < 0)
							goto LABEL_60;
						if (*(_DWORD*)(*(_QWORD*)(v6 + 16) + 2868i64))
						{
							v13 = *(_QWORD*)(v6 + 24);
							*(_DWORD*)(v6 + 100) = *(_DWORD*)(v13 + 144);
							*(_DWORD*)(v6 + 104) = *(_DWORD*)(v13 + 148);
							sub_1401E7DE0(v6);
						}
						else
						{
							*(_QWORD*)(v6 + 100) = 0i64;
						}
						if (*(_QWORD*)(*(_QWORD*)(v6 + 16) + 288i64) != *(_QWORD*)(*(_QWORD*)(v6 + 16) + 304i64))
						{
							v7 = sub_1401E7940(v6);
							if (v7 < 0)
								goto LABEL_60;
						}
						if (*(_DWORD*)(v6 + 100))
							*(_DWORD*)(a1 + 3168) &= ~4u;
						*(_QWORD*)(a1 + 336) = v6;
					}
				}
			}
		}
		else if (!*(_QWORD*)(a1 + 344))
		{
			LODWORD(v24) = 0;
			v17 = sub_14020BD20(*(_DWORD*)(v2 + 96));
			if (v17)
			{
				v18 = sub_14018B280(120i64, 0);
				v6 = (__int64)v18;
				if (v18)
				{
					*(_QWORD*)v18 = off_140B55048;
					v18[2] = 1;
					*(_QWORD*)v18 = off_140B60300;
					*((_QWORD*)v18 + 6) = 0i64;
					*((_QWORD*)v18 + 7) = 0i64;
					*((_QWORD*)v18 + 9) = 0i64;
					*((_QWORD*)v18 + 10) = 0i64;
					*((_QWORD*)v18 + 11) = 0i64;
					*(_QWORD*)(v18 + 27) = 0i64;
					*((_QWORD*)v18 + 2) = a1;
				}
				else
				{
					v6 = 0i64;
				}
				*(_QWORD*)(v6 + 24) = v17;
				*(_DWORD*)(v6 + 40) = 2;
				*(_DWORD*)(v6 + 44) = 1;
				*(_QWORD*)(v6 + 64) = 0i64;
				*(_QWORD*)(v6 + 32) = v24;
				v7 = sub_1401E6BF0(v6);
				if (v7 == -2147023728)
				{
					v19 = sub_1401E6B70(v6);
					if (!v19)
						goto LABEL_60;
					*(_QWORD*)(v6 + 24) = v19;
					v7 = sub_1401E6BF0(v6);
				}
				if (v7 < 0)
					goto LABEL_60;
				if (*(_DWORD*)(*(_QWORD*)(v6 + 16) + 2868i64))
				{
					v20 = *(_QWORD*)(v6 + 24);
					*(_DWORD*)(v6 + 100) = *(_DWORD*)(v20 + 144);
					*(_DWORD*)(v6 + 104) = *(_DWORD*)(v20 + 148);
					sub_1401E7DE0(v6);
				}
				else
				{
					*(_QWORD*)(v6 + 100) = 0i64;
				}
				if (*(_QWORD*)(*(_QWORD*)(v6 + 16) + 288i64) != *(_QWORD*)(*(_QWORD*)(v6 + 16) + 304i64))
				{
					v7 = sub_1401E7940(v6);
					if (v7 < 0)
						goto LABEL_60;
				}
				if (*(_DWORD*)(v6 + 100))
					*(_DWORD*)(a1 + 3168) &= ~4u;
				*(_QWORD*)(a1 + 344) = v6;
			}
		}
		if (!*(_QWORD*)(a1 + 376))
		{
			v14 = sub_14020BD20(*(_DWORD*)(*(_QWORD*)(a1 + 272) + 108i64));
			LODWORD(v24) = 0;
			v15 = v14;
			if (*(_DWORD*)(a1 + 44))
			{
				if (v14)
				{
					v16 = sub_14018B280(120i64, 0);
					v6 = (__int64)v16;
					if (v16)
					{
						*(_QWORD*)v16 = off_140B55048;
						v16[2] = 1;
						*(_QWORD*)v16 = off_140B60300;
						*((_QWORD*)v16 + 6) = 0i64;
						*((_QWORD*)v16 + 7) = 0i64;
						*((_QWORD*)v16 + 9) = 0i64;
						*((_QWORD*)v16 + 10) = 0i64;
						*((_QWORD*)v16 + 11) = 0i64;
						*(_QWORD*)(v16 + 27) = 0i64;
						*((_QWORD*)v16 + 2) = a1;
					}
					else
					{
						v6 = 0i64;
					}
					*(_QWORD*)(v6 + 24) = v15;
					*(_DWORD*)(v6 + 40) = 6;
					*(_DWORD*)(v6 + 44) = 1;
					*(_QWORD*)(v6 + 64) = 0i64;
					*(_QWORD*)(v6 + 32) = v24;
					v7 = sub_1401E6BF0(v6);
					if (v7 == -2147023728)
					{
						v22 = sub_1401E6B70(v6);
						if (!v22)
							goto LABEL_60;
						*(_QWORD*)(v6 + 24) = v22;
						v7 = sub_1401E6BF0(v6);
					}
					if (v7 >= 0)
					{
						if (*(_DWORD*)(*(_QWORD*)(v6 + 16) + 2868i64))
						{
							v23 = *(_QWORD*)(v6 + 24);
							*(_DWORD*)(v6 + 100) = *(_DWORD*)(v23 + 144);
							*(_DWORD*)(v6 + 104) = *(_DWORD*)(v23 + 148);
							sub_1401E7DE0(v6);
						}
						else
						{
							*(_QWORD*)(v6 + 100) = 0i64;
						}
						if (*(_QWORD*)(*(_QWORD*)(v6 + 16) + 288i64) == *(_QWORD*)(*(_QWORD*)(v6 + 16) + 304i64)
							|| (v7 = sub_1401E7940(v6), v7 >= 0))
						{
							if (*(_DWORD*)(v6 + 100))
								*(_DWORD*)(a1 + 3168) &= ~4u;
							*(_QWORD*)(a1 + 376) = v6;
							return 0i64;
						}
					}
				LABEL_60:
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
					return (unsigned int)v7;
				}
			}
		}
	}
	return 0i64;
}
// 1401E1424: variable 'v24' is possibly undefined
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B60300: using guessed type __int64 (__fastcall *off_140B60300[3])();

