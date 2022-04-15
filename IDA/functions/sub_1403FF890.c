//----- (00000001403FF890) ----------------------------------------------------
_DWORD* __fastcall sub_1403FF890(__int64 a1, __int64 a2, _DWORD* a3)
{
	_DWORD* v4; // rbx
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rdi
	void(__fastcall * **v8)(_QWORD); // rcx

	v4 = a3;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
	if (v6 > 0)
	{
		v7 = a2 - (_QWORD)a3;
		do
		{
			v8 = *(void(__fastcall****)(_QWORD))((char*)v4 + v7 - 48);
			v4 -= 12;
			if (v8)
				(**v8)(v8);
			if (*(_QWORD*)v4)
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v4 + 8i64))(*(_QWORD*)v4);
				*(_QWORD*)v4 = 0i64;
			}
			--v6;
			*(_QWORD*)v4 = *(_QWORD*)((char*)v4 + v7);
			v4[2] = *(_DWORD*)((char*)v4 + v7 + 8);
		} while (v6 > 0);
	}
	return v4;
}

