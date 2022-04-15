//----- (000000014053B190) ----------------------------------------------------
int* __fastcall sub_14053B190(__int64 a1)
{
	__int64 v1; // rax
	int v3; // eax
	__int64 v4; // rdx
	int v5; // ecx
	int v6; // esi
	__int64 v7; // rbx
	__int64 v8; // rax
	int* result; // rax
	unsigned int v10; // ebx
	__int64 v11; // rsi
	__int64* v12; // rax
	__int64 v13; // rax
	unsigned __int64 v14; // rcx
	__int64 v15; // rbx
	int v16; // r8d
	__int64 v17; // rcx
	unsigned int v18; // [rsp+20h] [rbp-18h] BYREF
	__int64 v19; // [rsp+28h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 29272);
	if (v1 && ((v3 = *(_DWORD*)(v1 + 20), v3 == 2) || v3 == 5))
	{
		v4 = *(_QWORD*)(a1 + 25744);
		v5 = 1;
		if (v4)
		{
			v6 = *(_DWORD*)(v4 + 6124);
			v7 = *(_QWORD*)(qword_140C659F0 + 824);
			v8 = sub_1405B16C0(v7, *(_DWORD*)(a1 + 29932), 1);
			if (v8)
				return sub_1405B0240(v8);
			v8 = sub_1405B15C0(v7, v6);
			if (v8)
				return sub_1405B0240(v8);
			v18 = 0;
			v19 = 0i64;
			return (int*)*((_QWORD*)sub_1404BC890((_QWORD*)(qword_140C65898 + 30032), &v18) + 1);
		}
	}
	else
	{
		v5 = 0;
	}
	v10 = *(_DWORD*)(a1 + 29932);
	v11 = v5;
	while (1)
	{
		if (!v11)
		{
			v12 = *(__int64**)(*(_QWORD*)(a1 + 30048)
				+ 8
				* (v10 % (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 30056) - *(_QWORD*)(a1 + 30048)) >> 3)));
			if (v12)
				break;
		}
	LABEL_17:
		if (qword_140C63840)
		{
			v13 = qword_140C63840(off_140A6E3E8, v10, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
				return (int*)&unk_1409F2234;
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v10);
		}
		v15 = v13;
		if (!v13)
			return (int*)&unk_1409F2234;
		v16 = *(_DWORD*)(v13 + 4);
		if (v16)
		{
			if (v11)
			{
				if (!*(_DWORD*)(v13 + 8))
				{
					v14 = (__int64)(*(_QWORD*)(a1 + 30056) - *(_QWORD*)(a1 + 30048)) >> 3;
					v12 = *(__int64**)(*(_QWORD*)(a1 + 30048) + 8 * (0 % v14));
					if (v12)
					{
						while (*((_DWORD*)v12 + 2))
						{
							v12 = (__int64*)*v12;
							if (!v12)
								goto LABEL_31;
						}
						return (int*)v12[2];
					}
				}
			}
		LABEL_31:
			result = (int*)sub_14034BDD0(v14, v16);
			if (result)
			{
				v17 = 0i64;
				if (*(_WORD*)result)
				{
					do
						++v17;
					while (*((_WORD*)result + v17));
					if (v17)
						return result;
				}
			}
		}
		v10 = *(_DWORD*)(v15 + 8);
		if (!v10)
			return (int*)&unk_1409F2234;
	}
	while (*((_DWORD*)v12 + 2) != v10)
	{
		v12 = (__int64*)*v12;
		if (!v12)
			goto LABEL_17;
	}
	return (int*)v12[2];
}
// 14053B2A8: conditional instruction was optimized away because rax.8!=0
// 14053B353: conditional instruction was optimized away because rax.8!=0
// 14053B358: variable 'v14' is possibly undefined
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

