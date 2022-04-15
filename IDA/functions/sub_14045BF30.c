//----- (000000014045BF30) ----------------------------------------------------
__int64 __fastcall sub_14045BF30(__int64 a1, int a2, unsigned int a3)
{
	int v5; // ebx
	int v7; // eax
	int v8; // eax
	int v9; // ebx
	int v10; // eax
	int v11; // r15d
	int v12; // ecx
	unsigned int v13; // eax
	unsigned int v14; // edi
	__int64 v15; // r13
	unsigned int v16; // ebx
	unsigned int v17; // r12d
	unsigned int v18; // ebx
	bool v19; // cf
	__int64 v20; // rcx
	unsigned int v21; // eax
	unsigned int v22; // r12d
	__int64 v23; // rdi
	__int64 v24; // rax
	__int64 v25; // rbx
	unsigned int v26; // edx
	unsigned int v27; // edx
	__int64 v28; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-50h] BYREF
	__int128 v30; // [rsp+28h] [rbp-48h]
	__int64(__fastcall * *v31)(); // [rsp+40h] [rbp-30h] BYREF
	_BYTE v32[24]; // [rsp+48h] [rbp-28h]
	unsigned int v33; // [rsp+A8h] [rbp+38h]
	__int64 v34; // [rsp+B8h] [rbp+48h] BYREF

	if (a2 < 14)
	{
		v7 = *(_DWORD*)(a1 + 440);
		if (v7 != a2 || *(_DWORD*)(a1 + 460) != a3)
		{
			*(_DWORD*)(a1 + 444) = v7;
			v8 = *(_DWORD*)(a1 + 460);
			*(_DWORD*)(a1 + 440) = a2;
			*(_DWORD*)(a1 + 452) = 0;
			*(_DWORD*)(a1 + 460) = a3;
			*(_DWORD*)(a1 + 464) = v8;
			if (a3 != v8)
			{
				sub_140474400((_DWORD*)a1, a3, 0);
				if (a3)
				{
					sub_140474660(a1, a3);
					return 0i64;
				}
				v9 = 0;
				if (*(_QWORD*)(a1 + 3264))
				{
					v10 = sub_140467ED0(a1);
					*(_DWORD*)(a1 + 5164) |= 8u;
					v11 = *(_DWORD*)(a1 + 5164);
					if ((v10 & 0xFFFFFFF6) == 0 && v10 != 1)
					{
						v9 = 1;
						v11 = 63;
					}
					v12 = *(_DWORD*)(a1 + 5160);
					if (v12 != v11)
					{
						if (v11 == 63)
						{
							if (v9
								|| !*(_QWORD*)(a1 + 5864)
								|| *(_DWORD*)(a1 + 440)
								|| *(_DWORD*)(a1 + 444)
								|| (v13 = sub_140470540((_DWORD*)a1, 6708), (v14 = v13) == 0)
								|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
									*(_QWORD*)(a1 + 5864),
									v13))
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
								v33 = sub_1401AE6A0(0, 0xFFFF);
								v15 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
									*(_QWORD*)(a1 + 5864),
									v14,
									v33);
								v16 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
									*(_QWORD*)(a1 + 5864),
									v14,
									v33,
									57i64);
								v17 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
									*(_QWORD*)(a1 + 5864),
									v14,
									v33,
									55i64);
								if (v16 < v17)
									v17 = v16;
								v18 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
									*(_QWORD*)(a1 + 5864),
									v14,
									v33,
									56i64);
								if (v18 == -1)
									v18 = *(_DWORD*)(v15 + 20) >> 1;
								if (v17 == -1)
									v17 = v18;
								v19 = *(_DWORD*)(v15 + 20) < v17;
								LODWORD(v31) = 0;
								*(_QWORD*)v32 = a1;
								if (v19)
									v17 = *(_DWORD*)(v15 + 20);
								*(_QWORD*)&v32[8] = sub_140471DB0;
								*(_QWORD*)&v32[16] = 0i64;
								sub_140195960(a1 + 5168, v17, (__int64)&v31, 4);
								if (*(_DWORD*)(v15 + 20) < v18)
									v18 = *(_DWORD*)(v15 + 20);
								LODWORD(v31) = 0;
								*(_QWORD*)v32 = a1;
								*(_QWORD*)&v32[8] = sub_140471E00;
								*(_QWORD*)&v32[16] = 0i64;
								sub_140195960(a1 + 5240, v18, (__int64)&v31, 4);
								v20 = *(_QWORD*)(a1 + 5864);
								*(_QWORD*)v32 = 1065353216i64;
								v31 = (__int64(__fastcall**)())__PAIR64__(v33, v14);
								*(_DWORD*)&v32[8] = 33;
								*(_QWORD*)&v32[12] = 2i64;
								*(_DWORD*)&v32[20] = 0;
								(*(void(__fastcall**)(__int64, __int64, __int64(__fastcall***)()))(*(_QWORD*)v20 + 584i64))(
									v20,
									6i64,
									&v31);
							}
						}
						else if (v12 == 63)
						{
							if (v9
								|| !*(_QWORD*)(a1 + 5864)
								|| *(_DWORD*)(a1 + 440)
								|| *(_DWORD*)(a1 + 444)
								|| (v21 = sub_1404705D0((_DWORD*)a1, (unsigned int)(*(_DWORD*)(a1 + 684) != 0) + 6709, v10, 0i64),
									(v22 = v21) == 0)
								|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
									*(_QWORD*)(a1 + 5864),
									v21))
							{
								LODWORD(v31) = 0;
								*(_QWORD*)&v32[8] = sub_140471E50;
								*(_QWORD*)v32 = a1;
								*(_QWORD*)&v32[16] = 0i64;
								sub_140195960(a1 + 5168, 150, (__int64)&v31, 4);
								*(_QWORD*)&v32[8] = sub_140471EA0;
								LODWORD(v31) = 0;
								*(_QWORD*)v32 = a1;
								*(_QWORD*)&v32[16] = 0i64;
								sub_140195960(a1 + 5240, 150, (__int64)&v31, 4);
							}
							else
							{
								v23 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
								v24 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
									*(_QWORD*)(a1 + 5864),
									v22,
									v23);
								v25 = v24;
								v26 = *(_DWORD*)(v24 + 24);
								LODWORD(v31) = 0;
								*(_QWORD*)v32 = a1;
								v19 = *(_DWORD*)(v24 + 20) < v26;
								*(_QWORD*)&v32[8] = sub_140471E50;
								*(_QWORD*)&v32[16] = 0i64;
								if (v19)
									v26 = *(_DWORD*)(v24 + 20);
								sub_140195960(a1 + 5168, v26, (__int64)&v31, 4);
								v27 = *(_DWORD*)(v25 + 24);
								if (*(_DWORD*)(v25 + 20) < v27)
									v27 = *(_DWORD*)(v25 + 20);
								LODWORD(v31) = 0;
								*(_QWORD*)v32 = a1;
								*(_QWORD*)&v32[8] = sub_140471EA0;
								*(_QWORD*)&v32[16] = 0i64;
								sub_140195960(a1 + 5240, v27, (__int64)&v31, 4);
								v28 = *(_QWORD*)(a1 + 5864);
								v31 = (__int64(__fastcall**)())__PAIR64__(v23, v22);
								*(_QWORD*)v32 = 1065353216i64;
								*(_DWORD*)&v32[8] = 33;
								*(_QWORD*)&v32[12] = 2i64;
								*(_DWORD*)&v32[20] = 0;
								(*(void(__fastcall**)(__int64, __int64, __int64(__fastcall***)()))(*(_QWORD*)v28 + 584i64))(
									v28,
									6i64,
									&v31);
							}
							*(_DWORD*)(a1 + 5312) = 1;
						}
						if ((v11 & 4) != 0)
							sub_140195D70(a1 + 5016);
						if ((v11 & 0x10) != 0)
							sub_140195D70(a1 + 5088);
						*(_DWORD*)(a1 + 5160) = v11;
					}
				}
			}
		}
		return 0i64;
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v30 = 0i64;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v31 = TlsValue;
		v34 = 0x141E022C8i64;
		*(_OWORD*)v32 = v30;
		v5 = sub_1401971E0(&dword_140C8AC68, 5, &v34, &v31);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
		if (v5)
			DebugBreak();
		return 2147500037i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8AC68: using guessed type _DWORD dword_140C8AC68;

