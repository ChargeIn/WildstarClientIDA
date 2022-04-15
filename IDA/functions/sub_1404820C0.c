//----- (00000001404820C0) ----------------------------------------------------
_DWORD* __fastcall sub_1404820C0(__int64 a1, __int64 a2, __int64 a3)
{
	_DWORD* v3; // rdi
	__int64 v5; // rbx
	_QWORD* v6; // rsi

	v3 = (_DWORD*)a3;
	v5 = a1;
	if (a1 != a2)
	{
		v6 = (_QWORD*)(a3 + 24);
		do
		{
			if (v3)
			{
				*v3 = *(_DWORD*)v5;
				*(v6 - 1) = 0i64;
				*v6 = 0i64;
				v6[1] = 0i64;
				sub_14001C1B0(v6 - 2, *(int**)(v5 + 16), *(_QWORD*)(v5 + 24));
			}
			v5 += 40i64;
			v3 += 10;
			v6 += 5;
		} while (v5 != a2);
	}
	return v3;
}

