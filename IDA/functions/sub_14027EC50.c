//----- (000000014027EC50) ----------------------------------------------------
void __fastcall sub_14027EC50(__int64 a1)
{
	__int64 v1; // rsi
	_QWORD* v3; // rdi
	void(__fastcall * **v4)(_QWORD); // rcx
	signed int v5; // ecx
	signed int v6; // r8d
	__int64 v7; // rsi
	_QWORD* v8; // rdi
	void(__fastcall * **v9)(_QWORD); // rcx
	signed int v10; // ecx
	signed int v11; // r8d

	v1 = *(int*)(a1 + 7896);
	if ((int)v1 < *(_DWORD*)(a1 + 7900))
	{
		v3 = (_QWORD*)(a1 + 7728 + 8 * v1);
		do
		{
			v4 = *(void(__fastcall****)(_QWORD))(a1 + 7888);
			if ((void(__fastcall***)(_QWORD)) * v3 != v4)
			{
				if (v4)
					(**v4)(v4);
				if (*v3)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
				*v3 = *(_QWORD*)(a1 + 7888);
			}
			LODWORD(v1) = v1 + 1;
			++v3;
		} while ((int)v1 < *(_DWORD*)(a1 + 7900));
		v5 = *(_DWORD*)(a1 + 7912);
		v6 = *(_DWORD*)(a1 + 7916);
		if (*(_DWORD*)(a1 + 7896) < v5)
			v5 = *(_DWORD*)(a1 + 7896);
		if (v6 < *(_DWORD*)(a1 + 7900))
			v6 = *(_DWORD*)(a1 + 7900);
		*(_QWORD*)(a1 + 7912) = __PAIR64__(v6, v5);
		*(_QWORD*)(a1 + 7896) = qword_140C79898;
	}
	v7 = *(int*)(a1 + 7904);
	if ((int)v7 < *(_DWORD*)(a1 + 7908))
	{
		v8 = (_QWORD*)(a1 + 7760 + 8 * v7);
		do
		{
			v9 = *(void(__fastcall****)(_QWORD))(a1 + 7888);
			if ((void(__fastcall***)(_QWORD)) * v8 != v9)
			{
				if (v9)
					(**v9)(v9);
				if (*v8)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v8 + 8i64))(*v8);
				*v8 = *(_QWORD*)(a1 + 7888);
			}
			LODWORD(v7) = v7 + 1;
			++v8;
		} while ((int)v7 < *(_DWORD*)(a1 + 7908));
		v10 = *(_DWORD*)(a1 + 7920);
		v11 = *(_DWORD*)(a1 + 7924);
		if (*(_DWORD*)(a1 + 7904) < v10)
			v10 = *(_DWORD*)(a1 + 7904);
		if (v11 < *(_DWORD*)(a1 + 7908))
			v11 = *(_DWORD*)(a1 + 7908);
		*(_QWORD*)(a1 + 7920) = __PAIR64__(v11, v10);
		*(_QWORD*)(a1 + 7904) = qword_140C79898;
	}
}
// 140C79898: using guessed type __int64 qword_140C79898;

