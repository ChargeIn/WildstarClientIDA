#include "../winhttp.h"

//----- (00000001404FFDD0) ----------------------------------------------------
void __fastcall sub_1404FFDD0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // esi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned int v8; // eax
	unsigned int v9; // eax
	unsigned int v10; // eax
	int v11; // xmm6_4
	__int64 v12; // rbx
	double v13; // xmm0_8
	int v14[5]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v15; // [rsp+34h] [rbp-24h]
	int v16; // [rsp+3Ch] [rbp-1Ch]

	v2 = *(_QWORD*)(a1 + 2328);
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	if (*(_QWORD*)(a1 + 2176))
	{
		v3 = *(_DWORD*)(a1 + 1048);
		if (v3 == 7864)
		{
			v3 = 1543;
			if (*(_DWORD*)(a1 + 2080) == 5)
			{
				v4 = *(_QWORD*)(a1 + 2168);
				if (v4)
				{
					if (*(int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4) + 12) >= 0
						&& *(int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2168) + 16i64))(*(_QWORD*)(a1 + 2168))
							+ 12) < 17
						&& ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2168) + 160i64))(*(_QWORD*)(a1 + 2168)) & 3) == 0)
					{
						v5 = *(_QWORD*)(a1 + 2328);
						if (v5 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) > 0)
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
						v6 = *(_QWORD*)(a1 + 2168);
						if (v6)
						{
							v7 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 64i64))(v6, 20i64);
							if (*(_QWORD*)v7)
							{
								v8 = *(_DWORD*)(*(_QWORD*)v7 + 16i64);
								if (v8 > 0x4F)
								{
									if (v8 == 204)
									{
										v3 = 7198;
									}
									else if (v8 == 348)
									{
										v3 = 1151;
									}
								}
								else if (v8 == 79)
								{
									v3 = 1322;
								}
								else
								{
									v9 = v8 - 45;
									if (v9)
									{
										v10 = v9 - 1;
										if (v10)
										{
											if (v10 == 5)
												v3 = 94;
										}
										else
										{
											v3 = 1455;
										}
									}
									else
									{
										v3 = 452;
									}
								}
							}
						}
					}
				}
			}
		}
		if (*(_DWORD*)(a1 + 1044))
			v11 = *(_DWORD*)(a1 + 1060);
		else
			v11 = 0;
		v12 = *(_QWORD*)(a1 + 2176);
		v13 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
		v14[0] = v3;
		v15 = 2i64;
		v14[2] = v11;
		v14[1] = (int)(v13 * 65536.0);
		v14[3] = *(_DWORD*)(a1 + 1052);
		v14[4] = 0;
		v16 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v12 + 584i64))(v12, 0i64, v14);
	}
}
// 140C77890: using guessed type __int64 qword_140C77890;

