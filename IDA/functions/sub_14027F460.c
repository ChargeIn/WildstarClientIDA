//----- (000000014027F460) ----------------------------------------------------
void __fastcall sub_14027F460(__int64 a1, int a2, unsigned int* a3, unsigned int a4, __int64 a5)
{
	void(__fastcall * **v5)(_QWORD); // r15
	unsigned int v8; // r14d
	void(__fastcall * **v10)(_QWORD); // rdi
	_DWORD* v11; // r13
	int v12; // ebx
	unsigned int v13; // eax
	__int64 v14; // r14
	unsigned int v15; // eax
	__int64 v16; // rax
	unsigned int v17; // eax
	signed int v18; // eax
	signed int v19; // edx
	__int64 v20; // rcx
	signed int v21; // eax
	signed int v22; // edx
	__int64 v23; // rcx
	signed int v24; // eax
	signed int v25; // edx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int128 v27; // [rsp+28h] [rbp-38h]
	__int64(__fastcall * *v28)(); // [rsp+40h] [rbp-20h] BYREF
	__int128 v29; // [rsp+48h] [rbp-18h]
	unsigned __int64 v31; // [rsp+B0h] [rbp+50h] BYREF

	v5 = 0i64;
	v8 = a2;
	v10 = 0i64;
	if (a3)
	{
		v11 = (_DWORD*)(*(__int64(__fastcall**)(unsigned int*))(*(_QWORD*)a3 + 24i64))(a3);
		if (!v11[7])
		{
			*(_QWORD*)&v27 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v27 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v28 = TlsValue;
			v31 = 0x141DE3160i64;
			v29 = v27;
			v12 = sub_1401971E0(&dword_140C8A364, 14, &v31, &v28);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v27 + 1));
			if (v12)
				DebugBreak();
			return;
		}
		if (!(*(unsigned int(__fastcall**)(unsigned int*))(*(_QWORD*)a3 + 48i64))(a3))
			return;
		v13 = v11[5];
		if (a4 >= v13)
			a4 = v13 - 1;
		v14 = 48i64 * (int)v11[7] + a1 + 724;
		if (*v11)
		{
			if (*v11 != 1)
			{
				if (*v11 == 2)
				{
					v5 = (void(__fastcall***)(_QWORD))sub_1402A7350((__int64)a3, a4);
					v10 = a5
						? *(void(__fastcall****)(_QWORD))(a5 + 112)
						: (void(__fastcall***)(_QWORD))sub_1402A7490((__int64)a3);
					v15 = *(_DWORD*)(a1 + 240);
					if (a3[125] != v15)
					{
						a3[125] = v15;
						_InterlockedIncrement((volatile signed __int32*)(v14 + 40));
						_InterlockedExchangeAdd((volatile signed __int32*)(v14 + 44), a3[124]);
					}
				}
				goto LABEL_25;
			}
			v5 = (void(__fastcall***)(_QWORD))sub_1402A4490((__int64)a3, a4);
			if (a5)
			{
				v10 = *(void(__fastcall****)(_QWORD))(a5 + 112);
				goto LABEL_23;
			}
			v16 = sub_1402A45D0((__int64)a3);
		}
		else
		{
			v5 = (void(__fastcall***)(_QWORD))sub_1402A1370((__int64)a3, a4);
			if (a5)
			{
				v10 = *(void(__fastcall****)(_QWORD))(a5 + 112);
				goto LABEL_23;
			}
			v16 = sub_1402A1560((__int64)a3);
		}
		v10 = (void(__fastcall***)(_QWORD))v16;
	LABEL_23:
		v17 = *(_DWORD*)(a1 + 240);
		if (a3[55] != v17)
		{
			a3[55] = v17;
			_InterlockedIncrement((volatile signed __int32*)(v14 + 40));
			_InterlockedExchangeAdd((volatile signed __int32*)(v14 + 44), a3[54]);
		}
	LABEL_25:
		v18 = *(_DWORD*)(a1 + 7904);
		v8 = a2;
		v19 = *(_DWORD*)(a1 + 7908);
		if (a2 < v18)
			v18 = a2;
		if (v19 < a2 + 1)
			v19 = a2 + 1;
		v31 = __PAIR64__(v19, v18);
		*(_QWORD*)(a1 + 7904) = __PAIR64__(v19, v18);
		if (v5)
			goto LABEL_31;
	}
	v5 = *(void(__fastcall****)(_QWORD))(a1 + 7888);
LABEL_31:
	if (*(void(__fastcall****)(_QWORD))(a1 + 8i64 * v8 + 7760) != v5)
	{
		if (v5)
			(**v5)(v5);
		v20 = *(_QWORD*)(a1 + 8i64 * v8 + 7760);
		if (v20)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
		*(_QWORD*)(a1 + 8i64 * v8 + 7760) = v5;
		v21 = *(_DWORD*)(a1 + 7920);
		v22 = *(_DWORD*)(a1 + 7924);
		if ((int)v8 < v21)
			v21 = v8;
		if (v22 < (int)(v8 + 1))
			v22 = v8 + 1;
		v31 = __PAIR64__(v22, v21);
		*(_QWORD*)(a1 + 7920) = __PAIR64__(v22, v21);
	}
	if (!v10)
		v10 = *(void(__fastcall****)(_QWORD))(a1 + 8088);
	if (*(void(__fastcall****)(_QWORD))(a1 + 8i64 * v8 + 7960) != v10)
	{
		if (v10)
			(**v10)(v10);
		v23 = *(_QWORD*)(a1 + 8i64 * v8 + 7960);
		if (v23)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
		*(_QWORD*)(a1 + 8i64 * v8 + 7960) = v10;
		v24 = *(_DWORD*)(a1 + 8104);
		v25 = *(_DWORD*)(a1 + 8108);
		if ((int)v8 < v24)
			v24 = v8;
		if (v25 < (int)(v8 + 1))
			v25 = v8 + 1;
		*(_QWORD*)(a1 + 8104) = __PAIR64__(v25, v24);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A364: using guessed type _DWORD dword_140C8A364;

