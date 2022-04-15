#include "../winhttp.h"

//----- (0000000140263970) ----------------------------------------------------
__int64 __fastcall sub_140263970(int* a1, __int64 a2)
{
	int v2; // esi
	int v4; // ebx
	unsigned int v5; // r8d
	char* v6; // rcx
	unsigned int v7; // r9d
	unsigned int v8; // r11d
	unsigned int v9; // eax
	unsigned int v10; // ecx
	unsigned int i; // eax
	unsigned int v12; // edx
	unsigned int v13; // eax
	__int64 v14; // rax
	_DWORD* v15; // rcx
	int v16; // eax
	void* v17; // rdx
	int v18; // ebx
	void* v19; // rax
	void* v20; // rbx
	int v22; // ebx
	__int64(__fastcall * *v23)(); // [rsp+90h] [rbp-19h] BYREF
	__int128 v24; // [rsp+98h] [rbp-11h]
	__int64(__fastcall * *TlsValue)(); // [rsp+A8h] [rbp-1h] BYREF
	__int128 v26; // [rsp+B0h] [rbp+7h]
	__int64(__fastcall * *v27)(); // [rsp+C0h] [rbp+17h] BYREF
	__int128 v28; // [rsp+C8h] [rbp+1Fh]
	int v29; // [rsp+DCh] [rbp+33h]
	int v30; // [rsp+E0h] [rbp+37h]
	int v31; // [rsp+E4h] [rbp+3Bh]
	int v32; // [rsp+E8h] [rbp+3Fh]
	__int64 v33; // [rsp+110h] [rbp+67h] BYREF

	v2 = a1[7];
	switch (v2)
	{
	case 0:
		a1[9] &= 0xFFFFFF40;
		a1[8] = 0;
		goto LABEL_3;
	case 1:
	case 2:
	case 4:
		if (!dword_140AE64C0[a1[6]])
			goto LABEL_3;
		*(_QWORD*)&v24 = 0i64;
		v23 = &off_140B5E648;
		*((_QWORD*)&v24 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v23);
		v27 = v23;
		v33 = 0x141DDFEA0i64;
		v28 = v24;
		v16 = sub_1401971E0(&dword_140C8A2CC, 14, &v33, &v27);
		v17 = (void*)*((_QWORD*)&v24 + 1);
		v23 = &off_140B5E648;
		goto LABEL_40;
	case 3:
	case 5:
		if (dword_140AE6450[a1[6]])
			goto LABEL_3;
		*(_QWORD*)&v26 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = 0x141DDFE00i64;
		v15 = &unk_140C8A2B8;
		goto LABEL_39;
	default:
	LABEL_3:
		v4 = *a1;
		if (!*a1)
		{
			a1[9] &= 0xFFFFFFCF;
			a1[3] = 1;
		}
		v5 = a1[1];
		v6 = (char*)&unk_140AE5200 + 44 * a1[6];
		HIDWORD(v27) = *((_DWORD*)v6 + 1);
		v28 = *(_OWORD*)(v6 + 8);
		v29 = *((_DWORD*)v6 + 7);
		v30 = *((_DWORD*)v6 + 8);
		v31 = *((_DWORD*)v6 + 9);
		v32 = *((_DWORD*)v6 + 10);
		if (v5 < *(_DWORD*)v6 || (v7 = a1[2], v7 < DWORD1(v28)) || (v8 = a1[3], v8 < *((_DWORD*)v6 + 6)))
		{
			*(_QWORD*)&v26 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = 0x141DDFD80i64;
			v15 = &unk_140C8A2BC;
			goto LABEL_39;
		}
		v9 = *(_DWORD*)(a2 + 56);
		if (v5 > v9 || v7 > v9)
		{
			*(_QWORD*)&v26 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = 0x141DDFD10i64;
			v15 = &unk_140C8A2C0;
			goto LABEL_39;
		}
		v10 = 1;
		if ((a1[9] & 0x180) == 0)
		{
			for (i = 2; i <= v5; ++v10)
				i = __ROL4__(i, 1);
			v12 = __ROL4__(1, v10);
			if (1 << v10 <= v7)
			{
				do
				{
					v12 = __ROL4__(v12, 1);
					++v10;
				} while (v12 <= v7);
			}
			v13 = __ROL4__(1, v10);
			if (1 << v10 <= v8)
			{
				do
				{
					v13 = __ROL4__(v13, 1);
					++v10;
				} while (v13 <= v8);
			}
		}
		if (!a1[5])
			a1[5] = v10;
		if (a1[5] <= v10)
		{
			if (v2)
			{
				v18 = v4 - 1;
				if (v18)
				{
					if (v18 == 1 && ((v5 - 1) & v5) != 0)
					{
						*(_QWORD*)&v26 = 0i64;
						TlsValue = &off_140B5E648;
						*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, &TlsValue);
						v14 = 0x141DDFFF0i64;
						v15 = &unk_140C8A2B4;
						goto LABEL_39;
					}
				}
				else if (((v5 - 1) & v5) != 0 || ((v7 - 1) & v7) != 0 || ((v8 - 1) & v8) != 0)
				{
					v19 = (void*)*((_QWORD*)a1 + 6);
					v20 = &unk_1409E3BB4;
					*(_QWORD*)&v24 = 0i64;
					if (v19)
						v20 = v19;
					v23 = &off_140B5E648;
					*((_QWORD*)&v24 + 1) = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v23);
					v33 = 0x141DE0050i64;
					v27 = v23;
					v28 = v24;
					v16 = sub_1401971E0(
						&dword_140C8A2B0,
						14,
						&v33,
						v20,
						a1[1],
						a1[2],
						a1[3],
						*a1,
						a1[4],
						a1[5],
						a1[6],
						a1[7],
						a1[8],
						a1[9],
						a1[10],
						a1[14],
						&v27);
					v17 = (void*)*((_QWORD*)&v24 + 1);
					v23 = &off_140B5E648;
					goto LABEL_40;
				}
			}
			return 0i64;
		}
		*(_QWORD*)&v26 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = 0x141DE0150i64;
		v15 = &unk_140C8A2C4;
	LABEL_39:
		v33 = v14;
		v27 = TlsValue;
		v28 = v26;
		v16 = sub_1401971E0(v15, 14, &v33, &v27);
		v17 = (void*)*((_QWORD*)&v26 + 1);
		TlsValue = &off_140B5E648;
	LABEL_40:
		v22 = v16;
		TlsSetValue(dwTlsIndex, v17);
		if (v22)
			DebugBreak();
		return 2147500037i64;
	}
}
// 140AE6450: using guessed type int dword_140AE6450[28];
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A2B0: using guessed type _DWORD dword_140C8A2B0;
// 140C8A2CC: using guessed type _DWORD dword_140C8A2CC;

