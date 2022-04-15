//----- (00000001405BB6C0) ----------------------------------------------------
__int64 __fastcall sub_1405BB6C0(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rcx
	__int64 result; // rax
	int v6; // ebx
	int v7; // ecx
	int v8; // r10d
	int v9; // r9d
	int v10; // r11d
	char* v11; // rdx
	__int64 v12; // rcx
	int v13; // eax
	int v14; // eax
	unsigned int v15; // esi
	int* v16; // rax
	__int64 v17; // rsi
	void(__fastcall * **v18)(_QWORD); // rcx
	__int64 v19; // rcx
	void(__fastcall * **v20)(_QWORD); // rcx
	__int64 v21; // rcx
	__int128 v22; // [rsp+40h] [rbp-88h] BYREF
	char v23[32]; // [rsp+50h] [rbp-78h] BYREF
	__int128 v24; // [rsp+70h] [rbp-58h]
	int v25[4]; // [rsp+80h] [rbp-48h]
	int v26; // [rsp+90h] [rbp-38h]

	v3 = *(_QWORD*)(a1 + 664);
	result = v3 >> 12;
	if ((v3 & 0x1000) != 0)
	{
		v6 = 0;
		result = (v3 & 1) != 0;
		if ((v3 & 2) != 0)
			result = (unsigned int)result | 2;
		if ((v3 & 0x10) != 0)
			result = (unsigned int)result | 4;
		if ((v3 & 0x20) != 0)
			result = (unsigned int)result | 8;
		if ((v3 & 0x40) != 0)
			result = (unsigned int)result | 0x10;
		if ((v3 & 0x80u) != 0i64)
			result = (unsigned int)result | 0x20;
		if ((v3 & 0x100) != 0)
			result = (unsigned int)result | 0x40;
		v7 = result & *(_DWORD*)(a2 + 20);
		if (((result & 3) == 0 || (v7 & 3) != 0) && ((result & 0x7C) == 0 || (v7 & 0x7C) != 0))
		{
			v8 = *(_DWORD*)(a1 + 728);
			v9 = *(_DWORD*)(a1 + 720);
			v10 = *(_DWORD*)(a1 + 716);
			v26 = 0;
			v11 = v23;
			v12 = 0i64;
			do
			{
				v13 = *(_DWORD*)((char*)&unk_140A14E90 + v12 * 4);
				v25[v12++] = 0;
				*(_DWORD*)&v23[v12 * 4 + 28] = v13;
				*(_QWORD*)v11 = 0i64;
				v11 += 8;
			} while (v12 < 4);
			v14 = *(_DWORD*)(a1 + 656);
			v26 |= 0x300u;
			v15 = 0;
			v24 = 0i64;
			v25[0] = v10;
			if ((v14 & 0x10000000) != 0)
				v15 = 0x10000000;
			v25[1] = v9;
			v25[2] = v8 - v9;
			v25[3] = v8;
			v16 = sub_14018B280(1280i64, 0);
			if (v16)
				v17 = sub_1405B94D0(
					(__int64)v16,
					*(_QWORD*)(a1 + 32),
					a1,
					&v22,
					v15,
					*(_DWORD*)(a1 + 664) & 0xFFF,
					(void(__fastcall***)(_QWORD))a2);
			else
				v17 = 0i64;
			*(_DWORD*)(v17 + 676) = *(_DWORD*)(a1 + 676);
			v18 = *(void(__fastcall****)(_QWORD))(a1 + 1032);
			if (v18)
				(**v18)(v18);
			v19 = *(_QWORD*)(v17 + 1184);
			if (v19)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
				*(_QWORD*)(v17 + 1184) = 0i64;
			}
			*(_QWORD*)(v17 + 1184) = *(_QWORD*)(a1 + 1032);
			*(_DWORD*)(v17 + 1192) = *(_DWORD*)(a1 + 1040);
			v20 = *(void(__fastcall****)(_QWORD))(a1 + 1080);
			if (v20)
				(**v20)(v20);
			v21 = *(_QWORD*)(v17 + 1232);
			if (v21)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
				*(_QWORD*)(v17 + 1232) = 0i64;
			}
			*(_QWORD*)(v17 + 1232) = *(_QWORD*)(a1 + 1080);
			*(_DWORD*)(v17 + 1240) = *(_DWORD*)(a1 + 1088);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			if ((*(_DWORD*)(a1 + 664) & 0x2000i64) != 0)
				v6 = 2;
			return sub_1400CD7A0(a1, v6);
		}
	}
	return result;
}

