//----- (00000001404D7330) ----------------------------------------------------
__int64 __fastcall sub_1404D7330(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v4; // rdi
	unsigned __int64 v8; // rsi
	_QWORD* v9; // rbx
	_QWORD* v11; // rbx
	__int64 v12; // rdi
	_QWORD* v13; // rax
	_QWORD* v14; // rbx
	__int64 v15; // rax
	int* v16; // rdx
	int* v17; // r9
	__int64 v18; // rcx
	__int128 v19; // xmm0
	__int64 v20; // r8
	__int64 v21; // rcx
	unsigned int v22; // eax
	int v23; // eax
	__int64 v24; // rcx
	int v25; // eax
	__int64 v26; // rcx
	int v27; // eax
	__int64 v28; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v29; // [rsp+28h] [rbp-D8h] BYREF
	int v30[43]; // [rsp+30h] [rbp-D0h] BYREF
	int v31; // [rsp+DCh] [rbp-24h]
	int v32; // [rsp+E0h] [rbp-20h]
	unsigned int v33; // [rsp+E8h] [rbp-18h]
	int v34; // [rsp+ECh] [rbp-14h]
	int v35; // [rsp+F0h] [rbp-10h]
	int v36; // [rsp+F4h] [rbp-Ch]
	int v37; // [rsp+F8h] [rbp-8h]
	int v38; // [rsp+FCh] [rbp-4h]
	unsigned int v39; // [rsp+104h] [rbp+4h]
	int v40; // [rsp+108h] [rbp+8h]
	int v41; // [rsp+10Ch] [rbp+Ch]
	int v42; // [rsp+110h] [rbp+10h]
	int v43; // [rsp+114h] [rbp+14h]
	int v44; // [rsp+118h] [rbp+18h]

	v4 = *(_QWORD*)(a1 + 31008);
	v28 = a2;
	v8 = (*(__int64(__fastcall**)(__int64*))(v4 + 24))(&v28);
	v9 = *(_QWORD**)(*(_QWORD*)(v4 + 16) + 8 * (v8 % *(_QWORD*)(v4 + 8)));
	if (!v9)
		goto LABEL_5;
	while (v8 != *v9 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v4 + 32))(&v28, v9 + 2))
	{
		v9 = (_QWORD*)v9[1];
		if (!v9)
			goto LABEL_5;
	}
	v11 = v9 + 3;
	if (v11)
	{
		v12 = *v11;
		v13 = *(_QWORD**)(*v11 + 8i64);
		v14 = (_QWORD*)*v13;
		if ((_QWORD*)*v13 != v13)
		{
			do
			{
				v15 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 30088) + 336i64))(
					*(_QWORD*)(a1 + 30088),
					*((unsigned int*)v14 + 4),
					a4);
				if (v15)
				{
					v16 = v30;
					v17 = v30;
					if ((((unsigned __int8)v30 | (unsigned __int8)v15) & 0xF) != 0)
					{
						sub_1407DB590(v30, (int*)v15, 0x17Cui64);
					}
					else
					{
						v18 = 2i64;
						do
						{
							v19 = *(_OWORD*)v15;
							v16 += 32;
							v15 += 128i64;
							*((_OWORD*)v16 - 8) = v19;
							*((_OWORD*)v16 - 7) = *(_OWORD*)(v15 - 112);
							*((_OWORD*)v16 - 6) = *(_OWORD*)(v15 - 96);
							*((_OWORD*)v16 - 5) = *(_OWORD*)(v15 - 80);
							*((_OWORD*)v16 - 4) = *(_OWORD*)(v15 - 64);
							*((_OWORD*)v16 - 3) = *(_OWORD*)(v15 - 48);
							*((_OWORD*)v16 - 2) = *(_OWORD*)(v15 - 32);
							*((_OWORD*)v16 - 1) = *(_OWORD*)(v15 - 16);
							--v18;
						} while (v18);
						*(_OWORD*)v16 = *(_OWORD*)v15;
						*((_OWORD*)v16 + 1) = *(_OWORD*)(v15 + 16);
						*((_OWORD*)v16 + 2) = *(_OWORD*)(v15 + 32);
						*((_OWORD*)v16 + 3) = *(_OWORD*)(v15 + 48);
						*((_OWORD*)v16 + 4) = *(_OWORD*)(v15 + 64);
						*((_OWORD*)v16 + 5) = *(_OWORD*)(v15 + 80);
						*((_OWORD*)v16 + 6) = *(_OWORD*)(v15 + 96);
						*((_QWORD*)v16 + 14) = *(_QWORD*)(v15 + 112);
						v16[30] = *(_DWORD*)(v15 + 120);
					}
					v20 = *((unsigned int*)v14 + 5);
					v21 = *(_QWORD*)(a1 + 30088);
					v33 = *((_DWORD*)v14 + 6);
					v22 = *((_DWORD*)v14 + 7);
					v30[39] = v20;
					v39 = v22;
					v30[41] = *((_DWORD*)v14 + 8);
					v35 = *((_DWORD*)v14 + 9);
					v41 = *((_DWORD*)v14 + 10);
					v30[40] = *((_DWORD*)v14 + 11);
					v34 = *((_DWORD*)v14 + 12);
					v40 = *((_DWORD*)v14 + 13);
					v23 = (*(__int64(__fastcall**)(__int64, int*, __int64, int*))(*(_QWORD*)v21 + 152i64))(
						v21,
						v30,
						v20,
						v17);
					v24 = *(_QWORD*)(a1 + 30088);
					v30[42] = v23;
					v25 = (*(__int64(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v24 + 152i64))(v24, v30, v33);
					v26 = *(_QWORD*)(a1 + 30088);
					v36 = v25;
					v27 = (*(__int64(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v26 + 152i64))(v26, v30, v39);
					v31 &= ~0x1000u;
					v37 &= ~0x1000u;
					v43 |= 0x1000u;
					v32 &= ~0x1000u;
					v38 |= 0x1000u;
					v44 |= 0x1000u;
					v42 = v27;
					if (v30[33] != 1)
						(*(void(__fastcall**)(_QWORD, __int64, int*))(**(_QWORD**)(qword_140C65898 + 30088) + 80i64))(
							*(_QWORD*)(qword_140C65898 + 30088),
							1i64,
							v30);
				}
				v14 = (_QWORD*)*v14;
			} while (v14 != *(_QWORD**)(v12 + 8));
		}
	}
	else
	{
	LABEL_5:
		if (a3)
		{
			v29 = v28;
			sub_1403F4900(qword_140C65898, 0x570u, (__int64)&v29);
			return 0i64;
		}
	}
	return 1i64;
}
// 1404D7530: variable 'v17' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

