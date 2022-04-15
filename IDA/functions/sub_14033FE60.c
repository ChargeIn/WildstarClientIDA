//----- (000000014033FE60) ----------------------------------------------------
__int64 __fastcall sub_14033FE60(__int64 a1, __int64* a2, unsigned __int16* a3)
{
	void(__fastcall * **v5)(_QWORD); // rax
	void(__fastcall * **v6)(_QWORD); // rbx
	int* v8; // rax
	__int64 v9; // rbx
	int v10; // esi

	if (!a3 || !a2)
		return 2147942487i64;
	v5 = (void(__fastcall***)(_QWORD))sub_140343E40(a3);
	v6 = v5;
	if (v5)
	{
		(**v5)(v5);
		*a2 = (__int64)v6;
		return 0i64;
	}
	v8 = sub_14018B280(632i64, 0);
	if (v8)
		v9 = sub_140343AD0((__int64)v8);
	else
		v9 = 0i64;
	v10 = sub_140343D30(v9, (__int16*)a3);
	if (v10 >= 0)
	{
		*a2 = v9;
	}
	else if (v9)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 56i64))(v9, 1i64);
		return (unsigned int)v10;
	}
	return (unsigned int)v10;
}

