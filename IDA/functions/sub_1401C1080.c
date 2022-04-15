#include "../winhttp.h"

//----- (00000001401C1080) ----------------------------------------------------
__int64 __fastcall sub_1401C1080(__int64 a1, int** a2)
{
	int* v5; // rsi
	HANDLE FirstFileW; // r14
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	WCHAR* cFileName; // rdi
	__int64 v10; // rbx
	int* v11; // rax
	int* v12; // rdx
	int* v13; // rdi
	int* v14; // rdx
	__int64 v15; // rcx
	char v16[8]; // [rsp+20h] [rbp-4B8h] BYREF
	__int64 v17; // [rsp+28h] [rbp-4B0h]
	__int64 v18; // [rsp+30h] [rbp-4A8h]
	int v19; // [rsp+38h] [rbp-4A0h]
	struct _WIN32_FIND_DATAW FindFileData; // [rsp+40h] [rbp-498h] BYREF
	WCHAR FileName[264]; // [rsp+290h] [rbp-248h] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(32i64, 0);
	if (v5)
	{
		*(_QWORD*)v5 = off_140B5F348;
		*((_QWORD*)v5 + 2) = 0i64;
		*((_QWORD*)v5 + 1) = 0i64;
		v5[6] = 1;
	}
	else
	{
		v5 = 0i64;
	}
	sub_14001B370(FileName, 260i64, L"%s\\*", a1 + 8);
	FirstFileW = FindFirstFileW(FileName, &FindFileData);
	if (FirstFileW != (HANDLE)-1i64)
	{
		do
		{
			if ((FindFileData.dwFileAttributes & 0x10) == 0)
			{
				v7 = 0i64;
				while ((unsigned int)sub_1407DFF44(FindFileData.cFileName[v7]))
				{
					if ((unsigned __int64)++v7 >= 0x28)
					{
						if (!(unsigned int)sub_14018E2C0((__int64)&FindFileData.cFileName[40], L".bin"))
						{
							v8 = 0i64;
							cFileName = FindFileData.cFileName;
							do
							{
								sub_1407DF3F0(cFileName, (__int64)L"%2x", v16);
								v16[++v8 + 7] = v16[0];
								cFileName += 2;
							} while (v8 < 0x14);
							v10 = *((_QWORD*)v5 + 2);
							v11 = sub_14018DB00(*((_QWORD*)v5 + 1), v10 + 1, 20i64);
							v12 = &v11[5 * v10];
							v13 = v11;
							*(_QWORD*)v12 = v17;
							*((_QWORD*)v12 + 1) = v18;
							v12[4] = v19;
							v14 = (int*)*((_QWORD*)v5 + 1);
							if (v14 != v11)
							{
								sub_1407DB590(v11, v14, 20i64 * *((_QWORD*)v5 + 2));
								v15 = *((_QWORD*)v5 + 1);
								if (v15)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
								*((_QWORD*)v5 + 1) = v13;
							}
							*((_QWORD*)v5 + 2) = v10 + 1;
						}
						break;
					}
				}
			}
		} while (FindNextFileW(FirstFileW, &FindFileData));
		FindClose(FirstFileW);
	}
	*a2 = v5;
	return 0i64;
}
// 1401C117D: conditional instruction was optimized away because rbx.8<28u
// 140A476A0: using guessed type wchar_t a2x[4];
// 140A476C0: using guessed type wchar_t aBin_1[5];
// 140A476D0: using guessed type wchar_t aS_29[5];
// 140B5F348: using guessed type __int64 (__fastcall *off_140B5F348[6])();

