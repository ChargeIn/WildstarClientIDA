//----- (0000000140724500) ----------------------------------------------------
void __fastcall sub_140724500(unsigned int a1)
{
	__int64* v1; // rdx
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64* v5; // rdx
	__int64* v6; // r8
	__int64 v7; // rax
	unsigned int v8; // ecx
	__int64 v9; // r14
	__int64 v10; // r15
	int v11; // ebx
	__int64 v12; // rax
	__int64 v13; // rbp
	unsigned __int64 v14; // rdi
	_QWORD* v15; // rbx
	__int64* v16; // rbx
	__int64 v17; // rbx
	_DWORD* v18; // rdi
	unsigned int v19; // ebp
	__int64 v20; // rax
	int v21; // eax
	__int64 v22; // [rsp+20h] [rbp-38h] BYREF
	__int64 v23; // [rsp+28h] [rbp-30h]
	__int64 v24; // [rsp+30h] [rbp-28h]
	__int64 v25; // [rsp+38h] [rbp-20h]
	int v26; // [rsp+68h] [rbp+10h] BYREF

	v1 = (__int64*)xmmword_140C7DFC0;
	if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
	{
		while (*(_DWORD*)(*v1 + 188) != a1)
		{
			if (++v1 == *((__int64**)&xmmword_140C7DFC0 + 1))
				return;
		}
		if (*v1)
		{
			v3 = sub_1405AC7E0(*v1);
			if (v3)
			{
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v3 + 24i64))(v3, 1i64, a1);
				v4 = *(_QWORD*)(qword_140C659F0 + 824);
				v5 = *(__int64**)(v4 + 16);
				v6 = *(__int64**)(v4 + 24);
				if (v5 != v6)
				{
					while (1)
					{
						v7 = *v5;
						if (*(_DWORD*)(*v5 + 188) == a1)
							break;
						if (++v5 == v6)
							return;
					}
					if (v7)
					{
						v8 = *(_DWORD*)(v7 + 184);
						v9 = 0i64;
						v23 = 0i64;
						v10 = 0i64;
						v24 = 0i64;
						v25 = 0i64;
						v11 = 0;
						v12 = sub_140205FA0(v8);
						if (v12)
							v11 = *(_DWORD*)(v12 + 4);
						v13 = qword_140C659F8;
						v26 = v11;
						v14 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v26);
						v15 = *(_QWORD**)(*(_QWORD*)(v13 + 48) + 8 * (v14 % *(_QWORD*)(v13 + 40)));
						if (v15)
						{
							while (v14 != *v15 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v13 + 64))(&v26, v15 + 2))
							{
								v15 = (_QWORD*)v15[1];
								if (!v15)
									goto LABEL_22;
							}
							v16 = v15 + 3;
							if (v16 && *(_DWORD*)(*v16 + 20) == a1)
							{
								sub_1404C7CF0(*v16, &v22, 4);
								v10 = v24;
								v9 = v23;
							}
						}
					LABEL_22:
						v17 = v9;
						if (v9 != v10)
						{
							while (1)
							{
								v18 = *(_DWORD**)v17;
								v19 = *(_DWORD*)(*(_QWORD*)v17 + 108i64);
								if (qword_140C63840)
								{
									v20 = qword_140C63840(off_140A6AA60, v19, qword_140C63858);
								}
								else
								{
									if (dword_140C63A64 || (int)sub_140207B00() < 0)
										break;
									v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E68 + 24i64))(
										qword_140C63E68,
										v19);
								}
								if (!v20)
									break;
								v21 = *(_DWORD*)(v20 + 24);
								if ((v21 & 0x340) != 0 && v21 != v18[29])
									break;
								if ((v21 & 0x342) == 0)
									break;
								v17 += 8i64;
								if (v17 == v10)
									goto LABEL_35;
							}
							(*(void(__fastcall**)(_DWORD*, __int64, _QWORD))(*(_QWORD*)v18 + 24i64))(v18, 1i64, a1);
						}
					LABEL_35:
						if (v9)
							sub_14018B900(v9, 0);
					}
				}
			}
		}
	}
}
// 140A6AA60: using guessed type wchar_t *off_140A6AA60[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A64: using guessed type int dword_140C63A64;
// 140C63E68: using guessed type __int64 qword_140C63E68;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

