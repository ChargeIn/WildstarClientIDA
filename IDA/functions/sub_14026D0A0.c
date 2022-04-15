//----- (000000014026D0A0) ----------------------------------------------------
__int64 __fastcall sub_14026D0A0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rdx
	int v6; // eax
	BOOL v7; // edi
	__int64 result; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rcx
	HWND v14; // rcx
	unsigned int v15; // esi
	__int64 v16; // rcx
	__int64 v17; // rax
	unsigned int v18; // esi
	unsigned int v19; // eax
	unsigned int v20; // ecx
	unsigned int v21; // r13d
	__int64* v22; // rax
	unsigned int v23; // edx
	unsigned int v24; // esi
	__int64 v25; // r12
	int v26; // r15d
	unsigned int v27; // edi
	unsigned int v28; // [rsp+40h] [rbp-C0h]
	unsigned int v29; // [rsp+44h] [rbp-BCh]
	__int64 v30; // [rsp+48h] [rbp-B8h] BYREF
	__int64* v31; // [rsp+50h] [rbp-B0h]
	__int64 v32[3]; // [rsp+58h] [rbp-A8h] BYREF
	char v33[8]; // [rsp+70h] [rbp-90h] BYREF
	int v34; // [rsp+78h] [rbp-88h]
	int v35; // [rsp+98h] [rbp-68h]
	__int64 v36[2]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v37; // [rsp+C0h] [rbp-40h]
	_DWORD v38[56]; // [rsp+D0h] [rbp-30h] BYREF
	int v39; // [rsp+1B0h] [rbp+B0h]

	*(_DWORD*)(a1 + 6628) = 0;
	v3 = *(_QWORD*)(a1 + 6616);
	if (v3)
	{
		if ((*(_BYTE*)(a1 + 88) & 2) != 0)
			v5 = 0i64;
		else
			v5 = *(_QWORD*)(a1 + 80);
		v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 1024i64))(v3, v5);
		v7 = v6 < 0;
		if (v6 < 0)
		{
			result = sub_14026A900(a1, 0);
			if ((int)result < 0)
				return result;
			v9 = *(_QWORD*)(a1 + 6608);
			if (v9)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				*(_QWORD*)(a1 + 6608) = 0i64;
			}
			v10 = *(_QWORD*)(a1 + 6616);
			if (v10)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
				*(_QWORD*)(a1 + 6616) = 0i64;
			}
		}
	}
	else
	{
		v11 = *(_QWORD*)(a1 + 6608);
		if (v11)
		{
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11);
			v7 = v12 < 0;
			if (v12 < 0)
			{
				if (v12 == -2005530520)
					return 2289436776i64;
				if (v12 != -2005530519)
				{
					result = sub_14026A900(a1, 0);
					if ((int)result < 0)
						return result;
					v13 = *(_QWORD*)(a1 + 6608);
					if (v13)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
						*(_QWORD*)(a1 + 6608) = 0i64;
					}
				}
			}
		}
		else
		{
			v7 = 1;
		}
	}
	v14 = *(HWND*)(a2 + 24);
	v15 = 0;
	if (v14)
	{
		v15 = 1;
		v32[0] = (__int64)MonitorFromWindow(v14, 2u);
	}
	v16 = *(_QWORD*)(a1 + 6592);
	v17 = v15;
	v18 = v15 + 1;
	v32[v17] = 0i64;
	v28 = v18;
	v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 32i64))(v16);
	v20 = 0;
	v21 = v19;
	v30 = v7;
	v29 = 0;
	if (v18)
	{
		v22 = v32;
		v23 = v18;
		v31 = v32;
		while (1)
		{
			v24 = 0;
			if (v21)
				break;
		LABEL_49:
			++v20;
			++v22;
			v29 = v20;
			v31 = v22;
			if (v20 >= v23)
				goto LABEL_50;
		}
		v25 = *v22;
		while (1)
		{
			if (!v25
				|| v25 == (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6592) + 120i64))(
					*(_QWORD*)(a1 + 6592),
					v24))
			{
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, _DWORD*))(**(_QWORD**)(a1 + 6592) + 112i64))(
					*(_QWORD*)(a1 + 6592),
					v24,
					1i64,
					v38);
				if ((int)result < 0)
					return result;
				if ((v38[3] & *(_DWORD*)(a1 + 6256)) == *(_DWORD*)(a1 + 6256) && sub_140269C80((_DWORD*)a1, v38))
				{
					v26 = v39;
					if (*(_QWORD*)(a1 + 6616) && (*(_BYTE*)(a2 + 32) & 2) == 0 && v39 == *(_DWORD*)(a1 + 6552))
						v27 = *(_DWORD*)(a1 + 6548);
					else
						v27 = v24;
					result = sub_140269EC0(a1, a2, v27, v36);
					if ((int)result < 0)
						return result;
					if (!v30
						&& v27 == *(_DWORD*)(a1 + 6548)
						&& *(_DWORD*)(a1 + 6556) == 1
						&& !(unsigned int)sub_1407E6AF0((unsigned __int64*)a2, a1 + 56, 0x28ui64)
						&& v36[0] == *(_QWORD*)(a1 + 6560)
						&& v36[1] == *(_QWORD*)(a1 + 6568)
						&& v37 == *(_QWORD*)(a1 + 6576))
					{
						goto LABEL_58;
					}
					result = sub_14026A150(a1, a2, v36, (__int64)v33);
					if ((int)result < 0)
						return result;
					if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, int, int))(**(_QWORD**)(a1 + 6592) + 72i64))(
						*(_QWORD*)(a1 + 6592),
						v27,
						1i64,
						(unsigned int)v37,
						v34,
						v35) >= 0
						&& (*(int(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6592) + 80i64))(
							*(_QWORD*)(a1 + 6592),
							v27,
							1i64,
							(unsigned int)v37) >= 0)
					{
						break;
					}
				}
			}
			if (++v24 >= v21)
			{
				v22 = v31;
				v20 = v29;
				v23 = v28;
				goto LABEL_49;
			}
		}
		v30 = 0x141DE0F20i64;
		sub_1401A3130(14, 2, &v30);
		if (*(_QWORD*)(a1 + 6608) && v27 == *(_DWORD*)(a1 + 6548) && *(_DWORD*)(a1 + 6556) == 1)
		{
			result = sub_14026A2D0(a1, (_QWORD*)a2, (__int64)v33, v36);
			if ((int)result < 0)
				return result;
		}
		else
		{
			result = sub_14026A4D0(a1, (_QWORD*)a2, v27, v26, 2, (__int64)v33, v36);
			if ((int)result < 0)
				return result;
		}
	LABEL_58:
		*(_DWORD*)(a1 + 6628) = 1;
		return 0i64;
	}
	else
	{
	LABEL_50:
		if (*(_QWORD*)(a1 + 6608))
		{
			*(_DWORD*)(a1 + 6628) = 1;
			return 1i64;
		}
		else
		{
			return 2685272066i64;
		}
	}
}
// 14026D0A0: using guessed type __int64 var_1E8[3];
// 14026D0A0: using guessed type char var_1D0[8];

