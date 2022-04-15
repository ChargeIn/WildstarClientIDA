//----- (000000014056ED20) ----------------------------------------------------
__int64 __fastcall sub_14056ED20(__int64 a1, __int64 a2)
{
	__int64 v3; // r14
	unsigned int v4; // r15d
	__int64 v5; // r12
	int v6; // edi
	__int64 v7; // rax
	unsigned int v8; // ebx
	__int64 v9; // rsi
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // ecx
	int v20; // ecx
	int* v21; // rax
	int* v22; // rdi
	unsigned int v23; // ecx
	int* v24; // rbx
	__int64 v25; // rax
	int* v26; // rdx
	int v27; // eax
	int* v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rcx
	__int64 v31; // rdi
	int* v33; // [rsp+48h] [rbp-49h] BYREF
	int* v34; // [rsp+50h] [rbp-41h] BYREF
	char v35[8]; // [rsp+58h] [rbp-39h] BYREF
	int* v36; // [rsp+60h] [rbp-31h]
	__int64 v37; // [rsp+68h] [rbp-29h]
	int v38[4]; // [rsp+78h] [rbp-19h] BYREF
	__int64 v39; // [rsp+88h] [rbp-9h]
	__int64 v40; // [rsp+90h] [rbp-1h]
	__int64 v41; // [rsp+98h] [rbp+7h]
	int v42; // [rsp+F8h] [rbp+67h]
	int v43; // [rsp+100h] [rbp+6Fh]
	__int64 v44; // [rsp+108h] [rbp+77h] BYREF
	__int64 v45; // [rsp+110h] [rbp+7Fh] BYREF

	v3 = qword_140C65970;
	v37 = 0i64;
	v4 = 1;
	v36 = sub_14018B280(72i64, 0);
	*(_BYTE*)v36 = 0;
	*((_QWORD*)v36 + 1) = 0i64;
	v5 = 0i64;
	*((_QWORD*)v36 + 2) = v36;
	v6 = 1;
	*((_QWORD*)v36 + 3) = v36;
	v42 = 1;
	v43 = 0;
	if (*(_DWORD*)a2)
	{
		do
		{
			v7 = *(_QWORD*)(a2 + 8);
			v8 = *(_DWORD*)(v7 + 24 * v5);
			v9 = v7 + 24 * v5;
			if (qword_140C63840)
			{
				v10 = qword_140C63840(off_140A6BDA0, v8, qword_140C63858);
			}
			else
			{
				if (dword_140C64EC8 || (int)sub_14021F160() < 0)
				{
				LABEL_63:
					v4 = -2147467259;
					goto LABEL_55;
				}
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E80 + 24i64))(qword_140C64E80, v8);
			}
			v11 = v10;
			if (!v10)
				goto LABEL_63;
			v12 = *(_QWORD*)(v3 + 64);
			v13 = v12;
			v14 = *(_QWORD*)(v12 + 8);
			while (v14)
			{
				if (*(_DWORD*)(v14 + 32) < *(_DWORD*)(v11 + 32))
				{
					v14 = *(_QWORD*)(v14 + 24);
				}
				else
				{
					v13 = v14;
					v14 = *(_QWORD*)(v14 + 16);
				}
			}
			if (v13 == v12 || *(_DWORD*)(v11 + 32) < *(_DWORD*)(v13 + 32))
			{
				v45 = *(_QWORD*)(v3 + 64);
				v15 = &v45;
			}
			else
			{
				v44 = v13;
				v15 = &v44;
			}
			v16 = *v15;
			if (v16 == v12)
				goto LABEL_55;
			v17 = *(_QWORD*)(v16 + 40);
			v18 = *(_QWORD*)(v3 + 88);
			if (!v18 || ***(_DWORD***)(v18 + 72) != ***(_DWORD***)(v17 + 72))
				goto LABEL_55;
			if (v6)
			{
				v19 = *(_DWORD*)(v3 + 8);
				v42 = 0;
				if (v19)
				{
					v20 = v19 - 1;
					if (v20)
					{
						if (v20 == 2)
							sub_140437A10((_QWORD*)qword_140C658D8, 0x57u, 0, 0i64, 0, 0, 1);
					}
					else
					{
						sub_140437A10((_QWORD*)qword_140C658D8, 0x5Fu, 0, 0i64, 0, 0, 1);
					}
				}
				else
				{
					sub_140437A10((_QWORD*)qword_140C658D8, 0x4Eu, 0, 0i64, 0, 0, 1);
				}
			}
			v21 = sub_14056DCE0(v17, v9);
			v22 = v21;
			if (v21)
			{
				if (*(_DWORD*)(v9 + 4))
				{
					(*(void(__fastcall**)(int*))(*(_QWORD*)v21 + 152i64))(v21);
				}
				else
				{
					v23 = *(_DWORD*)(v9 + 20);
					if (v23)
					{
						v24 = v36;
						v25 = *((_QWORD*)v36 + 1);
						while (v25)
						{
							if (*(_DWORD*)(v25 + 32) < v23)
							{
								v25 = *(_QWORD*)(v25 + 24);
							}
							else
							{
								v24 = (int*)v25;
								v25 = *(_QWORD*)(v25 + 16);
							}
						}
						if (v24 == v36 || v23 < v24[8])
						{
							v38[0] = *(_DWORD*)(v9 + 20);
							v39 = 0i64;
							v41 = 0i64;
							sub_1407DB590(0i64, 0i64, 0i64);
							v40 = 0i64;
							v33 = v24;
							sub_140573420((__int64)v35, &v34, (__int64*)&v33, v38);
							v24 = v34;
						}
						v26 = (int*)*((_QWORD*)v24 + 7);
						if (v26 == *((int**)v24 + 8))
						{
							sub_14017B140((_QWORD*)v24 + 5, v26, (int*)v9);
						}
						else
						{
							if (v26)
								*v26 = *(_DWORD*)v9;
							*((_QWORD*)v24 + 7) += 4i64;
						}
					}
					else
					{
						sub_14056F210(v3, v21, *(unsigned __int8*)(v9 + 16));
						v27 = *(_DWORD*)(**((_QWORD**)v22 + 6) + 12i64);
						if (v27 != 2 && v27 != 14 || ((*(__int64(__fastcall**)(int*))(*(_QWORD*)v22 + 88i64))(v22) & 1) != 0)
						{
							sub_1400EA3E0(
								*(_QWORD*)(qword_140C65898 + 29504),
								"PlayerPathMissionUnlocked",
								byte_1409ECD0C,
								*((_QWORD*)v22 + 6));
							v43 = 1;
						}
					}
				}
				sub_140570340(v3, (_QWORD**)v22);
				sub_14056B530(*((_QWORD*)v22 + 6));
			}
			v6 = v42;
			v5 = (unsigned int)(v5 + 1);
		} while ((unsigned int)v5 < *(_DWORD*)a2);
		if (v43)
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerPathMissionUnlockedSound", &unk_1409D10C3);
	}
	if (v37)
		sub_14042D9B0(*(_QWORD*)(qword_140C65898 + 29504), (__int64)v35);
	v4 = 0;
LABEL_55:
	if (v37)
	{
		v28 = v36;
		v29 = *((_QWORD*)v36 + 1);
		if (v29)
		{
			do
			{
				sub_1401DE580((__int64)v35, *(_QWORD**)(v29 + 24));
				v30 = *(_QWORD*)(v29 + 48);
				v31 = *(_QWORD*)(v29 + 16);
				if (v30)
					sub_14018B900(v30, 0);
				sub_14018B900(v29, 0);
				v29 = v31;
			} while (v31);
			v28 = v36;
		}
		*((_QWORD*)v28 + 2) = v28;
		*((_QWORD*)v36 + 1) = 0i64;
		*((_QWORD*)v36 + 3) = v36;
		v37 = 0i64;
	}
	sub_14018B900((__int64)v36, 0);
	return v4;
}
// 1409ECD0C: using guessed type _BYTE byte_1409ECD0C[4];
// 140A6BDA0: using guessed type wchar_t *off_140A6BDA0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E80: using guessed type __int64 qword_140C64E80;
// 140C64EC8: using guessed type int dword_140C64EC8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65970: using guessed type __int64 qword_140C65970;
// 14056ED20: using guessed type int var_70[4];
// 14056ED20: using guessed type char var_90[8];

