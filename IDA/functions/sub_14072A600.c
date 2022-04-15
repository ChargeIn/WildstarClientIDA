//----- (000000014072A600) ----------------------------------------------------
void __fastcall sub_14072A600(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // rcx
	int* v5; // r8
	int v6; // ecx
	unsigned int v7; // edx
	unsigned int v8; // eax
	int v9; // ecx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	int v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+2Ch] [rbp-1Ch]
	__int64 v15; // [rsp+34h] [rbp-14h]
	int v16; // [rsp+3Ch] [rbp-Ch]
	int v17; // [rsp+60h] [rbp+18h] BYREF

	v17 = a3;
	if (*(_DWORD*)(a1 + 20) == 4 && *(_DWORD*)(a1 + 1360))
	{
		v4 = *(_QWORD*)(a1 + 1392);
		if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 1424i64) + 2896i64)
			|| *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1224i64) != v4)
		{
			if (dword_140C4B4E8)
				sub_14072AFA0(a1, &dword_140C4B4E8);
			sub_140729D70((_QWORD*)a1);
		}
		else
		{
			sub_140712A40(*(_QWORD**)(a1 + 1448), 0x10AA0u, (__int64)sub_140472EB0, a1);
			LOBYTE(v17) = 0;
			sub_1400161D0(qword_140C635F0, 0x3D4u, (__int64)&v17);
			*(_DWORD*)(a1 + 20) = 5;
		}
		v5 = (int*)qword_140C63750;
		v6 = dword_140C54730;
		if (*(_DWORD*)qword_140C63750 < dword_140C54730)
			v6 = *(_DWORD*)qword_140C63750;
		v7 = dword_140C54740[v6] + dword_140C636A8;
		v8 = *(_DWORD*)(a1 + 1192);
		if (v8 == -1)
		{
			*(_DWORD*)(a1 + 1192) = v7;
		}
		else
		{
			if (v8 < v7)
				v8 = dword_140C54740[v6] + dword_140C636A8;
			*(_DWORD*)(a1 + 1192) = v8;
		}
		*(_DWORD*)(a1 + 1360) = 0;
		*(_OWORD*)(a1 + 1344) = 0i64;
		v9 = dword_140C547F0;
		if (*v5 < dword_140C547F0)
			v9 = *v5;
		if (!*((_BYTE*)&dword_140C54800 + v9))
		{
			v10 = *(_QWORD*)(a1 + 1408);
			if (*(_DWORD*)(v10 + 48) == 1)
			{
				*(_DWORD*)(v10 + 48) = 0;
				v11 = *(_QWORD*)(v10 + 56);
				v12 = 1112i64;
				v14 = 0i64;
				v15 = 2i64;
				v13 = 1065353216;
				v16 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*, unsigned __int64))(*(_QWORD*)v11 + 584i64))(
					v11,
					0i64,
					&v12,
					0x140000000ui64);
			}
		}
	}
}
// 140C4B4E8: using guessed type int dword_140C4B4E8;
// 140C54730: using guessed type int dword_140C54730;
// 140C54740: using guessed type int dword_140C54740[16];
// 140C547F0: using guessed type int dword_140C547F0;
// 140C54800: using guessed type int dword_140C54800;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;

