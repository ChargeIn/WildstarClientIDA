//----- (00000001402CAF00) ----------------------------------------------------
_QWORD* __fastcall sub_1402CAF00(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v3; // r14
	__int64 v4; // rdx
	__int64 v5; // rsi
	__int64 v6; // rdi
	_QWORD* v7; // rbx
	void(__fastcall * **v8)(_QWORD); // rcx
	__int64 v9; // rcx

	v3 = a3;
	v4 = (unsigned __int128)((a2 - a1) * (__int128)0x2E8BA2E8BA2E8BA3i64) >> 64;
	v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 5);
	if (v5 > 0)
	{
		v6 = a1 + 64;
		v7 = a3 + 8;
		do
		{
			*v3 = *(_QWORD*)(v6 - 64);
			*(v7 - 7) = *(_QWORD*)(v6 - 56);
			*(v7 - 6) = *(_QWORD*)(v6 - 48);
			*((_DWORD*)v7 - 10) = *(_DWORD*)(v6 - 40);
			*(v7 - 4) = *(_QWORD*)(v6 - 32);
			*(v7 - 2) = *(_QWORD*)(v6 - 16);
			*(_OWORD*)v7 = *(_OWORD*)v6;
			*((_OWORD*)v7 + 1) = *(_OWORD*)(v6 + 16);
			v8 = *(void(__fastcall****)(_QWORD))(v6 + 32);
			if ((void(__fastcall***)(_QWORD))v7[4] != v8)
			{
				if (v8)
					(**v8)(v8);
				v9 = v7[4];
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				v7[4] = *(_QWORD*)(v6 + 32);
			}
			sub_14017B020(v7 + 5, v6 + 40);
			sub_14004EDB0(v7 + 9, v6 + 72);
			--v5;
			*((_DWORD*)v7 + 26) = *(_DWORD*)(v6 + 104);
			v7 += 22;
			v3 += 22;
			v6 += 176i64;
		} while (v5 > 0);
	}
	return v3;
}

