//----- (0000000140470D80) ----------------------------------------------------
void __fastcall sub_140470D80(__int64 a1)
{
	int v2; // ebx
	int v3; // eax
	int v4; // r14d
	int v5; // ecx
	unsigned int v6; // eax
	unsigned int v7; // edi
	__int64 v8; // r12
	__int64 v9; // r13
	unsigned int v10; // ebx
	unsigned int v11; // r15d
	unsigned int v12; // ebx
	bool v13; // cf
	__int64 v14; // rcx
	unsigned int v15; // eax
	unsigned int v16; // r15d
	__int64 v17; // rdi
	__int64 v18; // rax
	__int64 v19; // rbx
	unsigned int v20; // edx
	unsigned int v21; // edx
	__int64 v22; // rcx
	unsigned int v23; // [rsp+20h] [rbp-28h] BYREF
	int v24; // [rsp+24h] [rbp-24h]
	__int64 v25; // [rsp+28h] [rbp-20h]
	__int128 v26; // [rsp+30h] [rbp-18h]

	v2 = 0;
	if (*(_QWORD*)(a1 + 3264))
	{
		v3 = sub_140467ED0(a1);
		*(_DWORD*)(a1 + 5164) |= 4u;
		v4 = *(_DWORD*)(a1 + 5164);
		if ((v3 & 0xFFFFFFF6) == 0 && v3 != 1)
		{
			v2 = 1;
			v4 = 63;
		}
		v5 = *(_DWORD*)(a1 + 5160);
		if (v5 != v4)
		{
			if (v4 == 63)
			{
				if (v2
					|| !*(_QWORD*)(a1 + 5864)
					|| *(_DWORD*)(a1 + 440)
					|| *(_DWORD*)(a1 + 444)
					|| (v6 = sub_140470540((_DWORD*)a1, 6708), (v7 = v6) == 0)
					|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
						*(_QWORD*)(a1 + 5864),
						v6))
				{
					sub_140195D70(a1 + 5168);
					sub_140195D70(a1 + 5240);
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
						*(_QWORD*)(a1 + 3264),
						3i64,
						3i64);
					*(_DWORD*)(a1 + 5312) = 1;
					if (*(_QWORD*)(a1 + 5864))
					{
						sub_140471EF0(a1, 1, 1);
						sub_140471EF0(a1, 1, 0);
					}
				}
				else
				{
					v8 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
					v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
						*(_QWORD*)(a1 + 5864),
						v7,
						v8);
					v10 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v7,
						(unsigned int)v8,
						57i64);
					v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v7,
						(unsigned int)v8,
						55i64);
					if (v10 < v11)
						v11 = v10;
					v12 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v7,
						(unsigned int)v8,
						56i64);
					if (v12 == -1)
						v12 = *(_DWORD*)(v9 + 20) >> 1;
					if (v11 == -1)
						v11 = v12;
					v13 = *(_DWORD*)(v9 + 20) < v11;
					v23 = 0;
					*((_QWORD*)&v26 + 1) = 0i64;
					if (v13)
						v11 = *(_DWORD*)(v9 + 20);
					v25 = a1;
					*(_QWORD*)&v26 = sub_140471DB0;
					sub_140195960(a1 + 5168, v11, (__int64)&v23, 4);
					if (*(_DWORD*)(v9 + 20) < v12)
						v12 = *(_DWORD*)(v9 + 20);
					v23 = 0;
					v25 = a1;
					*(_QWORD*)&v26 = sub_140471E00;
					*((_QWORD*)&v26 + 1) = 0i64;
					sub_140195960(a1 + 5240, v12, (__int64)&v23, 4);
					v14 = *(_QWORD*)(a1 + 5864);
					v25 = 1065353216i64;
					v23 = v7;
					v24 = v8;
					LODWORD(v26) = 33;
					*(_QWORD*)((char*)&v26 + 4) = 2i64;
					HIDWORD(v26) = 0;
					(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v14 + 584i64))(v14, 6i64, &v23);
				}
			}
			else if (v5 == 63)
			{
				if (v2
					|| !*(_QWORD*)(a1 + 5864)
					|| *(_DWORD*)(a1 + 440)
					|| *(_DWORD*)(a1 + 444)
					|| (v15 = sub_1404705D0((_DWORD*)a1, (unsigned int)(*(_DWORD*)(a1 + 684) != 0) + 6709, v3, 0i64),
						(v16 = v15) == 0)
					|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
						*(_QWORD*)(a1 + 5864),
						v15))
				{
					v23 = 0;
					*(_QWORD*)&v26 = sub_140471E50;
					v25 = a1;
					*((_QWORD*)&v26 + 1) = 0i64;
					sub_140195960(a1 + 5168, 150, (__int64)&v23, 4);
					*(_QWORD*)&v26 = sub_140471EA0;
					v23 = 0;
					v25 = a1;
					*((_QWORD*)&v26 + 1) = 0i64;
					sub_140195960(a1 + 5240, 150, (__int64)&v23, 4);
				}
				else
				{
					v17 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
					v18 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
						*(_QWORD*)(a1 + 5864),
						v16,
						v17);
					v19 = v18;
					v20 = *(_DWORD*)(v18 + 24);
					v23 = 0;
					v25 = a1;
					v13 = *(_DWORD*)(v18 + 20) < v20;
					*(_QWORD*)&v26 = sub_140471E50;
					*((_QWORD*)&v26 + 1) = 0i64;
					if (v13)
						v20 = *(_DWORD*)(v18 + 20);
					sub_140195960(a1 + 5168, v20, (__int64)&v23, 4);
					v21 = *(_DWORD*)(v19 + 24);
					if (*(_DWORD*)(v19 + 20) < v21)
						v21 = *(_DWORD*)(v19 + 20);
					v23 = 0;
					v25 = a1;
					*(_QWORD*)&v26 = sub_140471EA0;
					*((_QWORD*)&v26 + 1) = 0i64;
					sub_140195960(a1 + 5240, v21, (__int64)&v23, 4);
					v22 = *(_QWORD*)(a1 + 5864);
					v23 = v16;
					v25 = 1065353216i64;
					v24 = v17;
					LODWORD(v26) = 33;
					*(_QWORD*)((char*)&v26 + 4) = 2i64;
					HIDWORD(v26) = 0;
					(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v22 + 584i64))(v22, 6i64, &v23);
				}
				*(_DWORD*)(a1 + 5312) = 1;
			}
			if ((v4 & 4) != 0)
				sub_140195D70(a1 + 5016);
			if ((v4 & 0x10) != 0)
				sub_140195D70(a1 + 5088);
			*(_DWORD*)(a1 + 5160) = v4;
		}
	}
}

