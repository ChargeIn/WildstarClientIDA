//----- (000000014026A2D0) ----------------------------------------------------
__int64 __fastcall sub_14026A2D0(__int64 a1, _QWORD* a2, __int64 a3, _DWORD* a4)
{
	__int64 result; // rax
	__int128 v9; // xmm1
	unsigned int v10; // esi
	int v11; // ebp
	__int128 v12; // xmm1
	_DWORD* v13; // r8
	int v14; // eax
	int v15; // ecx
	int v16; // ecx
	int v17; // eax
	__int128 v18[2]; // [rsp+20h] [rbp-58h] BYREF
	__int128 v19; // [rsp+40h] [rbp-38h]
	__int128 v20; // [rsp+50h] [rbp-28h]

	result = sub_14026A900(a1, 1);
	if ((int)result < 0)
		return result;
	v9 = *(_OWORD*)(a3 + 16);
	v10 = 0;
	v11 = 0;
	v18[0] = *(_OWORD*)a3;
	v18[1] = v9;
	v12 = *(_OWORD*)(a3 + 48);
	v19 = *(_OWORD*)(a3 + 32);
	v20 = v12;
	if (!*(_QWORD*)(a1 + 6600))
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(a1 + 6608) + 128i64))(
			*(_QWORD*)(a1 + 6608),
			v18);
		if ((int)result < 0)
			return result;
	LABEL_12:
		result = sub_14026A800(a1, (__int64)a2, (unsigned int*)a3);
		if ((int)result < 0)
			return result;
		*(_QWORD*)(a1 + 56) = *a2;
		*(_QWORD*)(a1 + 64) = a2[1];
		*(_QWORD*)(a1 + 72) = a2[2];
		*(_QWORD*)(a1 + 80) = a2[3];
		*(_QWORD*)(a1 + 88) = a2[4];
		*(_DWORD*)(a1 + 6560) = *a4;
		*(_DWORD*)(a1 + 6564) = a4[1];
		*(_DWORD*)(a1 + 6568) = a4[2];
		*(_DWORD*)(a1 + 6572) = a4[3];
		*(_DWORD*)(a1 + 6576) = a4[4];
		v14 = a4[5];
		*(_DWORD*)(a1 + 6636) = v11;
		*(_DWORD*)(a1 + 6580) = v14;
		*(_QWORD*)(a1 + 96) = 0i64;
		*(_QWORD*)(a1 + 104) = 0i64;
		*(_QWORD*)(a1 + 112) = 0i64;
		*(_QWORD*)(a1 + 120) = 0i64;
		*(_QWORD*)(a1 + 128) = 0i64;
		v15 = *(_DWORD*)(a1 + 6576);
		*(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 6564);
		*(_DWORD*)(a1 + 100) = *(_DWORD*)(a1 + 6568);
		*(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 6572);
		v16 = v15 - 23;
		if (v16)
		{
			if (v16 != 1)
			{
				*(_DWORD*)(a1 + 104) = 1;
				*(_DWORD*)(a1 + 108) = 23;
			LABEL_19:
				v17 = sub_14026A900(a1, 2);
				if (v17 < 0)
					return (unsigned int)v17;
				return v10;
			}
			*(_DWORD*)(a1 + 104) = 4;
		}
		else
		{
			*(_DWORD*)(a1 + 104) = 2;
		}
		*(_DWORD*)(a1 + 108) = 21;
		goto LABEL_19;
	}
	if (DWORD2(v19) && !HIDWORD(v20) && (unsigned int)sub_1402649D0(*(_DWORD*)(a1 + 6240)))
	{
		HIDWORD(v20) = 0x80000000;
		v11 = 1;
	}
	v13 = a4;
	if (DWORD2(v19))
		v13 = 0i64;
	result = (*(__int64(__fastcall**)(_QWORD, __int128*, _DWORD*))(**(_QWORD**)(a1 + 6616) + 1056i64))(
		*(_QWORD*)(a1 + 6616),
		v18,
		v13);
	if ((int)result >= 0)
		goto LABEL_12;
	return result;
}

