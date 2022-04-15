//----- (0000000140521A70) ----------------------------------------------------
__int64 __fastcall sub_140521A70(__int64 a1, _QWORD* a2)
{
	int v2; // edi
	__int64 v4; // rsi
	int v6; // ebx
	unsigned __int64 v7; // r8
	_DWORD* v8; // rcx
	int v9; // eax
	__int64 v10; // rdx
	__int64 v11; // rax
	int* v12; // rax
	int* v13; // rcx
	int* v14; // rdx
	__int64 v15; // rax
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	__int128 v18; // xmm0
	__int128 v19; // xmm1
	__int128 v20; // xmm0
	__int128 v21; // xmm1
	__int128 v22; // xmm0
	__int128 v23; // xmm1
	__int128 v24; // xmm1
	__int64 v25; // rax
	__int128 v26; // xmm0
	__int128 v27; // xmm1
	__int128 v28; // xmm0
	__int128 v29; // xmm1
	__int128 v30; // xmm0
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-348h] BYREF
	__int128 v33; // [rsp+28h] [rbp-340h]
	__int64(__fastcall * *v34)(); // [rsp+40h] [rbp-328h] BYREF
	__int128 v35; // [rsp+48h] [rbp-320h]
	int v36[96]; // [rsp+60h] [rbp-308h] BYREF
	char v37[384]; // [rsp+1E0h] [rbp-188h] BYREF
	__int64 v38; // [rsp+380h] [rbp+18h] BYREF

	v2 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 30088);
	if (v4)
	{
		*(_QWORD*)(a1 + 24) = 0i64;
		v7 = a2[2];
		v8 = dword_140A12138;
		if (a2[3] + 32i64 < v7)
			v8 = (_DWORD*)(a2[3] + 32i64);
		v9 = v8[2];
		if (v9 == 5 || v9 == 7)
			v10 = *(_QWORD*)(*(_QWORD*)v8 + 16i64);
		else
			v10 = *(_QWORD*)(a2[4] + 8i64 * (int)v8[2] + 224);
		if (v10)
		{
			*(_QWORD*)v7 = v10;
			*(_DWORD*)(v7 + 8) = 5;
			a2[2] += 16i64;
		}
		if ((*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 320i64))(v4) > 0)
		{
			do
			{
				v11 = a2[2];
				++v2;
				*(_DWORD*)(v11 + 8) = 3;
				*(double*)v11 = (double)v2;
				a2[2] += 16i64;
				sub_14005E8E0((__int64)a2, a2[2] - 32i64, (int*)(a2[2] - 16i64), a2[2] - 16i64);
				v12 = (int*)sub_1406F4860((__int64)v37, a2);
				v13 = v36;
				v14 = v12;
				if ((((unsigned __int8)v36 | (unsigned __int8)v12) & 0xF) != 0)
				{
					sub_1407DB590(v36, v12, 0x17Cui64);
				}
				else
				{
					v15 = 2i64;
					do
					{
						v16 = *(_OWORD*)v14;
						v17 = *((_OWORD*)v14 + 1);
						v13 += 32;
						v14 += 32;
						*((_OWORD*)v13 - 8) = v16;
						v18 = *((_OWORD*)v14 - 6);
						*((_OWORD*)v13 - 7) = v17;
						v19 = *((_OWORD*)v14 - 5);
						*((_OWORD*)v13 - 6) = v18;
						v20 = *((_OWORD*)v14 - 4);
						*((_OWORD*)v13 - 5) = v19;
						v21 = *((_OWORD*)v14 - 3);
						*((_OWORD*)v13 - 4) = v20;
						v22 = *((_OWORD*)v14 - 2);
						*((_OWORD*)v13 - 3) = v21;
						v23 = *((_OWORD*)v14 - 1);
						*((_OWORD*)v13 - 2) = v22;
						*((_OWORD*)v13 - 1) = v23;
						--v15;
					} while (v15);
					v24 = *((_OWORD*)v14 + 1);
					v25 = *((_QWORD*)v14 + 14);
					*(_OWORD*)v13 = *(_OWORD*)v14;
					v26 = *((_OWORD*)v14 + 2);
					*((_OWORD*)v13 + 1) = v24;
					v27 = *((_OWORD*)v14 + 3);
					*((_OWORD*)v13 + 2) = v26;
					v28 = *((_OWORD*)v14 + 4);
					*((_OWORD*)v13 + 3) = v27;
					v29 = *((_OWORD*)v14 + 5);
					*((_OWORD*)v13 + 4) = v28;
					v30 = *((_OWORD*)v14 + 6);
					*((_OWORD*)v13 + 5) = v29;
					*((_OWORD*)v13 + 6) = v30;
					*((_QWORD*)v13 + 14) = v25;
					v13[30] = v14[30];
				}
				sub_140527760((__int64*)(a1 + 16), v36);
				a2[2] -= 16i64;
			} while (v2 < (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 320i64))(v4));
		}
	}
	else
	{
		*(_QWORD*)&v33 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v33 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v34 = TlsValue;
		v38 = 0x141E66530i64;
		v35 = v33;
		v6 = sub_1401971E0(&dword_140C8AD6C, 13, &v38, &v34);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v33 + 1));
		if (v6)
			DebugBreak();
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AD6C: using guessed type _DWORD dword_140C8AD6C;
// 140521A70: using guessed type char var_188[384];
// 140521A70: using guessed type int var_308[96];

