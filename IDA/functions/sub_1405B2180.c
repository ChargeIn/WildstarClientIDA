//----- (00000001405B2180) ----------------------------------------------------
_QWORD* __fastcall sub_1405B2180(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rsi
	void(__fastcall * **v6)(_QWORD); // rcx

	v3 = a3;
	v4 = (a2 - a1) >> 3;
	if (v4 > 0)
	{
		v5 = a2 - (_QWORD)a3;
		do
		{
			v6 = *(void(__fastcall****)(_QWORD))((char*)v3-- + v5 - 8);
			if ((void(__fastcall***)(_QWORD)) * v3 != v6)
			{
				if (v6)
					(**v6)(v6);
				if (*v3)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
				*v3 = *(_QWORD*)((char*)v3 + v5);
			}
			--v4;
		} while (v4 > 0);
	}
	return v3;
}

