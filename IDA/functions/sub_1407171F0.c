#include "../winhttp.h"

//----- (00000001407171F0) ----------------------------------------------------
__int64 __fastcall sub_1407171F0(unsigned int** a1, __int64 a2)
{
	int v3; // eax
	unsigned int v4; // ebx
	unsigned int v5; // r8d
	__int64 v6; // r10
	__int64 v7; // r11
	__int64 v8; // rcx
	__int64 v9; // rdx
	unsigned int v10; // ecx
	__int64 v11; // r10
	__int64 v12; // rcx
	__int64 v13; // rdx
	int v15; // ebx
	__int64(__fastcall * *v16)(); // [rsp+30h] [rbp-40h] BYREF
	__int128 v17; // [rsp+38h] [rbp-38h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-20h] BYREF
	__int128 v19; // [rsp+58h] [rbp-18h]
	__int64 v20; // [rsp+88h] [rbp+18h] BYREF

	if (a2)
	{
		if (!*a1)
		{
			*(_QWORD*)&v19 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v16 = TlsValue;
			v20 = 0x141E40580i64;
			v17 = v19;
			v3 = sub_140196F30(&dword_140C8B120, 40, &v20, &v16);
			goto LABEL_30;
		}
		v4 = **a1;
		v5 = *(_DWORD*)(a2 + 4);
		if (v4 == v5)
		{
			v6 = (__int64)a1[3];
			v7 = (__int64)(a1 + 2);
			v8 = *(_QWORD*)(v6 + 8);
			v9 = v6;
			while (v8)
			{
				if (*(_DWORD*)(v8 + 32) < *(_DWORD*)(a2 + 8))
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v9 = v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
			}
			if (v9 == v6 || (v10 = *(_DWORD*)(v9 + 32), v20 = v9, *(_DWORD*)(a2 + 8) < v10))
				v20 = v6;
			if (v20 != v6)
				return 0i64;
			LODWORD(v16) = *(_DWORD*)(a2 + 8);
		}
		else
		{
			if (v4 != *(_DWORD*)(a2 + 8))
			{
				*(_QWORD*)&v19 = 0i64;
				TlsValue = &off_140B5E648;
				*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v16 = TlsValue;
				v20 = 0x141E40520i64;
				v17 = v19;
				v3 = sub_140196F30(&dword_140C8B10C, 40, &v20, v4, &v16);
				goto LABEL_30;
			}
			v11 = (__int64)a1[3];
			v7 = (__int64)(a1 + 2);
			v12 = *(_QWORD*)(v11 + 8);
			v13 = v11;
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < v5)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v13 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v13 == v11 || (v20 = v13, v5 < *(_DWORD*)(v13 + 32)))
				v20 = v11;
			if (v20 != v11)
				return 0i64;
			LODWORD(v16) = v5;
		}
		*(_QWORD*)&v17 = a2;
		sub_140055F80(v7, (__int64)&TlsValue, &v16);
		return 0i64;
	}
	*(_QWORD*)&v19 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v16 = TlsValue;
	v20 = 0x141E40498i64;
	v17 = v19;
	v3 = sub_140196F30(&dword_140C8B11C, 40, &v20, &v16);
LABEL_30:
	v15 = v3;
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v19 + 1));
	if (v15)
		DebugBreak();
	return 2147500037i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B10C: using guessed type _DWORD dword_140C8B10C;
// 140C8B11C: using guessed type _DWORD dword_140C8B11C;
// 140C8B120: using guessed type _DWORD dword_140C8B120;

