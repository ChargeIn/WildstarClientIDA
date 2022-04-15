//----- (00000001404C3FD0) ----------------------------------------------------
void __fastcall sub_1404C3FD0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64* v6; // rsi
	int v7; // r9d
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // r8
	__int128* v11; // rbx
	int v12; // xmm12_4
	__int128 v13; // xmm11
	int v14; // xmm13_4
	int v15; // xmm14_4
	int v16; // xmm15_4
	__int64 v17; // rax
	bool v18; // zf
	__int64 v19; // rax
	__m128 v20; // xmm3
	__m128 v21; // xmm2
	__int128 v22; // xmm6
	int v23; // xmm7_4
	int v24; // xmm8_4
	int v25; // xmm9_4
	int v26; // xmm10_4
	int v27; // eax
	__int64 v28; // rax
	__int64 v29; // rcx
	int v30; // ebx
	__int64 v31; // rdx
	void(__fastcall * **v32)(_QWORD); // rax
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // r10
	__int64 v36; // r11
	__int64 v37; // rbx
	int v38; // eax
	void(__fastcall * **v39)(_QWORD); // [rsp+38h] [rbp-D0h] BYREF
	__int128 v40; // [rsp+40h] [rbp-C8h] BYREF
	char v41[24]; // [rsp+50h] [rbp-B8h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+68h] [rbp-A0h] BYREF
	__int128 v43; // [rsp+70h] [rbp-98h]
	__m128 v44; // [rsp+88h] [rbp-80h] BYREF
	char v45[64]; // [rsp+98h] [rbp-70h] BYREF
	__int128 v46[6]; // [rsp+D8h] [rbp-30h] BYREF

	if (((*(_DWORD*)(a1 + 128) - 5) & 0xFFFFFFFA) == 0)
	{
		v6 = (__int64*)(a1 + 288);
		if (*(_QWORD*)(a1 + 288))
		{
			v7 = *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64);
			v8 = *(_QWORD*)(qword_140C659F0 + 824);
			v9 = *(_QWORD*)(v8 + 16);
			v10 = *(_QWORD*)(v8 + 24);
			if (v9 != v10)
			{
				while (*(_DWORD*)(*(_QWORD*)v9 + 188i64) != v7)
				{
					v9 += 8i64;
					if (v9 == v10)
						return;
				}
				if (*(_QWORD*)v9
					&& (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C659F8 + 200) + 112i64))(*(_QWORD*)(qword_140C659F8 + 200)))
				{
					v11 = (__int128*)(a1 + 512);
					v12 = *(_DWORD*)(a1 + 528);
					v13 = *(_OWORD*)(a1 + 512);
					v14 = *(_DWORD*)(a1 + 532);
					v15 = *(_DWORD*)(a1 + 536);
					v16 = *(_DWORD*)(a1 + 540);
					v17 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C659F8 + 200) + 112i64))(*(_QWORD*)(qword_140C659F8 + 200));
					v18 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v17 + 80i64))(v17) == 1;
					v19 = *(_QWORD*)a1;
					if (v18)
					{
						(*(void(__fastcall**)(__int64, __int64))(v19 + 72))(a1, a2);
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 56i64))(a1, a3);
					}
					else
					{
						(*(void(__fastcall**)(__int64, __int64))(v19 + 80))(a1, a2);
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 64i64))(a1, a3);
					}
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
					v20 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 528), (__m128) * (unsigned int*)(a1 + 536));
					v21 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 532), (__m128)0i64);
					*(_QWORD*)&v41[16] = &v44;
					*(_QWORD*)v41 = 0i64;
					*(_QWORD*)&v41[8] = a1 + 512;
					DWORD2(v40) = *(_DWORD*)(a1 + 540);
					v44 = _mm_unpacklo_ps(v20, v21);
					v46[0] = *((unsigned __int64*)&v40 + 1);
					v46[1] = *(_OWORD*)&v41[8];
					sub_1401B0590((int*)v46, (__int64)v45);
					v22 = *v11;
					v23 = *(_DWORD*)(a1 + 528);
					v24 = *(_DWORD*)(a1 + 532);
					v25 = *(_DWORD*)(a1 + 536);
					v26 = *(_DWORD*)(a1 + 540);
					*v11 = v13;
					*(_DWORD*)(a1 + 528) = v12;
					*(_DWORD*)(a1 + 532) = v14;
					*(_DWORD*)(a1 + 536) = v15;
					*(_DWORD*)(a1 + 540) = v16;
					v27 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 280i64))(a1, v45);
					*(_DWORD*)(a1 + 644) = v27;
					if (v27)
					{
						*v11 = v22;
						*(_DWORD*)(a1 + 528) = v23;
						*(_DWORD*)(a1 + 532) = v24;
						v39 = 0i64;
						*(_DWORD*)(a1 + 536) = v25;
						*(_DWORD*)(a1 + 540) = v26;
						if (*(_QWORD*)(a1 + 624))
						{
							sub_140195D70(a1 + 768);
							v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v6 + 336i64))(*v6);
							(*(void(__fastcall**)(__int64, __int64, void(__fastcall****)(_QWORD)))(*(_QWORD*)v28 + 984i64))(
								v28,
								9i64,
								&v39);
							v29 = (__int64)v39;
							if (!v39)
							{
								*(_QWORD*)&v43 = 0i64;
								TlsValue = &off_140B5E648;
								*((_QWORD*)&v43 + 1) = TlsGetValue(dwTlsIndex);
								TlsSetValue(dwTlsIndex, &TlsValue);
								*((_QWORD*)&v40 + 1) = TlsValue;
								v44.m128_u64[0] = 0x141E040E8i64;
								*(_OWORD*)v41 = v43;
								v30 = sub_140196F30(&dword_140C8AD24, 46, &v44, (char*)&v40 + 8);
								TlsValue = &off_140B5E648;
								TlsSetValue(dwTlsIndex, *((LPVOID*)&v43 + 1));
								if (v30)
									DebugBreak();
							LABEL_28:
								if (v39)
									(*v39)[1](v39);
								return;
							}
							v31 = *(_QWORD*)(a1 + 624);
							if (v31)
							{
								(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v31 + 8i64))(*(_QWORD*)(a1 + 624));
								v29 = (__int64)v39;
								*(_QWORD*)(a1 + 624) = 0i64;
							}
						}
						else
						{
							v32 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v6 + 336i64))(*v6);
							v29 = (__int64)v39;
							v33 = (__int64)v32;
							if (v39 != v32)
							{
								if (v32)
								{
									(**v32)(v32);
									v29 = (__int64)v39;
								}
								if (v29)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
								v29 = v33;
								v39 = (void(__fastcall***)(_QWORD))v33;
							}
						}
						(**(void(__fastcall***)(__int64))v29)(v29);
						(*v39)[117](v39);
						sub_1404C2960(a1);
						v44.m128_u64[0] = *(_QWORD*)(a1 + 88);
						v34 = sub_1404C2740(a1);
						if ((*(int(__fastcall**)(__int64, char*, void(__fastcall***)(_QWORD), __m128*, __int64*, __int64))(v35 + 200))(
							v36,
							v45,
							v39,
							&v44,
							v6,
							v34) >= 0)
						{
							((void(__fastcall*)(void(__fastcall***)(_QWORD), void(__fastcall*)(__int64, __int64, __int64, int), __int64))(*v39)[81])(
								v39,
								sub_1404C2880,
								a1);
							v37 = (__int64)v39;
							v38 = sub_1401AE6F0(0, -1);
							DWORD2(v40) = 6691;
							memset(&v41[4], 0, 20);
							*(_DWORD*)v41 = 1065353216;
							HIDWORD(v40) = v38;
							(*(void(__fastcall**)(__int64, _QWORD, char*))(*(_QWORD*)v37 + 584i64))(v37, 0i64, (char*)&v40 + 8);
							sub_1404C7FF0(*(_QWORD*)(a1 + 296), *v6, a1);
						}
						(*v39)[1](v39);
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)*v6 + 296i64))(*v6, 0i64);
						sub_1404C69F0(a1);
						sub_1404C3B50((__int64*)a1);
						sub_1404C6650(a1, *(_DWORD*)(a1 + 764));
						sub_1400EA3E0(
							*(_QWORD*)(qword_140C65898 + 29504),
							"HousingFreePlaceDecorMoving",
							byte_1409EBF24,
							*(unsigned int*)(a1 + 496));
						goto LABEL_28;
					}
				}
			}
		}
	}
}
// 1404C4419: variable 'v35' is possibly undefined
// 1404C4419: variable 'v36' is possibly undefined
// 1409EBF24: using guessed type _BYTE byte_1409EBF24[32];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C8AD24: using guessed type _DWORD dword_140C8AD24;

