//----- (000000014071C4E0) ----------------------------------------------------
__int64 __fastcall sub_14071C4E0(__int64 a1)
{
	int v2; // ebp
	int v3; // ebx
	int v4; // esi
	int v5; // r14d
	__int64 v6; // rbx
	int v7; // edx
	int v8; // eax
	int v10[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v11; // [rsp+28h] [rbp-30h]
	void(__fastcall * v12)(__int64); // [rsp+30h] [rbp-28h]
	__int64 v13; // [rsp+38h] [rbp-20h]

	v2 = 1;
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(
		*(_QWORD*)(a1 + 224),
		61i64,
		1i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(
		*(_QWORD*)(a1 + 224),
		62i64,
		1i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(
		*(_QWORD*)(a1 + 224),
		63i64,
		1i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 224) + 728i64))(
		*(_QWORD*)(a1 + 224),
		64i64,
		1i64);
	*(_DWORD*)(a1 + 240) = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
	v3 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1) + 4);
	v4 = 1334;
	if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) + 64)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 408i64))(
			*(_QWORD*)(a1 + 224),
			1334i64)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 224) + 408i64))(
			*(_QWORD*)(a1 + 224),
			165i64))
	{
		v2 = 0;
	}
	*(_DWORD*)(a1 + 236) = v2;
	*(_DWORD*)(a1 + 328) = 0;
	if (*(_DWORD*)(a1 + 320))
	{
		v5 = 0;
		if (v2)
		{
			v5 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 224) + 424i64))(
				*(_QWORD*)(a1 + 224),
				1334i64,
				*(unsigned int*)(a1 + 240))
				+ 20);
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 224) + 424i64))(
				*(_QWORD*)(a1 + 224),
				165i64,
				*(unsigned int*)(a1 + 240));
			if (*(_DWORD*)(a1 + 320) && !*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) + 12))
				v3 -= v5;
		}
		else
		{
			v4 = *(_DWORD*)(a1 + 244);
		}
		if (!*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) + 12))
		{
			if (v3 <= 0)
			{
				*(_DWORD*)(a1 + 320) = 0;
			}
			else
			{
				v10[0] = 0;
				v12 = sub_14071CA00;
				v11 = a1;
				v13 = 0i64;
				sub_140195960(a1 + 248, v5 + v3, (__int64)v10, 4);
			}
		}
	}
	(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 224) + 648i64))(
		*(_QWORD*)(a1 + 224),
		sub_14071C460,
		a1);
	v6 = *(_QWORD*)(a1 + 224);
	v7 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1) + 196);
	v8 = *(_DWORD*)(a1 + 240);
	v10[0] = v4;
	LODWORD(v11) = 1065353216;
	HIDWORD(v11) = v7;
	v10[1] = v8;
	v12 = 0i64;
	v13 = 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v6 + 584i64))(v6, 0i64, v10);
}
// 140C77890: using guessed type __int64 qword_140C77890;

