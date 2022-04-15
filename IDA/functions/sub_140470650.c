//----- (0000000140470650) ----------------------------------------------------
void __fastcall sub_140470650(__int64 a1, int a2, int a3)
{
	int v5; // eax
	int v6; // r15d
	int v7; // ecx
	unsigned int v8; // eax
	unsigned int v9; // edi
	__int64 v10; // r13
	unsigned int v11; // ebx
	unsigned int v12; // r12d
	unsigned int v13; // ebx
	bool v14; // cf
	__int64 v15; // rcx
	bool v16; // zf
	unsigned int v17; // eax
	unsigned int v18; // r12d
	__int64 v19; // rdi
	__int64 v20; // rax
	__int64 v21; // rbx
	unsigned int v22; // edx
	unsigned int v23; // edx
	__int64 v24; // rcx
	unsigned int v25; // [rsp+20h] [rbp-20h] BYREF
	unsigned int v26; // [rsp+24h] [rbp-1Ch]
	__int64 v27; // [rsp+28h] [rbp-18h]
	__int128 v28; // [rsp+30h] [rbp-10h]
	unsigned int v29; // [rsp+78h] [rbp+38h]

	if (a2)
	{
		if (!*(_QWORD*)(a1 + 3264))
			return;
		v5 = sub_140467ED0(a1);
		*(_DWORD*)(a1 + 5164) |= 0x3Fu;
	}
	else
	{
		if (!*(_QWORD*)(a1 + 3264))
			return;
		v5 = sub_140467ED0(a1);
		*(_DWORD*)(a1 + 5164) &= ~1u;
	}
	v6 = *(_DWORD*)(a1 + 5164);
	if ((v5 & 0xFFFFFFF6) == 0 && v5 != 1)
	{
		a3 = 1;
		v6 = 63;
	}
	v7 = *(_DWORD*)(a1 + 5160);
	if (v7 != v6)
	{
		if (v6 == 63)
		{
			if (a3
				|| !*(_QWORD*)(a1 + 5864)
				|| *(_DWORD*)(a1 + 440)
				|| *(_DWORD*)(a1 + 444)
				|| (v8 = sub_140470540((_DWORD*)a1, 6708), (v9 = v8) == 0)
				|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
					*(_QWORD*)(a1 + 5864),
					v8))
			{
				sub_140195D70(a1 + 5168);
				sub_140195D70(a1 + 5240);
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
					*(_QWORD*)(a1 + 3264),
					3i64,
					3i64);
				v16 = *(_QWORD*)(a1 + 5864) == 0i64;
				*(_DWORD*)(a1 + 5312) = 1;
				if (!v16)
				{
					sub_140471EF0(a1, 1, 1);
					sub_140471EF0(a1, 1, 0);
				}
			}
			else
			{
				v29 = sub_1401AE6A0(0, 0xFFFF);
				v10 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
					*(_QWORD*)(a1 + 5864),
					v9,
					v29);
				v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
					*(_QWORD*)(a1 + 5864),
					v9,
					v29,
					57i64);
				v12 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
					*(_QWORD*)(a1 + 5864),
					v9,
					v29,
					55i64);
				if (v11 < v12)
					v12 = v11;
				v13 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
					*(_QWORD*)(a1 + 5864),
					v9,
					v29,
					56i64);
				if (v13 == -1)
					v13 = *(_DWORD*)(v10 + 20) >> 1;
				if (v12 == -1)
					v12 = v13;
				v14 = *(_DWORD*)(v10 + 20) < v12;
				v27 = a1;
				if (v14)
					v12 = *(_DWORD*)(v10 + 20);
				v25 = 0;
				*(_QWORD*)&v28 = sub_140471DB0;
				*((_QWORD*)&v28 + 1) = 0i64;
				sub_140195960(a1 + 5168, v12, (__int64)&v25, 4);
				if (*(_DWORD*)(v10 + 20) < v13)
					v13 = *(_DWORD*)(v10 + 20);
				v25 = 0;
				v27 = a1;
				*(_QWORD*)&v28 = sub_140471E00;
				*((_QWORD*)&v28 + 1) = 0i64;
				sub_140195960(a1 + 5240, v13, (__int64)&v25, 4);
				v15 = *(_QWORD*)(a1 + 5864);
				v27 = 1065353216i64;
				v26 = v29;
				v25 = v9;
				LODWORD(v28) = 33;
				*(_QWORD*)((char*)&v28 + 4) = 2i64;
				HIDWORD(v28) = 0;
				(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v15 + 584i64))(v15, 6i64, &v25);
			}
		}
		else if (v7 == 63)
		{
			if (a3
				|| !*(_QWORD*)(a1 + 5864)
				|| *(_DWORD*)(a1 + 440)
				|| *(_DWORD*)(a1 + 444)
				|| (v17 = sub_1404705D0((_DWORD*)a1, (unsigned int)(*(_DWORD*)(a1 + 684) != 0) + 6709, v5, 0i64),
					(v18 = v17) == 0)
				|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
					*(_QWORD*)(a1 + 5864),
					v17))
			{
				v25 = 0;
				*(_QWORD*)&v28 = sub_140471E50;
				v27 = a1;
				*((_QWORD*)&v28 + 1) = 0i64;
				sub_140195960(a1 + 5168, 150, (__int64)&v25, 4);
				*(_QWORD*)&v28 = sub_140471EA0;
				v25 = 0;
				v27 = a1;
				*((_QWORD*)&v28 + 1) = 0i64;
				sub_140195960(a1 + 5240, 150, (__int64)&v25, 4);
			}
			else
			{
				v19 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
				v20 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
					*(_QWORD*)(a1 + 5864),
					v18,
					v19);
				v21 = v20;
				v22 = *(_DWORD*)(v20 + 24);
				v25 = 0;
				v27 = a1;
				v14 = *(_DWORD*)(v20 + 20) < v22;
				*(_QWORD*)&v28 = sub_140471E50;
				*((_QWORD*)&v28 + 1) = 0i64;
				if (v14)
					v22 = *(_DWORD*)(v20 + 20);
				sub_140195960(a1 + 5168, v22, (__int64)&v25, 4);
				v23 = *(_DWORD*)(v21 + 24);
				if (*(_DWORD*)(v21 + 20) < v23)
					v23 = *(_DWORD*)(v21 + 20);
				v25 = 0;
				v27 = a1;
				*(_QWORD*)&v28 = sub_140471EA0;
				*((_QWORD*)&v28 + 1) = 0i64;
				sub_140195960(a1 + 5240, v23, (__int64)&v25, 4);
				v24 = *(_QWORD*)(a1 + 5864);
				v25 = v18;
				v27 = 1065353216i64;
				v26 = v19;
				LODWORD(v28) = 33;
				*(_QWORD*)((char*)&v28 + 4) = 2i64;
				HIDWORD(v28) = 0;
				(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v24 + 584i64))(v24, 6i64, &v25);
			}
			*(_DWORD*)(a1 + 5312) = 1;
		}
		if ((v6 & 4) != 0)
			sub_140195D70(a1 + 5016);
		if ((v6 & 0x10) != 0)
			sub_140195D70(a1 + 5088);
		*(_DWORD*)(a1 + 5160) = v6;
	}
}

