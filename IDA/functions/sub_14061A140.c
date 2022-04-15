//----- (000000014061A140) ----------------------------------------------------
void __fastcall sub_14061A140(__int64 a1, int a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	_QWORD* v21; // rdi
	_QWORD* v22; // r14
	__int64 v23; // rax
	__int64 v24; // rsi
	__int64 v25; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v26; // [rsp+28h] [rbp-D8h]
	char* v27; // [rsp+30h] [rbp-D0h]
	__m128 v28[4]; // [rsp+40h] [rbp-C0h] BYREF
	char v29[64]; // [rsp+80h] [rbp-80h] BYREF
	__int128 v30[4]; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v31; // [rsp+100h] [rbp+0h]

	v3 = *(_QWORD*)(a1 + 80);
	if (v3)
	{
		(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v3 + 952i64))(v3, &v25);
		if (v25)
		{
			(*(void(__fastcall**)(__int64, _QWORD, char*, _QWORD))(*(_QWORD*)v25 + 888i64))(
				v25,
				*(unsigned int*)(a1 + 944),
				v29,
				0i64);
			v26 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 80i64))(*(_QWORD*)(a1 + 80));
			v27 = v29;
			*(_QWORD*)&v30[0] = v26;
			*((_QWORD*)&v30[0] + 1) = v29;
			sub_1401AFB10((__m128**)v30, v28);
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 336i64))(
				*(_QWORD*)(a1 + 128),
				*(_QWORD*)(a1 + 80));
			v5 = *(_QWORD*)(a1 + 128);
			v31 = 0i64;
			v30[0] = (__int128)v28[0];
			v30[1] = (__int128)v28[1];
			v30[2] = (__int128)v28[2];
			v30[3] = (__int128)v28[3];
			(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v5 + 320i64))(v5, v30);
			if (v25)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
				v25 = 0i64;
			}
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 936i64))(*(_QWORD*)(a1 + 80));
		}
	}
	v6 = *(_QWORD*)(a1 + 48);
	if (v6)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v6 + 648i64))(v6, 0i64, 0i64);
		v7 = *(_QWORD*)(a1 + 48);
		if (a2)
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v7 + 1120i64))(v7, 0i64, 0i64);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 936i64))(*(_QWORD*)(a1 + 48));
			v8 = *(_QWORD*)(a1 + 112);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(a1 + 112) = 0i64;
			}
			v9 = *(_QWORD*)(a1 + 48);
			if (v9)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				*(_QWORD*)(a1 + 48) = 0i64;
			}
		}
		else
		{
			++* (_DWORD*)(a1 + 612);
			(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64), __int64))(*(_QWORD*)v7 + 1120i64))(
				v7,
				sub_140622D70,
				a1);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 1112i64))(*(_QWORD*)(a1 + 48));
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 61i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 62i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 63i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 64i64);
		}
	}
	v10 = *(_QWORD*)(a1 + 56);
	if (v10)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v10 + 648i64))(v10, 0i64, 0i64);
		v11 = *(_QWORD*)(a1 + 56);
		if (a2)
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v11 + 1120i64))(v11, 0i64, 0i64);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 936i64))(*(_QWORD*)(a1 + 56));
			v12 = *(_QWORD*)(a1 + 64);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 936i64))(v12);
			v13 = *(_QWORD*)(a1 + 56);
			if (v13)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
				*(_QWORD*)(a1 + 56) = 0i64;
			}
			v14 = *(_QWORD*)(a1 + 64);
			if (v14)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
				*(_QWORD*)(a1 + 64) = 0i64;
			}
			v15 = *(_QWORD*)(a1 + 120);
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
				*(_QWORD*)(a1 + 120) = 0i64;
			}
		}
		else
		{
			++* (_DWORD*)(a1 + 612);
			(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64), __int64))(*(_QWORD*)v11 + 1120i64))(
				v11,
				sub_140622DB0,
				a1);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 1112i64))(*(_QWORD*)(a1 + 56));
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(*(_QWORD*)(a1 + 56), 61i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(*(_QWORD*)(a1 + 56), 62i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(*(_QWORD*)(a1 + 56), 63i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(*(_QWORD*)(a1 + 56), 64i64);
		}
	}
	v16 = *(_QWORD*)(a1 + 96);
	if (v16)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v16 + 648i64))(v16, 0i64, 0i64);
		v17 = *(_QWORD*)(a1 + 96);
		if (a2)
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v17 + 1120i64))(v17, 0i64, 0i64);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 936i64))(*(_QWORD*)(a1 + 96));
			v18 = *(_QWORD*)(a1 + 96);
			if (v18)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
				*(_QWORD*)(a1 + 96) = 0i64;
			}
		}
		else
		{
			++* (_DWORD*)(a1 + 612);
			(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64), __int64))(*(_QWORD*)v17 + 1120i64))(
				v17,
				sub_140622DF0,
				a1);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 1112i64))(*(_QWORD*)(a1 + 96));
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 728i64))(*(_QWORD*)(a1 + 96), 61i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 728i64))(*(_QWORD*)(a1 + 96), 62i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 728i64))(*(_QWORD*)(a1 + 96), 63i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 728i64))(*(_QWORD*)(a1 + 96), 64i64);
		}
	}
	v19 = *(_QWORD*)(a1 + 104);
	if (v19)
	{
		if (a2)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 936i64))(v19);
			v20 = *(_QWORD*)(a1 + 104);
			if (v20)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
				*(_QWORD*)(a1 + 104) = 0i64;
			}
		}
	}
	v21 = *(_QWORD**)(a1 + 136);
	if (v21)
	{
		do
		{
			v22 = (_QWORD*)v21[3];
			if (a2)
			{
				sub_140625C30(v21);
				sub_14018B900((__int64)v21, 0);
			}
			else
			{
				v23 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v21 + 328i64))(*v21);
				v24 = v23;
				if (v23)
				{
					++* (_DWORD*)(a1 + 612);
					v21[1] = a1;
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v23 + 648i64))(v23, 0i64, 0i64);
					(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64, _QWORD*), _QWORD*))(*(_QWORD*)v24 + 1120i64))(
						v24,
						sub_140622E30,
						v21);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 1112i64))(v24);
				}
			}
			v21 = v22;
		} while (v22);
	}
}

