//----- (00000001402CADF0) ----------------------------------------------------
_QWORD* __fastcall sub_1402CADF0(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v4; // r14
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rdi
	_QWORD* v8; // rbx
	void(__fastcall * **v9)(_QWORD); // rcx
	__int64 v10; // rcx

	v4 = a3;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x2E8BA2E8BA2E8BA3i64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 5);
	if (v6 > 0)
	{
		v7 = a2 + 64;
		v8 = a3 + 8;
		do
		{
			v7 -= 176i64;
			v8 -= 22;
			v4 -= 22;
			*v4 = *(_QWORD*)(v7 - 64);
			*(v8 - 7) = *(_QWORD*)(v7 - 56);
			*(v8 - 6) = *(_QWORD*)(v7 - 48);
			*((_DWORD*)v8 - 10) = *(_DWORD*)(v7 - 40);
			*(v8 - 4) = *(_QWORD*)(v7 - 32);
			*(v8 - 2) = *(_QWORD*)(v7 - 16);
			*(_OWORD*)v8 = *(_OWORD*)v7;
			*((_OWORD*)v8 + 1) = *(_OWORD*)(v7 + 16);
			v9 = *(void(__fastcall****)(_QWORD))(v7 + 32);
			if ((void(__fastcall***)(_QWORD))v8[4] != v9)
			{
				if (v9)
					(**v9)(v9);
				v10 = v8[4];
				if (v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
				v8[4] = *(_QWORD*)(v7 + 32);
			}
			sub_14017B020(v8 + 5, v7 + 40);
			sub_14004EDB0(v8 + 9, v7 + 72);
			--v6;
			*((_DWORD*)v8 + 26) = *(_DWORD*)(v7 + 104);
		} while (v6 > 0);
	}
	return v4;
}

