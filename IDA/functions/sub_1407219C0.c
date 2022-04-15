//----- (00000001407219C0) ----------------------------------------------------
__int64 __fastcall sub_1407219C0(__int64 a1, unsigned int a2)
{
	unsigned int v4; // eax
	unsigned int v5; // ebx
	unsigned int v6; // r12d
	__int64(__fastcall * v7)(wchar_t**, _QWORD, __int64); // rax
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rbp
	unsigned int v11; // ebx
	int* v12; // rax
	__int64 v13; // r8
	int* v14; // rcx
	__int64 v15; // rdx
	unsigned int v16; // esi
	unsigned int* v17; // r14
	unsigned int v18; // ebx
	__int64 v19; // rax
	__int64 v20; // rax
	int* v21; // rdx
	__int64 v22; // rdi
	unsigned int v23; // ebx
	int* v24; // rax
	__int64 v25; // r8
	int* v26; // rcx
	__int64 v27; // rdx
	int* v29; // [rsp+30h] [rbp-68h] BYREF
	int* v30; // [rsp+38h] [rbp-60h] BYREF
	_QWORD v31[2]; // [rsp+40h] [rbp-58h] BYREF
	_QWORD v32[2]; // [rsp+50h] [rbp-48h] BYREF
	unsigned int v33; // [rsp+A8h] [rbp+10h] BYREF
	unsigned int v34; // [rsp+B0h] [rbp+18h]
	__int64 v35; // [rsp+B8h] [rbp+20h] BYREF

	v33 = a2;
	if (qword_140C63838)
	{
		v4 = qword_140C63838(off_140A6BD30, qword_140C63858);
	}
	else
	{
		if (dword_140C63F78)
		{
			v5 = 0;
			goto LABEL_9;
		}
		if ((int)sub_14021E8E0() < 0)
		{
			v5 = 0;
			goto LABEL_9;
		}
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64418 + 40i64))(qword_140C64418);
	}
	v5 = v4;
LABEL_9:
	v6 = 0;
	v34 = v5;
	if (v5)
	{
		v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63848;
		while (!v7)
		{
			if (!dword_140C63F78)
			{
				if ((int)sub_14021E8E0() >= 0)
				{
					v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64418 + 32i64))(qword_140C64418, v6);
				LABEL_16:
					v9 = v8;
					if (v8 && *(_DWORD*)(v8 + 4))
					{
						v10 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, v8, a2);
						v11 = **(_DWORD**)(v10 + 8);
						v12 = sub_1404A8A10(a1 + 136, (int*)&v33);
						v13 = *((_QWORD*)v12 + 1);
						v14 = (int*)v13;
						v15 = *(_QWORD*)(v13 + 8);
						while (v15)
						{
							if (*(_DWORD*)(v15 + 32) < v11)
							{
								v15 = *(_QWORD*)(v15 + 24);
							}
							else
							{
								v14 = (int*)v15;
								v15 = *(_QWORD*)(v15 + 16);
							}
						}
						if (v14 == (int*)v13 || v11 < v14[8])
						{
							v35 = (__int64)v14;
							LODWORD(v31[0]) = v11;
							v31[1] = 0i64;
							sub_140055C60((__int64)v12, &v29, &v35, v31);
							v14 = v29;
						}
						*((_QWORD*)v14 + 5) = v10;
						v16 = 0;
						v17 = (unsigned int*)(v9 + 8);
						do
						{
							v18 = *v17;
							if (qword_140C63840)
							{
								v19 = qword_140C63840(off_140A6BCF8, v18, qword_140C63858);
							}
							else
							{
								if (dword_140C64318 || (int)sub_14021E4A0() < 0)
									break;
								v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C649D0 + 24i64))(
									qword_140C649D0,
									v18);
							}
							if (!v19)
								break;
							v20 = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, unsigned int))(*(_QWORD*)a1 + 48i64))(
								a1,
								v19,
								v10,
								v16,
								a2);
							v21 = *(int**)(v10 + 32);
							v22 = v20;
							v35 = v20;
							if (v21 == *(int**)(v10 + 40))
							{
								sub_1400B9430((_QWORD*)(v10 + 16), v21, &v35);
							}
							else
							{
								if (v21)
									*(_QWORD*)v21 = v20;
								*(_QWORD*)(v10 + 32) += 8i64;
							}
							v23 = **(_DWORD**)(v22 + 16);
							v24 = sub_1404A8A10(a1 + 168, (int*)&v33);
							v25 = *((_QWORD*)v24 + 1);
							v26 = (int*)v25;
							v27 = *(_QWORD*)(v25 + 8);
							while (v27)
							{
								if (*(_DWORD*)(v27 + 32) < v23)
								{
									v27 = *(_QWORD*)(v27 + 24);
								}
								else
								{
									v26 = (int*)v27;
									v27 = *(_QWORD*)(v27 + 16);
								}
							}
							if (v26 == (int*)v25 || v23 < v26[8])
							{
								v35 = (__int64)v26;
								LODWORD(v32[0]) = v23;
								v32[1] = 0i64;
								sub_140055C60((__int64)v24, &v30, &v35, v32);
								v26 = v30;
							}
							++v16;
							++v17;
							*((_QWORD*)v26 + 5) = v22;
						} while (v16 < 7);
						v5 = v34;
					}
				}
				v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63848;
			}
			if (++v6 >= v5)
				return 0i64;
		}
		v8 = v7(off_140A6BD30, v6, qword_140C63858);
		goto LABEL_16;
	}
	return 0i64;
}
// 140A6BCF8: using guessed type wchar_t *off_140A6BCF8[2];
// 140A6BD30: using guessed type wchar_t *off_140A6BD30[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F78: using guessed type int dword_140C63F78;
// 140C64318: using guessed type int dword_140C64318;
// 140C64418: using guessed type __int64 qword_140C64418;
// 140C649D0: using guessed type __int64 qword_140C649D0;

