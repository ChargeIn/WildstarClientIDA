//----- (00000001400C3730) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400C3730(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rbx
	__int64 v5; // rsi
	_QWORD* v6; // r14
	void(__fastcall * **v7)(_QWORD); // rdi

	v4 = (_QWORD*)a1;
	v5 = 6i64;
	if (a2)
	{
		v6 = (_QWORD*)(a2 + 16);
		do
		{
			v7 = (void(__fastcall***)(_QWORD)) * v6;
			if (*v6 != *v4)
			{
				if (v7)
					(**v7)(*v6);
				if (*v4)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
					*v4 = 0i64;
				}
				*v4 = v7;
			}
			++v6;
			v4 += 6;
			--v5;
		} while (v5);
		*(_QWORD*)(a1 + 288) = *(_QWORD*)(a2 + 64);
	}
	else
	{
		do
		{
			if (*v4)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
				*v4 = 0i64;
			}
			v4 += 6;
			--v5;
		} while (v5);
	}
	return sub_1400C3AD0(a1, (_DWORD*)(a1 + 336));
}

