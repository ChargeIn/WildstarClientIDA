#include "../winhttp.h"

//----- (000000014027F780) ----------------------------------------------------
void __fastcall sub_14027F780(__int64 a1, unsigned int a2, unsigned int* a3, unsigned int a4)
{
	void(__fastcall * **v4)(_QWORD); // r14
	__int64 v6; // r13
	void(__fastcall * **v8)(_QWORD); // r15
	_DWORD* v9; // r12
	int v10; // ebx
	unsigned int v11; // eax
	unsigned int v12; // edx
	__int64 v13; // rsi
	unsigned int v14; // eax
	__int64 v15; // rax
	unsigned int v16; // eax
	int v17; // eax
	int v18; // edx
	__int64 v19; // rcx
	int v20; // eax
	int v21; // edx
	__int64 v22; // rcx
	int v23; // eax
	int v24; // edx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int128 v26; // [rsp+28h] [rbp-38h]
	__int64(__fastcall * *v27)(); // [rsp+40h] [rbp-20h] BYREF
	__int128 v28; // [rsp+48h] [rbp-18h]
	unsigned __int64 v29; // [rsp+B0h] [rbp+50h] BYREF
	unsigned int v30; // [rsp+B8h] [rbp+58h]

	v30 = a4;
	v4 = 0i64;
	v6 = a2;
	v8 = 0i64;
	if (a3)
	{
		v9 = (_DWORD*)(*(__int64(__fastcall**)(unsigned int*))(*(_QWORD*)a3 + 24i64))(a3);
		if (!v9[7])
		{
			*(_QWORD*)&v26 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v27 = TlsValue;
			v29 = 0x141DE30D0i64;
			v28 = v26;
			v10 = sub_1401971E0(&dword_140C8A358, 14, &v29, &v27);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v26 + 1));
			if (v10)
				DebugBreak();
			return;
		}
		if (!(*(unsigned int(__fastcall**)(unsigned int*))(*(_QWORD*)a3 + 48i64))(a3))
			return;
		v11 = v9[5];
		v12 = v30;
		if (v30 >= v11)
			v12 = v11 - 1;
		v13 = 48i64 * (int)v9[7] + a1 + 724;
		if (*v9)
		{
			if (*v9 != 1)
			{
				if (*v9 == 2)
				{
					v4 = (void(__fastcall***)(_QWORD))sub_1402A7350((__int64)a3, v12);
					v8 = (void(__fastcall***)(_QWORD))sub_1402A7490((__int64)a3);
					v14 = *(_DWORD*)(a1 + 240);
					if (a3[125] != v14)
					{
						a3[125] = v14;
						_InterlockedIncrement((volatile signed __int32*)(v13 + 40));
						_InterlockedExchangeAdd((volatile signed __int32*)(v13 + 44), a3[124]);
					}
				}
				goto LABEL_17;
			}
			v4 = (void(__fastcall***)(_QWORD))sub_1402A4490((__int64)a3, v12);
			v15 = sub_1402A45D0((__int64)a3);
		}
		else
		{
			v4 = (void(__fastcall***)(_QWORD))sub_1402A1370((__int64)a3, v12);
			v15 = sub_1402A1560((__int64)a3);
		}
		v8 = (void(__fastcall***)(_QWORD))v15;
		v16 = *(_DWORD*)(a1 + 240);
		if (a3[55] != v16)
		{
			a3[55] = v16;
			_InterlockedIncrement((volatile signed __int32*)(v13 + 40));
			_InterlockedExchangeAdd((volatile signed __int32*)(v13 + 44), a3[54]);
		}
	LABEL_17:
		v17 = *(_DWORD*)(a1 + 7896);
		v18 = *(_DWORD*)(a1 + 7900);
		if ((int)v6 < v17)
			v17 = v6;
		if (v18 < (int)v6 + 1)
			v18 = v6 + 1;
		v29 = __PAIR64__(v18, v17);
		*(_QWORD*)(a1 + 7896) = __PAIR64__(v18, v17);
		if (v4)
			goto LABEL_23;
	}
	v4 = *(void(__fastcall****)(_QWORD))(a1 + 7888);
LABEL_23:
	if (*(void(__fastcall****)(_QWORD))(a1 + 8 * v6 + 7728) != v4)
	{
		if (v4)
			(**v4)(v4);
		v19 = *(_QWORD*)(a1 + 8 * v6 + 7728);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
		*(_QWORD*)(a1 + 8 * v6 + 7728) = v4;
		v20 = *(_DWORD*)(a1 + 7912);
		v21 = *(_DWORD*)(a1 + 7916);
		if ((int)v6 < v20)
			v20 = v6;
		if (v21 < (int)v6 + 1)
			v21 = v6 + 1;
		v29 = __PAIR64__(v21, v20);
		*(_QWORD*)(a1 + 7912) = __PAIR64__(v21, v20);
	}
	if (!v8)
		v8 = *(void(__fastcall****)(_QWORD))(a1 + 8088);
	if (*(void(__fastcall****)(_QWORD))(a1 + 8 * v6 + 7928) != v8)
	{
		if (v8)
			(**v8)(v8);
		v22 = *(_QWORD*)(a1 + 8 * v6 + 7928);
		if (v22)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
		*(_QWORD*)(a1 + 8 * v6 + 7928) = v8;
		v23 = *(_DWORD*)(a1 + 8096);
		v24 = *(_DWORD*)(a1 + 8100);
		if ((int)v6 < v23)
			v23 = v6;
		if (v24 < (int)v6 + 1)
			v24 = v6 + 1;
		*(_QWORD*)(a1 + 8096) = __PAIR64__(v24, v23);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A358: using guessed type _DWORD dword_140C8A358;

