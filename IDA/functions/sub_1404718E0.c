//----- (00000001404718E0) ----------------------------------------------------
void __fastcall sub_1404718E0(__int64 a1, int a2, int a3, int a4, int a5)
{
	int v9; // eax
	int v10; // r14d
	int v11; // ecx
	unsigned int v12; // eax
	unsigned int v13; // edi
	unsigned int v14; // r15d
	__int64 v15; // r13
	unsigned int v16; // ebx
	unsigned int v17; // r12d
	unsigned int v18; // ebx
	bool v19; // cf
	__int64 v20; // rcx
	bool v21; // zf
	unsigned int v22; // eax
	unsigned int v23; // r12d
	__int64 v24; // rdi
	__int64 v25; // rax
	__int64 v26; // rbx
	unsigned int v27; // edx
	unsigned int v28; // edx
	__int64 v29; // rcx
	unsigned int v30; // [rsp+20h] [rbp-20h] BYREF
	unsigned int v31; // [rsp+24h] [rbp-1Ch]
	__int64 v32; // [rsp+28h] [rbp-18h]
	__int128 v33; // [rsp+30h] [rbp-10h]

	if (*(_QWORD*)(a1 + 3264))
	{
		v9 = sub_140467ED0(a1);
		v10 = a3 & a2 | *(_DWORD*)(a1 + 5164) & ~a3;
		*(_DWORD*)(a1 + 5164) = v10;
		if ((v9 & 0xFFFFFFF6) == 0 && v9 != 1)
		{
			a4 = 1;
			v10 = 63;
		}
		v11 = *(_DWORD*)(a1 + 5160);
		if (v11 != v10 || a5)
		{
			if (v10 == 63)
			{
				if (a4
					|| !*(_QWORD*)(a1 + 5864)
					|| *(_DWORD*)(a1 + 440)
					|| *(_DWORD*)(a1 + 444)
					|| (v12 = sub_140470540((_DWORD*)a1, 6708), (v13 = v12) == 0)
					|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
						*(_QWORD*)(a1 + 5864),
						v12))
				{
					sub_140195D70(a1 + 5168);
					sub_140195D70(a1 + 5240);
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
						*(_QWORD*)(a1 + 3264),
						3i64,
						3i64);
					v21 = *(_QWORD*)(a1 + 5864) == 0i64;
					*(_DWORD*)(a1 + 5312) = 1;
					if (!v21)
					{
						sub_140471EF0(a1, 1, 1);
						sub_140471EF0(a1, 1, 0);
					}
				}
				else
				{
					v14 = sub_1401AE6A0(0, 0xFFFF);
					v15 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
						*(_QWORD*)(a1 + 5864),
						v13,
						v14);
					v16 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v13,
						v14,
						57i64);
					v17 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v13,
						v14,
						55i64);
					if (v16 < v17)
						v17 = v16;
					v18 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v13,
						v14,
						56i64);
					if (v18 == -1)
						v18 = *(_DWORD*)(v15 + 20) >> 1;
					if (v17 == -1)
						v17 = v18;
					v19 = *(_DWORD*)(v15 + 20) < v17;
					v32 = a1;
					if (v19)
						v17 = *(_DWORD*)(v15 + 20);
					v30 = 0;
					*(_QWORD*)&v33 = sub_140471DB0;
					*((_QWORD*)&v33 + 1) = 0i64;
					sub_140195960(a1 + 5168, v17, (__int64)&v30, 4);
					if (*(_DWORD*)(v15 + 20) < v18)
						v18 = *(_DWORD*)(v15 + 20);
					v30 = 0;
					v32 = a1;
					*(_QWORD*)&v33 = sub_140471E00;
					*((_QWORD*)&v33 + 1) = 0i64;
					sub_140195960(a1 + 5240, v18, (__int64)&v30, 4);
					v20 = *(_QWORD*)(a1 + 5864);
					v32 = 1065353216i64;
					v31 = v14;
					v30 = v13;
					LODWORD(v33) = 33;
					*(_QWORD*)((char*)&v33 + 4) = 2i64;
					HIDWORD(v33) = 0;
					(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v20 + 584i64))(v20, 6i64, &v30);
				}
			}
			else if (v11 == 63)
			{
				if (a4
					|| !*(_QWORD*)(a1 + 5864)
					|| *(_DWORD*)(a1 + 440)
					|| *(_DWORD*)(a1 + 444)
					|| (v22 = sub_1404705D0((_DWORD*)a1, (unsigned int)(*(_DWORD*)(a1 + 684) != 0) + 6709, v9, 0i64),
						(v23 = v22) == 0)
					|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
						*(_QWORD*)(a1 + 5864),
						v22))
				{
					v30 = 0;
					*(_QWORD*)&v33 = sub_140471E50;
					v32 = a1;
					*((_QWORD*)&v33 + 1) = 0i64;
					sub_140195960(a1 + 5168, 150, (__int64)&v30, 4);
					*(_QWORD*)&v33 = sub_140471EA0;
					v30 = 0;
					v32 = a1;
					*((_QWORD*)&v33 + 1) = 0i64;
					sub_140195960(a1 + 5240, 150, (__int64)&v30, 4);
				}
				else
				{
					v24 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
					v25 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
						*(_QWORD*)(a1 + 5864),
						v23,
						v24);
					v26 = v25;
					v27 = *(_DWORD*)(v25 + 24);
					v30 = 0;
					v32 = a1;
					v19 = *(_DWORD*)(v25 + 20) < v27;
					*(_QWORD*)&v33 = sub_140471E50;
					*((_QWORD*)&v33 + 1) = 0i64;
					if (v19)
						v27 = *(_DWORD*)(v25 + 20);
					sub_140195960(a1 + 5168, v27, (__int64)&v30, 4);
					v28 = *(_DWORD*)(v26 + 24);
					if (*(_DWORD*)(v26 + 20) < v28)
						v28 = *(_DWORD*)(v26 + 20);
					v30 = 0;
					v32 = a1;
					*(_QWORD*)&v33 = sub_140471EA0;
					*((_QWORD*)&v33 + 1) = 0i64;
					sub_140195960(a1 + 5240, v28, (__int64)&v30, 4);
					v29 = *(_QWORD*)(a1 + 5864);
					v30 = v23;
					v32 = 1065353216i64;
					v31 = v24;
					LODWORD(v33) = 33;
					*(_QWORD*)((char*)&v33 + 4) = 2i64;
					HIDWORD(v33) = 0;
					(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v29 + 584i64))(v29, 6i64, &v30);
				}
				*(_DWORD*)(a1 + 5312) = 1;
			}
			if ((v10 & 4) != 0)
				sub_140195D70(a1 + 5016);
			if ((v10 & 0x10) != 0)
				sub_140195D70(a1 + 5088);
			*(_DWORD*)(a1 + 5160) = v10;
		}
	}
}

