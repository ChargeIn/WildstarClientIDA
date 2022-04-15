//----- (00000001404D8A90) ----------------------------------------------------
void __fastcall sub_1404D8A90(__int64 a1, int a2, double a3, double a4)
{
	_DWORD* v5; // rcx
	int v7; // r8d
	__int64 v8; // r8
	_QWORD* v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rbx
	int v14; // eax
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	__int64 v19; // [rsp+28h] [rbp-20h]
	__int64 v20; // [rsp+30h] [rbp-18h]
	__int64 v21; // [rsp+38h] [rbp-10h]
	int v22; // [rsp+50h] [rbp+8h] BYREF

	v5 = *(_DWORD**)(a1 + 29080);
	if (!v5[6])
		goto LABEL_5;
	v7 = v5[3];
	if (!v7)
		goto LABEL_5;
	v8 = (unsigned int)(v7 - 1);
	if (!(_DWORD)v8)
	{
		if (*(_QWORD*)(*(_QWORD*)v5 + 8i64))
			goto LABEL_10;
	LABEL_5:
		if (!sub_1405CCDE0((__int64)v5))
		{
			v9 = *(_QWORD**)(a1 + 29504);
			if (v9[423])
			{
				v17 = v9[423];
				if (!v17 || !(*(unsigned __int8(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v17 + 376i64))(v17, 0i64))
					sub_1400E9A00(v9);
			}
			else if (*(_QWORD*)(a1 + 27880))
			{
				sub_1403A1510(a1);
			}
			else if (*(int*)(a1 + 26184) >= 11)
			{
				if ((unsigned __int8)sub_1400ED670(*(_QWORD*)(a1 + 29504)))
				{
					(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 30088) + 144i64))(*(_QWORD*)(a1 + 30088), 0i64);
					if (*(_QWORD*)(a1 + 26392))
					{
						LOBYTE(v22) = 0;
						sub_1403F4900(a1, 0x18Fu, (__int64)&v22);
					}
				}
				else
				{
					v10 = *(_QWORD*)(a1 + 120);
					if (v10 && sub_1404695E0(v10) && *(_DWORD*)(sub_1404695E0(*(_QWORD*)(a1 + 120)) + 80))
					{
						v11 = sub_1404695E0(*(_QWORD*)(a1 + 120));
						sub_14039CCE0(a1, *(_DWORD*)(v11 + 92), 6u);
					}
					else
					{
						v12 = *(_QWORD*)(a1 + 25744);
						if (v12 && *(_DWORD*)(v12 + 264))
						{
							sub_14055B0E0(a1, 0, a3, a4);
						}
						else if (*(_QWORD*)(qword_140C659F8 + 200))
						{
							sub_1404B8050();
						}
						else if (a2)
						{
							(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 30088) + 160i64))(
								*(_QWORD*)(a1 + 30088),
								0i64);
							(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 30088) + 168i64))(
								*(_QWORD*)(a1 + 30088),
								205i64,
								1i64);
							v19 = 0i64;
							v20 = 0i64;
							v21 = 0i64;
							v22 = 205;
							sub_14001A500(&v18, 0i64, &v22);
							(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 30088) + 120i64))(
								*(_QWORD*)(a1 + 30088),
								&v18);
							v13 = *(_QWORD*)(a1 + 5352);
							if (v13 && *(_DWORD*)(v13 + 520))
							{
								v14 = dword_140C45E40;
								if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
									v14 = *(_DWORD*)qword_140C63750;
								if (*((_BYTE*)&dword_140C45E50 + v14))
								{
									(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 64i64))(v13, 3i64);
								}
								else
								{
									sub_1403BDAC0(qword_140C65898);
									sub_1405CA990(v15, (__int64*)(v13 + 416));
									sub_1405CA990(v16, (__int64*)(v13 + 408));
								}
							}
							sub_140016560(qword_140C635F0, 0);
							if (v19)
								sub_14018B900(v19, 0);
						}
					}
				}
			}
			else
			{
				*(_DWORD*)(a1 + 26184) = 11;
			}
		}
		return;
	}
	v8 = (unsigned int)(v8 - 1);
	if ((_DWORD)v8)
		goto LABEL_5;
LABEL_10:
	if (v5[3] == 1)
	{
		sub_14062CF20(*(_QWORD**)v5, (unsigned int)(v5[3] - 1), v8, a4);
	}
	else if (v5[3] == 2)
	{
		sub_1405CE500((_QWORD**)v5, 0, a3, a4);
	}
}
// 1404D8D32: variable 'v15' is possibly undefined
// 1404D8D3E: variable 'v16' is possibly undefined
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F8: using guessed type __int64 qword_140C659F8;

