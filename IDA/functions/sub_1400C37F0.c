//----- (00000001400C37F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400C37F0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rbx
	__int64 v4; // r14
	__int64 v5; // rsi
	void(__fastcall * **v6)(_QWORD); // rdi

	v3 = (_QWORD*)a1;
	v4 = a2 - a1;
	v5 = 6i64;
	do
	{
		v6 = *(void(__fastcall****)(_QWORD))((char*)v3 + v4);
		if (v6 != (void(__fastcall***)(_QWORD)) * v3)
		{
			if (v6)
				(**v6)(*(_QWORD*)((char*)v3 + v4));
			if (*v3)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
				*v3 = 0i64;
			}
			*v3 = v6;
		}
		v3 += 6;
		--v5;
	} while (v5);
	return sub_1400C3AD0(a1, (_DWORD*)(a1 + 336));
}

