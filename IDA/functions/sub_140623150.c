//----- (0000000140623150) ----------------------------------------------------
void __fastcall sub_140623150(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	unsigned int v5; // edi
	void(__fastcall * v6)(__int64, __int64, __int64, int, int, __int64); // rsi
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned int v11; // edi
	void(__fastcall * v12)(__int64, __int64, __int64, int, int, __int64); // rsi
	__int64 v13; // rcx
	__int64 v14; // [rsp+20h] [rbp-20h] BYREF
	_QWORD v15[3]; // [rsp+28h] [rbp-18h]

	if (*(_DWORD*)(a1 + 968) == 3)
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
			*(_QWORD*)(a1 + 48),
			165i64))
		{
			sub_140622B70(a1);
			return;
		}
		v2 = *(_QWORD*)(a1 + 48);
		*(_DWORD*)(a1 + 684) = 1;
		if (v2)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 1112i64))(v2);
			v3 = *(_QWORD*)(a1 + 48);
			v14 = 165i64;
			v15[0] = 1065353216i64;
			v15[1] = 0i64;
			v15[2] = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v14);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 48) + 648i64))(
				*(_QWORD*)(a1 + 48),
				sub_1406235E0,
				a1);
		}
		v4 = *(_QWORD*)(a1 + 56);
		if (!v4)
			goto LABEL_17;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 1112i64))(v4);
		v5 = 2016;
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
			*(_QWORD*)(a1 + 56),
			2016i64))
		{
			v6 = sub_140624B60;
		}
		else
		{
			v5 = 2017;
			if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
				*(_QWORD*)(a1 + 56),
				2017i64))
			{
				v6 = sub_140624C10;
			}
			else if (*(_DWORD*)(a1 + 684)
				|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
					*(_QWORD*)(a1 + 56),
					2017i64))
			{
				v5 = 2018;
				if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
					*(_QWORD*)(a1 + 56),
					2018i64))
				{
					sub_14061A600(a1);
				LABEL_17:
					v8 = *(_QWORD*)(a1 + 96);
					if (v8)
					{
						if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 408i64))(v8, 165i64))
						{
							v9 = *(_QWORD*)(a1 + 96);
							v14 = 165i64;
							v15[0] = 1065353216i64;
							v15[1] = 0i64;
							v15[2] = 0i64;
							(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v14);
						}
					}
					return;
				}
				v6 = sub_140624A90;
			}
			else
			{
				v6 = sub_140624C10;
			}
		}
		v7 = *(_QWORD*)(a1 + 56);
		v14 = v5;
		v15[0] = 1065353216i64;
		v15[1] = 0i64;
		v15[2] = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, &v14);
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
			*(_QWORD*)(a1 + 56),
			v6,
			a1);
		goto LABEL_17;
	}
	if (!*(_QWORD*)(a1 + 48))
	{
		sub_140622B70(a1);
		*(_DWORD*)(a1 + 700) = 1;
		return;
	}
	v10 = *(_QWORD*)(a1 + 56);
	if (v10)
	{
		v11 = 2016;
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 408i64))(v10, 2016i64))
		{
			v12 = sub_140624B60;
		}
		else
		{
			v11 = 2017;
			if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
				*(_QWORD*)(a1 + 56),
				2017i64)
				|| !*(_DWORD*)(a1 + 684)
				&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
					*(_QWORD*)(a1 + 56),
					2017i64))
			{
				v12 = sub_140624C10;
			}
			else
			{
				v11 = 2018;
				if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
					*(_QWORD*)(a1 + 56),
					2018i64))
				{
					sub_14061A600(a1);
					return;
				}
				v12 = sub_140624A90;
			}
		}
		v13 = *(_QWORD*)(a1 + 56);
		v14 = v11;
		LODWORD(v15[0]) = 1065353216;
		*(_OWORD*)((char*)v15 + 4) = 0ui64;
		HIDWORD(v15[2]) = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v13 + 584i64))(v13, 0i64, &v14);
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
			*(_QWORD*)(a1 + 56),
			v12,
			a1);
	}
}

