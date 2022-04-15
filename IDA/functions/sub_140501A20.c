//----- (0000000140501A20) ----------------------------------------------------
__int64 __fastcall sub_140501A20(_QWORD* a1)
{
	__int64 v2; // r14
	unsigned __int64 v3; // rdx
	_DWORD* v4; // rax
	int v5; // esi
	_DWORD* v6; // rcx
	int v7; // eax
	int* v8; // rax
	unsigned __int16* v9; // rsi
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	int v12; // edi
	__int64* v13; // rbx
	__int64 v14; // rcx
	__int64 v16; // [rsp+30h] [rbp-1C8h] BYREF
	unsigned __int16* v17; // [rsp+38h] [rbp-1C0h]
	int* v18; // [rsp+40h] [rbp-1B8h]
	int* v19; // [rsp+48h] [rbp-1B0h]
	__int64 v20[50]; // [rsp+50h] [rbp-1A8h] BYREF
	char v21; // [rsp+1E8h] [rbp-10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = a1[2];
		v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = 1;
		if ((unsigned __int64)v4 < v3)
		{
			v6 = dword_140A12138;
			if (v4 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 1)
			{
				if ((unsigned __int64)v4 < v3)
					v6 = (_DWORD*)(a1[3] + 16i64);
				v7 = v6[2];
				if (!v7 || v7 == 1 && !*v6)
					v5 = 0;
			}
		}
		v8 = sub_14018B280(16i64, 0);
		v17 = (unsigned __int16*)v8;
		v18 = v8;
		v19 = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
		sub_140503450((__int64)v20);
		sub_140503600((__int64)v20, *(_DWORD*)(v2 + 8), *(_DWORD*)(v2 + 12), *(_DWORD*)(v2 + 16), *(_DWORD*)(v2 + 20));
		sub_140505290((__int64)v20, (__int64)&v16, *(_QWORD*)v2, v5 != 0);
		v9 = v17;
		v10 = (unsigned __int64*)sub_14018F0E0(&v16, v17)[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			sub_140058710((__int64)a1, v10, v11);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v17)
			sub_14018B900((__int64)v17, 0);
		v12 = 3;
		v13 = (__int64*)&v21;
		v20[0] = (__int64)off_140B6A420;
		do
		{
			v14 = *(v13 - 6);
			v13 -= 11;
			if (v14)
				sub_14018B900(v14, 0);
			if (*v13)
				sub_14018B900(*v13, 0);
			--v12;
		} while (v12 >= 0);
		if (v9)
			sub_14018B900((__int64)v9, 0);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();

