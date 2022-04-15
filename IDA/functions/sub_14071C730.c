//----- (000000014071C730) ----------------------------------------------------
void __fastcall sub_14071C730(__int64 a1)
{
	double v2; // xmm0_8
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	int v6; // edx
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rcx
	int v10; // [rsp+20h] [rbp-20h] BYREF
	int v11; // [rsp+24h] [rbp-1Ch]
	int v12; // [rsp+28h] [rbp-18h]
	__int64 v13; // [rsp+2Ch] [rbp-14h]
	__int64 v14; // [rsp+34h] [rbp-Ch]
	int v15; // [rsp+3Ch] [rbp-4h]

	if (*(_DWORD*)(a1 + 320))
	{
		if (*(_QWORD*)(a1 + 224))
		{
			v2 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
			v3 = *(_QWORD*)(a1 + 224);
			v10 = *(_DWORD*)(a1 + 244);
			*(_DWORD*)(a1 + 240) = (int)(v2 * 65536.0);
			v11 = (int)(v2 * 65536.0);
			v13 = 0i64;
			v12 = 1065353216;
			v14 = 0i64;
			v15 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v10);
		}
	}
	else if (*(_DWORD*)(a1 + 236))
	{
		v4 = *(_QWORD*)(a1 + 224);
		if (v4)
		{
			if (*(_DWORD*)(a1 + 328))
			{
				(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*(_QWORD*)v4 + 648i64))(
					v4,
					sub_14071C480,
					a1);
				v8 = *(_DWORD*)(a1 + 240);
				v9 = *(_QWORD*)(a1 + 224);
				v12 = 1065353216;
				v11 = v8;
				v10 = 165;
				v13 = 0i64;
				v14 = 0i64;
				v15 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v10);
				*(_DWORD*)(a1 + 328) = 2;
			}
			else
			{
				v5 = sub_1401AE6A0(0, 0xFFFF);
				v6 = *(_DWORD*)(a1 + 244);
				v7 = *(_QWORD*)(a1 + 224);
				v12 = 1065353216;
				*(_DWORD*)(a1 + 240) = v5;
				v11 = v5;
				v10 = v6;
				v13 = 0i64;
				v14 = 0i64;
				v15 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, &v10);
				*(_DWORD*)(a1 + 328) = 1;
			}
		}
	}
	else if (!*(_QWORD*)(a1 + 264))
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
	}
}
// 140C77890: using guessed type __int64 qword_140C77890;

