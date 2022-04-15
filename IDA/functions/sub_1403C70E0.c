//----- (00000001403C70E0) ----------------------------------------------------
__int64 __fastcall sub_1403C70E0(__int64 a1, unsigned int* a2)
{
	unsigned int v3; // edx
	unsigned int v5; // edx
	__int64 result; // rax
	unsigned int v7; // edi
	unsigned int i; // esi
	__int64 v9; // rcx
	unsigned int j; // esi
	__int64 v11; // rcx
	unsigned int k; // esi
	__int64 v13; // rcx
	unsigned int m; // esi
	__int64 v15; // rcx
	unsigned int n; // esi
	__int64 v17; // rcx
	unsigned int ii; // esi
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // r9
	int v23; // ebx
	struct _FILETIME v24; // [rsp+30h] [rbp-78h] BYREF
	struct _SYSTEMTIME TlsValue; // [rsp+38h] [rbp-70h] BYREF
	LPVOID lpTlsValue; // [rsp+48h] [rbp-60h]
	struct _FILETIME FileTime; // [rsp+50h] [rbp-58h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-48h] BYREF
	LPVOID v29; // [rsp+70h] [rbp-38h]

	v3 = *a2;
	switch (v3)
	{
	case 0u:
		v5 = 1;
		goto LABEL_3;
	case 1u:
	case 2u:
	case 3u:
	case 4u:
	case 5u:
	case 6u:
	case 7u:
	case 8u:
	case 9u:
	case 0xAu:
	case 0xBu:
	case 0xCu:
	case 0xDu:
	case 0xEu:
	case 0xFu:
	case 0x10u:
	case 0x11u:
	case 0x12u:
	case 0x13u:
	case 0x14u:
	case 0x15u:
		v5 = v3 + 1;
	LABEL_3:
		sub_1403B5730(a1, v5, *((_QWORD*)a2 + 1));
		goto LABEL_4;
	case 0x16u:
		v7 = 0;
		*(_DWORD*)(a1 + 6976) = a2[2];
		for (i = 0; i < *(_DWORD*)(a1 + 164); ++i)
		{
			v9 = *(_QWORD*)(*(_QWORD*)(a1 + 176) + 8i64 * i);
			if (v9 && (*(_BYTE*)(*(_QWORD*)(v9 + 64) + 332i64) & 8) != 0)
				sub_14056A430(v9);
		}
		for (j = 0; j < *(_DWORD*)(a1 + 188); ++j)
		{
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 200) + 8i64 * j);
			if (v11 && (*(_BYTE*)(*(_QWORD*)(v11 + 64) + 332i64) & 8) != 0)
				sub_14056A430(v11);
		}
		for (k = 0; k < *(_DWORD*)(a1 + 212); ++k)
		{
			v13 = *(_QWORD*)(*(_QWORD*)(a1 + 224) + 8i64 * k);
			if (v13 && (*(_BYTE*)(*(_QWORD*)(v13 + 64) + 332i64) & 8) != 0)
				sub_14056A430(v13);
		}
		for (m = 0; m < *(_DWORD*)(a1 + 236); ++m)
		{
			v15 = *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8i64 * m);
			if (v15 && (*(_BYTE*)(*(_QWORD*)(v15 + 64) + 332i64) & 8) != 0)
				sub_14056A430(v15);
		}
		for (n = 0; n < *(_DWORD*)(a1 + 260); ++n)
		{
			v17 = *(_QWORD*)(*(_QWORD*)(a1 + 272) + 8i64 * n);
			if (v17 && (*(_BYTE*)(*(_QWORD*)(v17 + 64) + 332i64) & 8) != 0)
				sub_14056A430(v17);
		}
		for (ii = 0; ii < *(_DWORD*)(a1 + 284); ++ii)
		{
			v19 = *(_QWORD*)(*(_QWORD*)(a1 + 296) + 8i64 * ii);
			if (v19 && (*(_BYTE*)(*(_QWORD*)(v19 + 64) + 332i64) & 8) != 0)
				sub_14056A430(v19);
		}
		if (*(_DWORD*)(a1 + 308))
		{
			do
			{
				v20 = *(_QWORD*)(*(_QWORD*)(a1 + 320) + 8i64 * v7);
				if (v20)
				{
					if ((*(_BYTE*)(*(_QWORD*)(v20 + 64) + 332i64) & 8) != 0)
						sub_14056A430(v20);
				}
				++v7;
			} while (v7 < *(_DWORD*)(a1 + 308));
			*(_DWORD*)(a1 + 28568) = 1;
			result = 0i64;
		}
		else
		{
		LABEL_4:
			*(_DWORD*)(a1 + 28568) = 1;
			result = 0i64;
		}
		break;
	case 0x17u:
	case 0x18u:
	case 0x19u:
	case 0x1Au:
	case 0x1Bu:
	case 0x1Cu:
		sub_1403C7AC0(a1, a2);
		result = 0i64;
		break;
	case 0x1Du:
		*(_QWORD*)(a1 + 7000) = *((_QWORD*)a2 + 1);
		GetLocalTime(&SystemTime);
		SystemTimeToFileTime(&SystemTime, &FileTime);
		LocalFileTimeToFileTime(&FileTime, &v24);
		*(_QWORD*)(a1 + 7008) = *(_QWORD*)&v24 + 10000i64 * *(_QWORD*)(a1 + 7000);
		result = 0i64;
		break;
	case 0x1Eu:
		v21 = *(_QWORD*)(a1 + 29504) + 4400i64;
		*(_QWORD*)(a1 + 5744) = *((_QWORD*)a2 + 1);
		sub_1400A8020(v21);
		result = 0i64;
		break;
	default:
		*(_QWORD*)&TlsValue.wYear = &off_140B5E648;
		*(_QWORD*)&TlsValue.wHour = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v22 = *a2;
		SystemTime = TlsValue;
		v24 = (struct _FILETIME)0x141DF0998i64;
		v29 = lpTlsValue;
		v23 = sub_1401971E0(&dword_140C8A6A8, 22, &v24, v22, &SystemTime);
		*(_QWORD*)&TlsValue.wYear = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v23)
			DebugBreak();
		result = 2147500037i64;
		break;
	}
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A6A8: using guessed type _DWORD dword_140C8A6A8;

